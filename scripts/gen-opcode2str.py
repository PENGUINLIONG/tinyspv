from re import match

HEADERS = []
op_names = []
with open("./include/tinyspv/spirv/unified1/spirv.hpp") as f:
    lines = [x.strip() for x in f.readlines()]
    for line in lines:
        if not line.startswith("//"):
            break
        HEADERS += [line]
    for line in lines:
        m = match(r"Op([A-Za-z0-9]+) = [0-9]+,", line)
        if m:
            op_names += [m[1]]

with open("./src/tinyspv/opcode2str.cpp", "w") as f:
    src = HEADERS + [
        "#include \"tinyspv/opcode2str.hpp\"",
        "namespace tinyspv {",
        "const char* opcode2str(int opcode) {",
        "  switch (opcode) {",
    ]
    src += [f"  case spv::Op::Op{x}: return \"{x}\";" for x in op_names]
    src += [
        "  default: return nullptr;",
        "}",
        "}",
        "} // namespace tinyspv",
        "",
    ]
    f.write('\n'.join(src))

with open("./include/tinyspv/opcode2str.hpp", "w") as f:
    src = HEADERS + [
        "#pragma once",
        "#include \"spirv/unified1/spirv.hpp\"",
        "namespace tinyspv {",
        "extern const char* opcode2str(int opcode);",
        "} // namespace tinyspv",
        "",
    ]
    f.write('\n'.join(src))
