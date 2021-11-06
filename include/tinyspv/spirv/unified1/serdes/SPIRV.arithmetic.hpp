// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.arithmetic.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpSNegate deserialize_instr<instrs::OpSNegate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFNegate deserialize_instr<instrs::OpFNegate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAdd deserialize_instr<instrs::OpIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFAdd deserialize_instr<instrs::OpFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpISub deserialize_instr<instrs::OpISub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFSub deserialize_instr<instrs::OpFSub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFSub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIMul deserialize_instr<instrs::OpIMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFMul deserialize_instr<instrs::OpFMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUDiv deserialize_instr<instrs::OpUDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSDiv deserialize_instr<instrs::OpSDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFDiv deserialize_instr<instrs::OpFDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUMod deserialize_instr<instrs::OpUMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSRem deserialize_instr<instrs::OpSRem>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSMod deserialize_instr<instrs::OpSMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFRem deserialize_instr<instrs::OpFRem>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFMod deserialize_instr<instrs::OpFMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorTimesScalar deserialize_instr<instrs::OpVectorTimesScalar>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesScalar deserialize_instr<instrs::OpMatrixTimesScalar>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorTimesMatrix deserialize_instr<instrs::OpVectorTimesMatrix>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesVector deserialize_instr<instrs::OpMatrixTimesVector>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesVector out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesMatrix deserialize_instr<instrs::OpMatrixTimesMatrix>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.left_matrix = (Id)it.next_u32();
  out.right_matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpOuterProduct deserialize_instr<instrs::OpOuterProduct>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpOuterProduct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDot deserialize_instr<instrs::OpDot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAddCarry deserialize_instr<instrs::OpIAddCarry>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAddCarry out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpISubBorrow deserialize_instr<instrs::OpISubBorrow>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpISubBorrow out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUMulExtended deserialize_instr<instrs::OpUMulExtended>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSMulExtended deserialize_instr<instrs::OpSMulExtended>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
