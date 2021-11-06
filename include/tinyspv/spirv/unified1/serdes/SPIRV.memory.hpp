// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.memory.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpVariable deserialize_instr<instrs::OpVariable>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVariable out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  if (it.is_valid()) { out.initializer = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpImageTexelPointer deserialize_instr<instrs::OpImageTexelPointer>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageTexelPointer out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.sample = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLoad deserialize_instr<instrs::OpLoad>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpStore deserialize_instr<instrs::OpStore>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpStore out {};
  out.pointer = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCopyMemory deserialize_instr<instrs::OpCopyMemory>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyMemory out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCopyMemorySized deserialize_instr<instrs::OpCopyMemorySized>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyMemorySized out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  out.size = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpAccessChain deserialize_instr<instrs::OpAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpInBoundsAccessChain deserialize_instr<instrs::OpInBoundsAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpInBoundsAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpPtrAccessChain deserialize_instr<instrs::OpPtrAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.element = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpArrayLength deserialize_instr<instrs::OpArrayLength>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpArrayLength out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.structure = (Id)it.next_u32();
  out.array_member = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpGenericPtrMemSemantics deserialize_instr<instrs::OpGenericPtrMemSemantics>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericPtrMemSemantics out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpInBoundsPtrAccessChain deserialize_instr<instrs::OpInBoundsPtrAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpInBoundsPtrAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.element = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpPtrEqual deserialize_instr<instrs::OpPtrEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrNotEqual deserialize_instr<instrs::OpPtrNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrDiff deserialize_instr<instrs::OpPtrDiff>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrDiff out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
