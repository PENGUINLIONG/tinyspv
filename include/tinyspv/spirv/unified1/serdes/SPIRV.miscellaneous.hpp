// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.miscellaneous.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpUndef deserialize_instr<instrs::OpUndef>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUndef out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSizeOf deserialize_instr<instrs::OpSizeOf>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSizeOf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
