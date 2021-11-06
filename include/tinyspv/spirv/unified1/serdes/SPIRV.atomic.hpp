// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.atomic.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpAtomicLoad deserialize_instr<instrs::OpAtomicLoad>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicStore deserialize_instr<instrs::OpAtomicStore>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicStore out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicExchange deserialize_instr<instrs::OpAtomicExchange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicExchange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicCompareExchange deserialize_instr<instrs::OpAtomicCompareExchange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicCompareExchange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.equal = (Id)it.next_u32();
  out.unequal = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.comparator = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicCompareExchangeWeak deserialize_instr<instrs::OpAtomicCompareExchangeWeak>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicCompareExchangeWeak out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.equal = (Id)it.next_u32();
  out.unequal = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.comparator = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIIncrement deserialize_instr<instrs::OpAtomicIIncrement>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIIncrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIDecrement deserialize_instr<instrs::OpAtomicIDecrement>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIDecrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIAdd deserialize_instr<instrs::OpAtomicIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicISub deserialize_instr<instrs::OpAtomicISub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicSMin deserialize_instr<instrs::OpAtomicSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicUMin deserialize_instr<instrs::OpAtomicUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicSMax deserialize_instr<instrs::OpAtomicSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicUMax deserialize_instr<instrs::OpAtomicUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicAnd deserialize_instr<instrs::OpAtomicAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicOr deserialize_instr<instrs::OpAtomicOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicXor deserialize_instr<instrs::OpAtomicXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFlagTestAndSet deserialize_instr<instrs::OpAtomicFlagTestAndSet>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFlagTestAndSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFlagClear deserialize_instr<instrs::OpAtomicFlagClear>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFlagClear out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFAddEXT deserialize_instr<instrs::OpAtomicFAddEXT>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFAddEXT out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
