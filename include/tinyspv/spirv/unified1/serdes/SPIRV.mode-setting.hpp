// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.mode-setting.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpMemoryModel deserialize_instr<instrs::OpMemoryModel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryModel out {};
  out.addressing_model = (AddressingModel)it.next_u32();
  out.memory_model = (MemoryModel)it.next_u32();
  return out;
}
template<>
instrs::OpEntryPoint deserialize_instr<instrs::OpEntryPoint>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEntryPoint out {};
  out.execution_model = (ExecutionModel)it.next_u32();
  out.entry_point = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  while (it.is_valid()) {
    out.interface.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpExecutionMode deserialize_instr<instrs::OpExecutionMode>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecutionMode out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) { out.see_execution_mode.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCapability deserialize_instr<instrs::OpCapability>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCapability out {};
  out.capability = (Capability)it.next_u32();
  return out;
}
template<>
instrs::OpExecutionModeId deserialize_instr<instrs::OpExecutionModeId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecutionModeId out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) {
    out.see_execution_mode.emplace_back((Id)it.next_u32());
  }
  return out;
}
} // namespace instrs
} // namespace tinyspv
