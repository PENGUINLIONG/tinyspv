// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.derivative.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpDPdx deserialize_instr<instrs::OpDPdx>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdx out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdy deserialize_instr<instrs::OpDPdy>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdy out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidth deserialize_instr<instrs::OpFwidth>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidth out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdxFine deserialize_instr<instrs::OpDPdxFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdxFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdyFine deserialize_instr<instrs::OpDPdyFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdyFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidthFine deserialize_instr<instrs::OpFwidthFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidthFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdxCoarse deserialize_instr<instrs::OpDPdxCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdxCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdyCoarse deserialize_instr<instrs::OpDPdyCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdyCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidthCoarse deserialize_instr<instrs::OpFwidthCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidthCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
