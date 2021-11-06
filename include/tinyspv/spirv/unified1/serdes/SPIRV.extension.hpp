// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.extension.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpExtension deserialize_instr<instrs::OpExtension>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtension out {};
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpExtInstImport deserialize_instr<instrs::OpExtInstImport>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtInstImport out {};
  out.result_id = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpExtInst deserialize_instr<instrs::OpExtInst>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtInst out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.set = (Id)it.next_u32();
  out.instruction = (uint32_t)it.next_u32();
  while (it.is_valid()) {
    out.operand.emplace_back((Id)it.next_u32());
  }
  return out;
}
} // namespace instrs
} // namespace tinyspv
