// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include <vector>
#include <string>
#include <optional>
#include "tinyspv/spirv/unified1/SPIRV.hpp"
namespace tinyspv {
namespace instrs {
typedef uint32_t Id;
typedef std::vector<uint32_t> Literal;
typedef std::vector<uint32_t> LiteralList;
struct OpEnqueueMarker {
  Id result_type;
  Id result_id;
  Id queue;
  Id num_events;
  Id wait_events;
  Id ret_event;
};
struct OpEnqueueKernel {
  Id result_type;
  Id result_id;
  Id queue;
  Id flags;
  Id nd_range;
  Id num_events;
  Id wait_events;
  Id ret_event;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
  std::vector<Id> local_size;
};
struct OpGetKernelNDrangeSubGroupCount {
  Id result_type;
  Id result_id;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelNDrangeMaxSubGroupSize {
  Id result_type;
  Id result_id;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelWorkGroupSize {
  Id result_type;
  Id result_id;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelPreferredWorkGroupSizeMultiple {
  Id result_type;
  Id result_id;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpRetainEvent {
  Id event;
};
struct OpReleaseEvent {
  Id event;
};
struct OpCreateUserEvent {
  Id result_type;
  Id result_id;
};
struct OpIsValidEvent {
  Id result_type;
  Id result_id;
  Id event;
};
struct OpSetUserEventStatus {
  Id event;
  Id status;
};
struct OpCaptureEventProfilingInfo {
  Id event;
  Id profiling_info;
  Id value;
};
struct OpGetDefaultQueue {
  Id result_type;
  Id result_id;
};
struct OpBuildNDRange {
  Id result_type;
  Id result_id;
  Id global_work_size;
  Id local_work_size;
  Id global_work_offset;
};
struct OpGetKernelLocalSizeForSubgroupCount {
  Id result_type;
  Id result_id;
  Id subgroup_count;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelMaxNumSubgroups {
  Id result_type;
  Id result_id;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
} // namespace instrs
} // namespace tinyspv
