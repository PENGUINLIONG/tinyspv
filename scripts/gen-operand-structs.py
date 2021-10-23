import json
import re
from collections import defaultdict

with open("third/SPIRV-Headers/include/spirv/unified1/spirv.core.grammar.json") as f:
    SPIRV_CORE_GRAMMAR = json.load(f)

instructions = list(SPIRV_CORE_GRAMMAR["instructions"])

# TODO: (penguinliong) Generate composite types by script.
header = [
    "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
    "#pragma once",
    "#include \"spirv/unified1/spirv.hpp\"",
    "namespace tinyspv {",
    "",
    "typedef uint32_t Id;",
    "",
    "// ------ composite type definition begins ------",
    "struct PairIdRefIdRef {",
    "  Id id_ref;",
    "  Id id_ref2;",
    "};",
    "struct PairIdRefLiteralInteger {",
    "  Id id_ref;",
    "  uint32_t literal_integer;",
    "};",
    "struct PairLiteralIntegerIdRef {",
    "  uint32_t literal_integer;",
    "  Id id_ref;",
    "};",
    "// ------ composite type definition ends ------",
    "",
    "// ------ operand struct definition begins ------"
]
footer = [
    "// ------ operand struct definition ends ------"
    "",
    "} // namespace tinyspv",
    "",
]

operand_kinds = list(SPIRV_CORE_GRAMMAR["operand_kinds"])
OPERAND_KIND2CATEGORY = {}
for operand_kind in operand_kinds:
    category = operand_kind["category"]
    kind = operand_kind["kind"]
    OPERAND_KIND2CATEGORY[kind] = category

def operand_kind2ty(kind):
    category = OPERAND_KIND2CATEGORY[kind]
    if category == "BitEnum":
        return f"spv::{kind}Mask"
    elif category == "ValueEnum":
        return f"spv::{kind}"
    elif category == "Id":
        return "Id"
    elif category == "Literal":
        # TODO: (penguinliong) Support multi-word literals.
        return "uint32_t"
    elif category == "Composite":
        return f"{kind}"
    else:
        raise RuntimeError(f"unexpected operand kind '{kind}'")

def operand_quantifier2ty(quantifier):
    if quantifier == None:
        return "{}"
    elif quantifier == "*":
        return "std::vector<{}>"
    elif quantifier == "?":
        return "std::unique_ptr<{}>"
    else:
        raise RuntimeError(f"unexpected quantifier `{quantifier}`")

def normalize_operand_name(operand):
    if "name" in operand:
        name = operand["name"]
        # This loop has only one iteration. We only care about the first quoted
        # string.
        for match in re.finditer("'(.+?)'", name):
            cap = match[1]
            out = ""
            # When it's named by a enumerating list, reduce the enumeration.
            # We check for `name` and `cap` respectively to correctly treat
            # `OpBranchConditional` and `OpPhi`.
            if name.endswith("..") or cap.endswith(".."):
                for c in cap.lower():
                    if c.isalpha():
                        out += c
                    elif out[-1] != '_':
                        out += '_'
                # Trim trailing underscore in case the last text segment is a
                # number
                if out[-1] == '_':
                    out = out[:-1]
                # English grammar.
                if out[-1] == 'x' or out[-1] == 's':
                    out += "es"
                else:
                    out += "s"
            else:
                # Keep numbers in name when it's not a list.
                for c in cap.lower():
                    if c.isalnum():
                        out += c
                    elif out[-1] != '_':
                        out += '_'
                # Some names contains formula so we still have to trim the
                # underscore, `OpImageSampleDrefExplicitLod` is an example.
                if out[-1] == '_':
                    out = out[:-1]
            return out
    # If the name is not specified, name it with operand kind. Unnamed operands
    # are usually results and result types.
    kind = operand["kind"]
    out = ""
    for c in kind:
        if c.isupper() and len(out) > 0:
            out += "_"
        out += c.lower()
    return out

def operand2code(name_counter, operand):
    kind = operand["kind"]
    name = name_counter.get_counted_name(normalize_operand_name(operand))
    quantifier = operand["quantifier"] if "quantifier" in operand else None

    ty = operand_quantifier2ty(quantifier).format(operand_kind2ty(kind))
    code = f"  {ty} {name};"
    return code

out_src = ['\n'.join(header)]

class NameCounter:
    def __init__(self):
        self.inner = defaultdict(int)
    def get_counted_name(self, name):
        self.inner[name] += 1
        return name if self.inner[name] == 1 else f"{name}{self.inner[name]}"

for instruction in instructions:
    name_counter = NameCounter()
    opname = instruction["opname"]
    clazz = instruction["class"]
    if clazz == "@exclude":
        continue
    opcode = instruction["opcode"]
    operands = instruction["operands"] if "operands" in instruction else []
    capabilities = list(instruction["capabilities"] if "capabilities" in instruction else [])

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

out_src += ['\n'.join(footer)]

with open("include/tinyspv/operand-structs.hpp", "w") as f:
    f.write('\n'.join(out_src))
