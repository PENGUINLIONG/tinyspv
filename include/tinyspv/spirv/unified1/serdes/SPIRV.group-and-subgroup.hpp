// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.group-and-subgroup.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpGroupAsyncCopy deserialize_instr<instrs::OpGroupAsyncCopy>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAsyncCopy out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.destination = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  out.num_elements = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupWaitEvents deserialize_instr<instrs::OpGroupWaitEvents>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupWaitEvents out {};
  out.execution = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.events_list = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupAll deserialize_instr<instrs::OpGroupAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupAny deserialize_instr<instrs::OpGroupAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupBroadcast deserialize_instr<instrs::OpGroupBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.local_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupIAdd deserialize_instr<instrs::OpGroupIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFAdd deserialize_instr<instrs::OpGroupFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMin deserialize_instr<instrs::OpGroupFMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMin deserialize_instr<instrs::OpGroupUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMin deserialize_instr<instrs::OpGroupSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMax deserialize_instr<instrs::OpGroupFMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMax deserialize_instr<instrs::OpGroupUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMax deserialize_instr<instrs::OpGroupSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBallotKHR deserialize_instr<instrs::OpSubgroupBallotKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBallotKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupFirstInvocationKHR deserialize_instr<instrs::OpSubgroupFirstInvocationKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupFirstInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAllKHR deserialize_instr<instrs::OpSubgroupAllKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAllKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAnyKHR deserialize_instr<instrs::OpSubgroupAnyKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAnyKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAllEqualKHR deserialize_instr<instrs::OpSubgroupAllEqualKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAllEqualKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupReadInvocationKHR deserialize_instr<instrs::OpSubgroupReadInvocationKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupReadInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupIAddNonUniformAMD deserialize_instr<instrs::OpGroupIAddNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupIAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFAddNonUniformAMD deserialize_instr<instrs::OpGroupFAddNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMinNonUniformAMD deserialize_instr<instrs::OpGroupFMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMinNonUniformAMD deserialize_instr<instrs::OpGroupUMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMinNonUniformAMD deserialize_instr<instrs::OpGroupSMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMaxNonUniformAMD deserialize_instr<instrs::OpGroupFMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMaxNonUniformAMD deserialize_instr<instrs::OpGroupUMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMaxNonUniformAMD deserialize_instr<instrs::OpGroupSMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleINTEL deserialize_instr<instrs::OpSubgroupShuffleINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.invocation_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleDownINTEL deserialize_instr<instrs::OpSubgroupShuffleDownINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleDownINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.next = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleUpINTEL deserialize_instr<instrs::OpSubgroupShuffleUpINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleUpINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.previous = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleXorINTEL deserialize_instr<instrs::OpSubgroupShuffleXorINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleXorINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBlockReadINTEL deserialize_instr<instrs::OpSubgroupBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ptr = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBlockWriteINTEL deserialize_instr<instrs::OpSubgroupBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBlockWriteINTEL out {};
  out.ptr = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageBlockReadINTEL deserialize_instr<instrs::OpSubgroupImageBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageBlockWriteINTEL deserialize_instr<instrs::OpSubgroupImageBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageMediaBlockReadINTEL deserialize_instr<instrs::OpSubgroupImageMediaBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageMediaBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageMediaBlockWriteINTEL deserialize_instr<instrs::OpSubgroupImageMediaBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageMediaBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
