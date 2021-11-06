// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.non-uniform.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpGroupNonUniformElect deserialize_instr<instrs::OpGroupNonUniformElect>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformElect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAll deserialize_instr<instrs::OpGroupNonUniformAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAny deserialize_instr<instrs::OpGroupNonUniformAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAllEqual deserialize_instr<instrs::OpGroupNonUniformAllEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAllEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBroadcast deserialize_instr<instrs::OpGroupNonUniformBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBroadcastFirst deserialize_instr<instrs::OpGroupNonUniformBroadcastFirst>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBroadcastFirst out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallot deserialize_instr<instrs::OpGroupNonUniformBallot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformInverseBallot deserialize_instr<instrs::OpGroupNonUniformInverseBallot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformInverseBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotBitExtract deserialize_instr<instrs::OpGroupNonUniformBallotBitExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotBitExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotBitCount deserialize_instr<instrs::OpGroupNonUniformBallotBitCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotFindLSB deserialize_instr<instrs::OpGroupNonUniformBallotFindLSB>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotFindLSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotFindMSB deserialize_instr<instrs::OpGroupNonUniformBallotFindMSB>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotFindMSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffle deserialize_instr<instrs::OpGroupNonUniformShuffle>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleXor deserialize_instr<instrs::OpGroupNonUniformShuffleXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.mask = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleUp deserialize_instr<instrs::OpGroupNonUniformShuffleUp>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleUp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleDown deserialize_instr<instrs::OpGroupNonUniformShuffleDown>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleDown out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformIAdd deserialize_instr<instrs::OpGroupNonUniformIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFAdd deserialize_instr<instrs::OpGroupNonUniformFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformIMul deserialize_instr<instrs::OpGroupNonUniformIMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMul deserialize_instr<instrs::OpGroupNonUniformFMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformSMin deserialize_instr<instrs::OpGroupNonUniformSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformUMin deserialize_instr<instrs::OpGroupNonUniformUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMin deserialize_instr<instrs::OpGroupNonUniformFMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformSMax deserialize_instr<instrs::OpGroupNonUniformSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformUMax deserialize_instr<instrs::OpGroupNonUniformUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMax deserialize_instr<instrs::OpGroupNonUniformFMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseAnd deserialize_instr<instrs::OpGroupNonUniformBitwiseAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseOr deserialize_instr<instrs::OpGroupNonUniformBitwiseOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseXor deserialize_instr<instrs::OpGroupNonUniformBitwiseXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalAnd deserialize_instr<instrs::OpGroupNonUniformLogicalAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalOr deserialize_instr<instrs::OpGroupNonUniformLogicalOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalXor deserialize_instr<instrs::OpGroupNonUniformLogicalXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformQuadBroadcast deserialize_instr<instrs::OpGroupNonUniformQuadBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformQuadBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformQuadSwap deserialize_instr<instrs::OpGroupNonUniformQuadSwap>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformQuadSwap out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.direction = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformPartitionNV deserialize_instr<instrs::OpGroupNonUniformPartitionNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformPartitionNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
