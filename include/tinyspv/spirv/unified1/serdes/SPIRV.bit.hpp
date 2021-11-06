// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.bit.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpShiftRightLogical deserialize_instr<instrs::OpShiftRightLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftRightLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpShiftRightArithmetic deserialize_instr<instrs::OpShiftRightArithmetic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftRightArithmetic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpShiftLeftLogical deserialize_instr<instrs::OpShiftLeftLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftLeftLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseOr deserialize_instr<instrs::OpBitwiseOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseXor deserialize_instr<instrs::OpBitwiseXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseAnd deserialize_instr<instrs::OpBitwiseAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpNot deserialize_instr<instrs::OpNot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldInsert deserialize_instr<instrs::OpBitFieldInsert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.insert = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldSExtract deserialize_instr<instrs::OpBitFieldSExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldSExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldUExtract deserialize_instr<instrs::OpBitFieldUExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldUExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitReverse deserialize_instr<instrs::OpBitReverse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitReverse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitCount deserialize_instr<instrs::OpBitCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
