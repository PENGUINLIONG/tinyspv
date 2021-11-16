import json
from re import match

SPEC = None
GENERATOR = "Unknown"
with open("specs/unified1/SPIRV.json") as f:
    SPEC = json.load(f)
    if "Generator" in SPEC:
        gen = SPEC["Generator"]
        GENERATOR = f"{gen['Name']} @ {gen['GitCommitHash']}"

HEADER = [
    "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.\n",
    "// USING JSON FROM:\n",
    f"//   {GENERATOR}\n",
    "#pragma once\n",
]
FOOTER = [
    "} // namespace tinyspv\n",
]

with open("./include/tinyspv/spirv/unified1/opcls.hpp", "w") as f:
    
    f.writelines(HEADER)
    f.writelines([
        '#include "tinyspv/spirv/unified1/SPIRV.hpp"\n',
        "namespace tinyspv {\n",
    ])
    f.writelines([
        "extern bool is_ty(Op op);\n",
        "extern bool is_expr(Op op);\n",
        "extern bool is_stmt(Op op);\n",
    ])
    f.writelines(FOOTER)

def has_result(instr):
    if "Operands" not in instr:
        return False
    for operand in instr["Operands"]:
        if "Type" in operand and operand["Type"] == "Result <id>":
            return True
    return False

with open("./src/tinyspv/spirv/unified1/opcls.cpp", "w") as f:
    f.writelines(HEADER)
    f.writelines([
        '#include "tinyspv/spirv/unified1/opcls.hpp"\n',
        "namespace tinyspv {\n",
    ])

    tys = []
    exprs = []
    stmts = []
    for instr_cls in SPEC["InstructionClasses"]:
        for instr in instr_cls["Instructions"]:
            if instr["Name"].startswith("OpType"):
                tys += [instr]
            elif has_result(instr):
                exprs += [instr]
            else:
                stmts += [instr]

    tys = [x["Name"] for x in tys]
    exprs = [x["Name"] for x in exprs]
    stmts = [x["Name"] for x in stmts]

    f.writelines([
        "bool is_ty(Op op) {\n",
        "  switch (op) {\n",
    ])
    for ty in tys:
        f.write(f"  case {ty}:\n")
    f.writelines([
        "    return true;\n",
        "  default: return false;\n",
        "  }\n",
        "}\n",
    ])

    f.writelines([
        "bool is_expr_op(Op op) {\n",
        "  switch (op) {\n",
    ])
    for expr in exprs:
        f.write(f"  case {expr}:\n")
    f.writelines([
        "    return true;\n",
        "  default: return false;\n",
        "  }\n",
        "}\n",
    ])

    f.writelines([
        "bool is_stmt_op(Op op) {\n",
        "  switch (op) {\n",
    ])
    for stmt in stmts:
        f.write(f"  case {stmt}:\n")
    f.writelines([
        "    return true;\n",
        "  default: return false;\n",
        "  }\n",
        "}\n",
    ])

    f.writelines(FOOTER)
