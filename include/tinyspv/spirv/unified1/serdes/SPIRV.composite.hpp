// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.composite.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpVectorExtractDynamic deserialize_instr<instrs::OpVectorExtractDynamic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorExtractDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorInsertDynamic deserialize_instr<instrs::OpVectorInsertDynamic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorInsertDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.component = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorShuffle deserialize_instr<instrs::OpVectorShuffle>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  while (it.is_valid()) { out.components.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCompositeConstruct deserialize_instr<instrs::OpCompositeConstruct>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeConstruct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpCompositeExtract deserialize_instr<instrs::OpCompositeExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCompositeInsert deserialize_instr<instrs::OpCompositeInsert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCopyObject deserialize_instr<instrs::OpCopyObject>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyObject out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTranspose deserialize_instr<instrs::OpTranspose>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTranspose out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCopyLogical deserialize_instr<instrs::OpCopyLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
