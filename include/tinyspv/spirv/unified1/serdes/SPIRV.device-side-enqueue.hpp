// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.device-side-enqueue.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpEnqueueMarker deserialize_instr<instrs::OpEnqueueMarker>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEnqueueMarker out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.queue = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.wait_events = (Id)it.next_u32();
  out.ret_event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEnqueueKernel deserialize_instr<instrs::OpEnqueueKernel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEnqueueKernel out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.queue = (Id)it.next_u32();
  out.flags = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.wait_events = (Id)it.next_u32();
  out.ret_event = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  while (it.is_valid()) {
    out.local_size.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpGetKernelNDrangeSubGroupCount deserialize_instr<instrs::OpGetKernelNDrangeSubGroupCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelNDrangeSubGroupCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelNDrangeMaxSubGroupSize deserialize_instr<instrs::OpGetKernelNDrangeMaxSubGroupSize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelNDrangeMaxSubGroupSize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelWorkGroupSize deserialize_instr<instrs::OpGetKernelWorkGroupSize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelWorkGroupSize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelPreferredWorkGroupSizeMultiple deserialize_instr<instrs::OpGetKernelPreferredWorkGroupSizeMultiple>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelPreferredWorkGroupSizeMultiple out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRetainEvent deserialize_instr<instrs::OpRetainEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRetainEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReleaseEvent deserialize_instr<instrs::OpReleaseEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReleaseEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCreateUserEvent deserialize_instr<instrs::OpCreateUserEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCreateUserEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsValidEvent deserialize_instr<instrs::OpIsValidEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsValidEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSetUserEventStatus deserialize_instr<instrs::OpSetUserEventStatus>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSetUserEventStatus out {};
  out.event = (Id)it.next_u32();
  out.status = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCaptureEventProfilingInfo deserialize_instr<instrs::OpCaptureEventProfilingInfo>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCaptureEventProfilingInfo out {};
  out.event = (Id)it.next_u32();
  out.profiling_info = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetDefaultQueue deserialize_instr<instrs::OpGetDefaultQueue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetDefaultQueue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBuildNDRange deserialize_instr<instrs::OpBuildNDRange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBuildNDRange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.global_work_size = (Id)it.next_u32();
  out.local_work_size = (Id)it.next_u32();
  out.global_work_offset = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelLocalSizeForSubgroupCount deserialize_instr<instrs::OpGetKernelLocalSizeForSubgroupCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelLocalSizeForSubgroupCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.subgroup_count = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelMaxNumSubgroups deserialize_instr<instrs::OpGetKernelMaxNumSubgroups>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelMaxNumSubgroups out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
