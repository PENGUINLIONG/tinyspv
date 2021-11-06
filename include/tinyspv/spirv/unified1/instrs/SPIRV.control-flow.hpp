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
struct OpPhi {
  Id result_type;
  Id result_id;
  std::vector<Id> variable;
};
struct OpLoopMerge {
  Id merge_block;
  Id continue_target;
  LoopControl loop_control;
  LiteralList loop_control_parameters;
};
struct OpSelectionMerge {
  Id merge_block;
  SelectionControl selection_control;
};
struct OpLabel {
  Id result_id;
};
struct OpBranch {
  Id target_label;
};
struct OpBranchConditional {
  Id condition;
  Id true_label;
  Id false_label;
  LiteralList branch_weights;
};
struct OpSwitch {
  Id selector;
  Id default;
  LiteralList target;
  std::vector<Id> target2;
};
struct OpKill {
};
struct OpReturn {
};
struct OpReturnValue {
  Id value;
};
struct OpUnreachable {
};
struct OpLifetimeStart {
  Id pointer;
  uint32_t size;
};
struct OpLifetimeStop {
  Id pointer;
  uint32_t size;
};
struct OpTerminateInvocation {
};
} // namespace instrs
} // namespace tinyspv
