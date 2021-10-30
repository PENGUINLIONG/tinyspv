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
    "#include <optional>",
    "#include \"spirv/unified1/spirv.hpp\"",
    "namespace tinyspv {",
    "typedef uint32_t Id;",
    "typedef std::vector<uint32_t> Literal;",
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
def operand_ty2cpp_ty(ty):
    if ty.endswith("<id>"):
        return "Id"
    elif ty == "Literal":
        return "Literal"
    elif ''.join(ty.split(' ')) in ENUMERATIONS:
        return ''.join(ty.split(' '))
    else:
        raise RuntimeError(f"unexpected operand type '{ty}'")

out_src += [
    "// ------ operand struct definition begins ------",
]

def operand_quantifier2ty(is_optional, is_listed):
    if is_listed:
        return "std::vector<{}>"
    elif is_optional:
        return "std::optional<{}>"
    else:
        return "{}"

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
def operand2code(name_counter, operand):
    ty = operand["Type"]
    # If the name is not specified, name it with operand type. Unnamed operands
    # are usually results and result types.
    name = operand["Description"] if "Description" in operand else ty
    out = normalize_field_name(name)
    name = name_counter.get_counted_name(out)
    is_optional = operand["Optional"] if "Optional" in operand else False
    is_listed = operand["Listed"]  if "Listed" in operand else False

    ty = operand_quantifier2ty(is_optional, is_listed).format(operand_ty2cpp_ty(ty))
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

        code = [f"struct {opname} {{"]
        operand_codes = []
        for operand in operands:
            try:
                code += [operand2code(name_counter, operand)]
            except NotImplementedError as e:
                print(f"ignored unsupported instruction because {e}")
                continue
        code += ["};"]
        code = "\n".join(code)
        out_src += [code]

out_src += [
    "// ------ operand struct definition ends ------",
    "} // namespace tinyspv",
    "",
]

with open("include/tinyspv/operand-structs.hpp", "w") as f:
    f.write('\n'.join(out_src))
