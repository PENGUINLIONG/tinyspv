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
struct OpControlBarrier {
  Id execution;
  Id memory;
  Id semantics;
};
struct OpMemoryBarrier {
  Id memory;
  Id semantics;
};
struct OpNamedBarrierInitialize {
  Id result_type;
  Id result_id;
  Id subgroup_count;
};
struct OpMemoryNamedBarrier {
  Id named_barrier;
  Id memory;
  Id semantics;
};
} // namespace instrs
} // namespace tinyspv
