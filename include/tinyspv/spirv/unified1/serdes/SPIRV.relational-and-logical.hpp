// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.relational-and-logical.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpAny deserialize_instr<instrs::OpAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAll deserialize_instr<instrs::OpAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsNan deserialize_instr<instrs::OpIsNan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsNan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsInf deserialize_instr<instrs::OpIsInf>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsInf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsFinite deserialize_instr<instrs::OpIsFinite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsFinite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsNormal deserialize_instr<instrs::OpIsNormal>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsNormal out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSignBitSet deserialize_instr<instrs::OpSignBitSet>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSignBitSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLessOrGreater deserialize_instr<instrs::OpLessOrGreater>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLessOrGreater out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpOrdered deserialize_instr<instrs::OpOrdered>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpOrdered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUnordered deserialize_instr<instrs::OpUnordered>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUnordered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalEqual deserialize_instr<instrs::OpLogicalEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalNotEqual deserialize_instr<instrs::OpLogicalNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalOr deserialize_instr<instrs::OpLogicalOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalAnd deserialize_instr<instrs::OpLogicalAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalNot deserialize_instr<instrs::OpLogicalNot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSelect deserialize_instr<instrs::OpSelect>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSelect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.condition = (Id)it.next_u32();
  out.object_1 = (Id)it.next_u32();
  out.object_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIEqual deserialize_instr<instrs::OpIEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpINotEqual deserialize_instr<instrs::OpINotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpINotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUGreaterThan deserialize_instr<instrs::OpUGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSGreaterThan deserialize_instr<instrs::OpSGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUGreaterThanEqual deserialize_instr<instrs::OpUGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSGreaterThanEqual deserialize_instr<instrs::OpSGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpULessThan deserialize_instr<instrs::OpULessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpULessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSLessThan deserialize_instr<instrs::OpSLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpULessThanEqual deserialize_instr<instrs::OpULessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpULessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSLessThanEqual deserialize_instr<instrs::OpSLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdEqual deserialize_instr<instrs::OpFOrdEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordEqual deserialize_instr<instrs::OpFUnordEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdNotEqual deserialize_instr<instrs::OpFOrdNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordNotEqual deserialize_instr<instrs::OpFUnordNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdLessThan deserialize_instr<instrs::OpFOrdLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordLessThan deserialize_instr<instrs::OpFUnordLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdGreaterThan deserialize_instr<instrs::OpFOrdGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordGreaterThan deserialize_instr<instrs::OpFUnordGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdLessThanEqual deserialize_instr<instrs::OpFOrdLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordLessThanEqual deserialize_instr<instrs::OpFUnordLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdGreaterThanEqual deserialize_instr<instrs::OpFOrdGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordGreaterThanEqual deserialize_instr<instrs::OpFUnordGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
