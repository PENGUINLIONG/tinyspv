import json

GENERATOR = "Unknown"
with open("specs/unified1/SPIRV.json") as f:
    SPEC = json.load(f)
    if "Generator" in SPEC:
        gen = SPEC["Generator"]
        GENERATOR = f"{gen['Name']} @ {gen['GitCommitHash']}"

with open("include/tinyspv/spirv/unified1/SPIRV.hpp", 'w') as f:
    src = [
        "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
        "// USING JSON FROM:",
        f"//   {GENERATOR}",
        "#pragma once",
        "",
        "namespace tinyspv {",
        "",
        "",
    ]
    f.write('\n'.join(src))

    # Generate enumerations.
    for enum in SPEC["Enumerations"]:
        name = ''.join(enum["Name"].split(' '))
        is_referenced = False
        if name.endswith("<id>"):
            name = name[:-4]
            is_referenced = True
            f.write(f"enum {name} /* <id> */ {{\n")
        else:
            f.write(f"enum {name} {{\n")

        cases = enum["Cases"]
        for case in cases:
            # Special case for `MagicNumber` in which there is no `Name`.
            case_name = case["Name"] if "Name" in case else ""
            case_value = case["Value"]
            f.write(f"  {name}{case_name} = {case_value},")
            if "Reserved" in case and case["Reserved"]:
                f.write(" // Reserved.\n")
            else:
                f.write("\n")

        f.write(f"}}; // enum {name}\n\n")

        print(name)

    f.write("enum Op {\n")

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
        "",
        "} // namespace tinyspv",
        "",
    ]
    f.write('\n'.join(src))

