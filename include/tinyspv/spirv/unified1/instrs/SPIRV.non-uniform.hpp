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
struct OpGroupNonUniformElect {
  Id result_type;
  Id result_id;
  Id execution;
};
struct OpGroupNonUniformAll {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAny {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAllEqual {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformBroadcastFirst {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallot {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformInverseBallot {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotBitExtract {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformBallotBitCount {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
};
struct OpGroupNonUniformBallotFindLSB {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotFindMSB {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformShuffle {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformShuffleXor {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id mask;
};
struct OpGroupNonUniformShuffleUp {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformShuffleDown {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformIAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformIMul {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMul {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformSMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformUMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformSMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformUMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseAnd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseOr {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseXor {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalAnd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalOr {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalXor {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformQuadBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformQuadSwap {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id direction;
};
struct OpGroupNonUniformPartitionNV {
  Id result_type;
  Id result_id;
  Id value;
};
} // namespace instrs
} // namespace tinyspv
