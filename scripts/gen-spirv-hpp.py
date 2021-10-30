import json

with open("specs/unified1/SPIRV.json") as f:
    SPEC = json.load(f)

with open("include/tinyspv/spirv/unified1/SPIRV.hpp", 'w') as f:
    src = [
        "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
        "#pragma once",
        "namespace tinyspv {",
        "enum Op {",
        "",
    ]
    f.write('\n'.join(src))

    # Generate instruction opcodes.
    for instr_cls in SPEC["InstructionClasses"]:
        instr_cls_name = instr_cls["Name"] 
        f.write(f"  // {instr_cls_name}.\n")
        for instr in instr_cls["Instructions"]:
            name = instr["Name"]
            opcode = instr["Opcode"]
            f.write(f"  {name} = {opcode},\n")
            if "Aliases" in instr:
                for alias in instr["Aliases"]:
                    f.write(f"  {alias} = {opcode}, // Alias of {name}.\n")

    src = [
        "}; // enum Opcode",
        "} // namespace tinyspv",
        "",
    ]
    f.write('\n'.join(src))

