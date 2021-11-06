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
struct OpFunction {
  Id result_type;
  Id result_id;
  FunctionControl function_control;
  Id function_type;
};
struct OpFunctionParameter {
  Id result_type;
  Id result_id;
};
struct OpFunctionEnd {
};
struct OpFunctionCall {
  Id result_type;
  Id result_id;
  Id function;
  std::vector<Id> argument;
};
} // namespace instrs
} // namespace tinyspv
