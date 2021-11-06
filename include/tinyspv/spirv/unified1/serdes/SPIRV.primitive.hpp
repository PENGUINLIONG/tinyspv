// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.primitive.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpEmitStreamVertex deserialize_instr<instrs::OpEmitStreamVertex>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEmitStreamVertex out {};
  out.stream = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEndStreamPrimitive deserialize_instr<instrs::OpEndStreamPrimitive>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEndStreamPrimitive out {};
  out.stream = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
