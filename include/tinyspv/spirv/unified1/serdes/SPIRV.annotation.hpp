// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.annotation.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpDecorate deserialize_instr<instrs::OpDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorate out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpMemberDecorate deserialize_instr<instrs::OpMemberDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberDecorate out {};
  out.structure_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpDecorationGroup deserialize_instr<instrs::OpDecorationGroup>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorationGroup out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupDecorate deserialize_instr<instrs::OpGroupDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupDecorate out {};
  out.decoration_group = (Id)it.next_u32();
  while (it.is_valid()) {
    out.targets.emplace_back((Id)it.next_u32());
  }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpGroupMemberDecorate`.

template<>
instrs::OpDecorateId deserialize_instr<instrs::OpDecorateId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorateId out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) {
    out.see_decoration.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpDecorateString deserialize_instr<instrs::OpDecorateString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorateString out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpMemberDecorateString deserialize_instr<instrs::OpMemberDecorateString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberDecorateString out {};
  out.struct_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
} // namespace instrs
} // namespace tinyspv
