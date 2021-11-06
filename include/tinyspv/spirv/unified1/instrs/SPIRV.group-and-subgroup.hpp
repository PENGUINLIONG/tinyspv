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
struct OpGroupAsyncCopy {
  Id result_type;
  Id result_id;
  Id execution;
  Id destination;
  Id source;
  Id num_elements;
  Id stride;
  Id event;
};
struct OpGroupWaitEvents {
  Id execution;
  Id num_events;
  Id events_list;
};
struct OpGroupAll {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupAny {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id local_id;
};
struct OpGroupIAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpSubgroupBallotKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupFirstInvocationKHR {
  Id result_type;
  Id result_id;
  Id value;
};
struct OpSubgroupAllKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupAnyKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupAllEqualKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupReadInvocationKHR {
  Id result_type;
  Id result_id;
  Id value;
  Id index;
};
struct OpGroupIAddNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFAddNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpSubgroupShuffleINTEL {
  Id result_type;
  Id result_id;
  Id data;
  Id invocation_id;
};
struct OpSubgroupShuffleDownINTEL {
  Id result_type;
  Id result_id;
  Id current;
  Id next;
  Id delta;
};
struct OpSubgroupShuffleUpINTEL {
  Id result_type;
  Id result_id;
  Id previous;
  Id current;
  Id delta;
};
struct OpSubgroupShuffleXorINTEL {
  Id result_type;
  Id result_id;
  Id data;
  Id value;
};
struct OpSubgroupBlockReadINTEL {
  Id result_type;
  Id result_id;
  Id ptr;
};
struct OpSubgroupBlockWriteINTEL {
  Id ptr;
  Id data;
};
struct OpSubgroupImageBlockReadINTEL {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
};
struct OpSubgroupImageBlockWriteINTEL {
  Id image;
  Id coordinate;
  Id data;
};
struct OpSubgroupImageMediaBlockReadINTEL {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  Id width;
  Id height;
};
struct OpSubgroupImageMediaBlockWriteINTEL {
  Id image;
  Id coordinate;
  Id width;
  Id height;
  Id data;
};
} // namespace instrs
} // namespace tinyspv
