// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.debug.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpSourceContinued deserialize_instr<instrs::OpSourceContinued>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSourceContinued out {};
  while (it.is_valid()) { out.continued_source.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSource deserialize_instr<instrs::OpSource>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSource out {};
  out.source_language = (SourceLanguage)it.next_u32();
  out.version = (uint32_t)it.next_u32();
  if (it.is_valid()) { out.file = (Id)it.next_u32(); }
  if (it.is_valid()) { out.source = (Literal)it.next_u32(); }
  return out;
}
template<>
instrs::OpSourceExtension deserialize_instr<instrs::OpSourceExtension>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSourceExtension out {};
  while (it.is_valid()) { out.extension.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpName deserialize_instr<instrs::OpName>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpName out {};
  out.target = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpMemberName deserialize_instr<instrs::OpMemberName>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberName out {};
  out.type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpString deserialize_instr<instrs::OpString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpString out {};
  out.result_id = (Id)it.next_u32();
  out.string = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpLine deserialize_instr<instrs::OpLine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLine out {};
  out.file = (Id)it.next_u32();
  out.line = (uint32_t)it.next_u32();
  out.column = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpModuleProcessed deserialize_instr<instrs::OpModuleProcessed>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpModuleProcessed out {};
  while (it.is_valid()) { out.process.emplace_back(it.next_u32()); }
  return out;
}
} // namespace instrs
} // namespace tinyspv
