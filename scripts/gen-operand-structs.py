import json
import re
from collections import defaultdict

out_src = []
GENERATOR = "Unknown"
with open("specs/unified1/SPIRV.json") as f:
    SPEC = json.load(f)
    if "Generator" in SPEC:
        gen = SPEC["Generator"]
        GENERATOR = f"{gen['Name']} @ {gen['GitCommitHash']}"

out_src += [
    "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
    "// USING JSON FROM:",
    f"//   {GENERATOR}",
    "#pragma once",
    "#include <vector>",
    "#include <string>",
    "#include <optional>",
    "#include \"tinyspv/spirv/unified1/spirv.hpp\"",
    "namespace tinyspv {",
    "namespace instrs {",
    "typedef uint32_t Id;",
    "typedef std::vector<uint32_t> Literal;",
    "typedef std::vector<uint32_t> LiteralList;",
]

class NameCounter:
    def __init__(self):
        self.inner = defaultdict(int)
    def get_counted_name(self, name):
        self.inner[name] += 1
        return name if self.inner[name] == 1 else f"{name}{self.inner[name]}"


ENUMERATIONS = set()
for enum in SPEC["Enumerations"]:
    ENUMERATIONS.add(''.join(enum["Name"].split(' ')))
def operand_ty2cpp_ty(ty, literal_as_u32):
    if ty.endswith("<id>"):
        return "Id"
    elif ty == "Literal":
        if literal_as_u32:
            return "uint32_t"
        else:
            return "Literal"
    elif ty == "@STRING_LITERAL":
        return "std::string"
    elif ''.join(ty.split(' ')) in ENUMERATIONS:
        return ''.join(ty.split(' '))
    else:
        raise RuntimeError(f"unexpected operand type '{ty}'")

out_src += [
    "// ------ operand struct definition begins ------",
]

def operand_quantifier2ty(is_optional, is_listed, cpp_ty):
    if is_listed:
        if cpp_ty == "Literal":
            return "LiteralList"
        else:
            return f"std::vector<{cpp_ty}>"
    elif is_optional:
        return f"std::optional<{cpp_ty}>"
    else:
        return cpp_ty

def normalize_field_name(txt) -> str:
    out = ""
    was_upper = False
    for c in txt:
        if c.isalnum():
            if c.isupper() and not was_upper and len(out) != 0 and out[-1] != '_':
                out += '_'
            out += c.lower()
            was_upper = c.isupper()
        elif c == ' ' and out[-1] != '_':
            out += '_'
    return out
def operand2code(name_counter, operand, literal_as_u32):
    ty = operand["Type"]
    # If the name is not specified, name it with operand type. Unnamed operands
    # are usually results and result types.
    name = operand["Description"] if "Description" in operand else ty
    out = normalize_field_name(name)
    name = name_counter.get_counted_name(out)
    if ty == "Literal" and ("name" in name or "string" in name):
        # If the variable names follow some special patterns we elevate them to
        # specialized string type.
        ty = "@STRING_LITERAL"
    is_optional = operand["Optional"] if "Optional" in operand else False
    is_listed = operand["Listed"]  if "Listed" in operand else False

    # Force disable literal type inference when the operand has a variable size.
    if is_optional or is_listed:
        literal_as_u32 = False

    cpp_ty = operand_ty2cpp_ty(ty, literal_as_u32)
    ty = operand_quantifier2ty(is_optional, is_listed, cpp_ty)
    code = f"  {ty} {name};"
    return code

for instr_cls in SPEC["InstructionClasses"]:
    instr_cls_name = instr_cls["Name"]
    for instr in instr_cls["Instructions"]:
        name_counter = NameCounter()
        opname = instr["Name"]
        opcode = instr["Opcode"]
        operands = instr["Operands"] if "Operands" in instr else []
        capabilities = list(instr["EnablingCapabilities"] if "EnablingCapabilities" in instr else [])

        # First word encoding opcode and instruction size is subtracted off.
        min_size = instr["MinWordCount"] - 1
        is_variable_size = instr["VariableWordCount"] if "VariableWordCount" in instr else False
        min_operand_count = len([x for x in operands if "Optional" not in x and "Listed" not in x])

        code = [f"struct {opname} {{"]
        operand_codes = []
        for i, operand in enumerate(operands):
            if i + 1 >= min_operand_count:
                if min_operand_count == len(operands) and min_size == min_operand_count:
                    # No optional or listed operand but the size is variable; it's a
                    # string literal at the end of the instruction.
                    literal_as_u32 = False
                else:
                    # Optional/listed operand exists, we have no idea what the
                    # last non-o/l-qualified operand is, but it's preferred we
                    # guess that it's a 32-bit word. It's unusual we use a lot
                    # of string literals in SPIR-V except for `OpEntryPoint`.
                    # Also note that the operand type might be elevated to
                    # `std::string` if it has a special name.
                    literal_as_u32 = True
            else:
                # The first N operands within `min_operand_count` can be safely
                # inferred.
                literal_as_u32 = True
            if not is_variable_size and min_size == min_operand_count:
                # Fixed-size instruction always have 32-bit literals only.
                literal_as_u32 = True
            try:
                code += [operand2code(name_counter, operand, literal_as_u32)]
            except NotImplementedError as e:
                print(f"ignored unsupported instruction because {e}")
                continue
        code += ["};"]
        if "Aliases" in instr:
            for alias in instr["Aliases"]:
                code += [f"typedef {opname} {alias};"]

        code = "\n".join(code)
        out_src += [code]

out_src += [
    "// ------ operand struct definition ends ------",
    "} // namespace instrs",
    "} // namespace tinyspv",
    "",
]

with open("include/tinyspv/spirv/unified1/operand-structs.hpp", "w") as f:
    f.write('\n'.join(out_src))
