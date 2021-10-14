from re import match

op_names = []
with open("./third/SPIRV-Headers/include/spirv/unified1/spirv.hpp") as f:
    lines = [x.strip() for x in f.readlines()]
    for line in lines:
        m = match(r"case Op([A-Za-z0-9]+):", line)
        if m:
            op_names += [m[1]]

with open("./src/tinyspv/opcode2str.cpp", "w") as f:
    src = [
        "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
        "#include \"tinyspv/opcode2str.hpp\"",
        "namespace tinyspv {",
        "const char* opcode2str(int opcode) {",
        "switch (opcode) {",
    ]
    src += [f"case spv::Op::Op{x}: return \"{x}\";" for x in op_names]
    src += [
        "default: return nullptr;",
        "}",
        "}",
        "}",
        "",
    ]
    f.write('\n'.join(src))

with open("./include/tinyspv/opcode2str.hpp", "w") as f:
    src = [
        "// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.",
        "#pragma once",
        "#include \"spirv/unified1/spirv.hpp\"",
        "namespace tinyspv {"
        "extern const char* opcode2str(int opcode);",
        "}",
        "",
    ]
    f.write('\n'.join(src))
