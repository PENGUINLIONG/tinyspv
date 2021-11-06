// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.constant-creation.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpConstantTrue deserialize_instr<instrs::OpConstantTrue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstantFalse deserialize_instr<instrs::OpConstantFalse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstant deserialize_instr<instrs::OpConstant>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpConstantComposite deserialize_instr<instrs::OpConstantComposite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpConstantSampler deserialize_instr<instrs::OpConstantSampler>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantSampler out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampler_addressing_mode = (SamplerAddressingMode)it.next_u32();
  out.param = (uint32_t)it.next_u32();
  out.sampler_filter_mode = (SamplerFilterMode)it.next_u32();
  return out;
}
template<>
instrs::OpConstantNull deserialize_instr<instrs::OpConstantNull>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantNull out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstantTrue deserialize_instr<instrs::OpSpecConstantTrue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstantFalse deserialize_instr<instrs::OpSpecConstantFalse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstant deserialize_instr<instrs::OpSpecConstant>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSpecConstantComposite deserialize_instr<instrs::OpSpecConstantComposite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpSpecConstantOp deserialize_instr<instrs::OpSpecConstantOp>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantOp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.opcode = (uint32_t)it.next_u32();
  while (it.is_valid()) {
    out.operands.emplace_back((Id)it.next_u32());
  }
  return out;
}
} // namespace instrs
} // namespace tinyspv
