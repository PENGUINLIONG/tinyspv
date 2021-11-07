from re import match
from collections import defaultdict
from os import listdir

HEADER = []
OPERANDS = defaultdict(list)
with open("./include/tinyspv/spirv/unified1/SPIRV.instrs.hpp") as f:
    lines = f.readlines()
    while lines[0].startswith('//'):
        HEADER += [lines[0]]
        del lines[0]

    cur_scope = None
    for line in lines:
        try:
            icomment = line.index('//')
            line = line[:icomment]
        except ValueError:
            pass
        line = line.strip()
        if line.startswith('#'):
            continue
        if len(line) == 0:
            continue

        m = match(r"struct (\w+) {", line)
        if m:
            # Enter operand scope.
            assert cur_scope == None
            cur_scope = m[1]
            continue
        if line == "};":
            # Exit scope.
            assert cur_scope != None
            cur_scope = None
            continue
        if cur_scope != None:
            m = match(r"([\w:<>]+) (\w+);", line)
            if m:
                # Current scope.
                OPERANDS[cur_scope] += [(m[1], m[2])]

with open(f"./include/tinyspv/spirv/unified1/SPIRV.serde.hpp", "w") as f:
    f.writelines(HEADER)
    f.write("#pragma once\n")
    f.write(f"#include \"tinyspv/spirv/unified1/instrs/SPIRV.instrs.hpp\"\n")
    f.write("#include \"tinyspv/spv-reader.hpp\"\n")

    f.write("namespace tinyspv {\n")
    f.write("namespace serde {\n")
    f.write("template<typename T> T deserialize_instr(const Instruction&) { std::abort(); }\n")


    for opname, operands in OPERANDS.items():
        listed_operands = []
        literal_count = 0
        for ty, name in operands:
            m_optional = match(r"std::optional<(\w+)>", ty)
            m_listed = match(r"std::vector<(\w+)>", ty)
            if m_optional:
                ty = m_optional[1]
            elif m_listed:
                ty = m_listed[1]
                assert ty == "uint32_t" or ty == "Id"
                listed_operands += [(ty, name)]
            elif ty == "Literal" or ty == "LiteralList":
                literal_count += 1

        give_up = False
        # Give up generating parsers for tuple-lists that has literals.
        if len(listed_operands) > 0 and literal_count > 0:
            give_up = True

        if give_up:
            f.write(f"// tinyspv failed to generate operand parsing code due to unknown literal type for `{opname}`.\n")
        else:
            f.write(f"template<> instrs::{opname} deserialize_instr<instrs::{opname}>(const Instruction& instr);\n")

    f.write("} // namespace instrs\n")
    f.write("} // namespace tinyspv\n")

with open(f"./src/tinyspv/spirv/unified1/SPIRV.serde.cpp", "w") as f:
    f.writelines(HEADER)
    f.write("#pragma once\n")
    f.write(f"#include \"tinyspv/spirv/unified1/instrs/SPIRV.serde.hpp\"\n")

    f.write("namespace tinyspv {\n")
    f.write("namespace serde {\n")
    f.write("using instrs::Id;\n")
    f.write("using instrs::Literal;\n")

    for opname, operands in OPERANDS.items():
        op_code = [
            "template<>",
            f"instrs::{opname} deserialize_instr<instrs::{opname}>(const Instruction& instr) {{",
            "  OperandIterator it = instr.operands();",
            f"  instrs::{opname} out {{}};"
        ]

        listed_operands = []
        literal_count = 0
        for ty, name in operands:
            m_optional = match(r"std::optional<(\w+)>", ty)
            m_listed = match(r"std::vector<(\w+)>", ty)
            if m_optional:
                ty = m_optional[1]
                op_code += [f"  if (it.is_valid()) {{ out.{name} = ({ty})it.next_u32(); }}"]
            elif m_listed:
                ty = m_listed[1]
                assert ty == "uint32_t" or ty == "Id"
                listed_operands += [(ty, name)]
            elif ty == "Literal" or ty == "LiteralList":
                op_code += [f"  while (it.is_valid()) {{ out.{name}.emplace_back(it.next_u32()); }}"]
                literal_count += 1
            elif ty == "std::string":
                op_code += [f"  out.{name} = (std::string)it.next_str();"]
            else:
                op_code += [f"  out.{name} = ({ty})it.next_u32();"]

        if len(listed_operands) > 0:
            op_code += [f"  while (it.is_valid()) {{"]
            for ty, name in listed_operands:
                op_code += [f"    out.{name}.emplace_back(({ty})it.next_u32());"]
            op_code += ["  }"]

        op_code += [
            "  return out;",
            "}",
            "",
        ]

        give_up = False
        # Give up generating parsers for tuple-lists that has literals.
        if len(listed_operands) > 0 and literal_count > 0:
            give_up = True

        if give_up:
            f.write(f"\n// tinyspv failed to generate operand parsing code due to unknown literal type for `{opname}`.\n\n")
        else:
            f.write('\n'.join(op_code))
    f.write("} // namespace instrs\n")
    f.write("} // namespace tinyspv\n")
