// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.function.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpFunction deserialize_instr<instrs::OpFunction>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunction out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function_control = (FunctionControl)it.next_u32();
  out.function_type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFunctionParameter deserialize_instr<instrs::OpFunctionParameter>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunctionParameter out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFunctionCall deserialize_instr<instrs::OpFunctionCall>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunctionCall out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function = (Id)it.next_u32();
  while (it.is_valid()) {
    out.argument.emplace_back((Id)it.next_u32());
  }
  return out;
}
} // namespace instrs
} // namespace tinyspv
