from re import match

HEADERS = []
ENUM_CASES = {}
with open("./include/tinyspv/spirv/unified1/SPIRV.hpp") as f:
    lines = [x.strip() for x in f.readlines()]
    for line in lines:
        if not line.startswith("//"):
            break
        HEADERS += [line]
    cur_enum_name = None
    cur_enum_cases = None
    found_case_values = None
    for line in lines:
        if "// Alias" in line:
            continue

        if line.startswith("};"):
            ENUM_CASES[cur_enum_name] = cur_enum_cases
            cur_enum_name = None
            cur_enum_cases = None
            found_case_values = None
            continue

        m = match(r"enum ([A-Za-z0-9]+) (?:\/\* <id> \*\/ )?{", line)
        if m:
            cur_enum_name = m[1]
            cur_enum_cases = []
            found_case_values = set()
            print(cur_enum_name)
            continue

        if cur_enum_name != None:
            m = match(cur_enum_name + r"([A-Za-z0-9]+) = ([0-9x]+),", line)
            if m:
                case_value = int(m[2], base=0)
                if case_value not in found_case_values:
                    cur_enum_cases += [m[1]]
                    found_case_values.add(case_value)
                continue

with open("./include/tinyspv/spirv/unified1/enum2str.hpp", "w") as f:
    f.writelines('\n'.join(HEADERS))
    f.writelines([
        "\n#include <cstdlib>\n",
        "#include \"tinyspv/spirv/unified1/SPIRV.hpp\"\n",
        "namespace tinyspv {\n",
        "template<typename TEnum> const char* enum2str(TEnum);\n",
    ])

    for name, cases in ENUM_CASES.items():
        if len(cases) > 0:
            f.writelines([
                "template<>\n",
                f"const char* enum2str<{name}>({name} v) {{\n",
                "  switch (v) {\n",
            ])
            for case in cases:
                f.write(f"  case {name}::{name}{case}: return \"{case}\";\n")
            f.writelines([
                "  default: std::abort();\n",
                "  }\n",
                "}\n",
            ])
        else:
            f.write(f"// Ignored `{name}` because it has no enumeration case.\n")
    f.write("} // namespace tinyspv\n")
