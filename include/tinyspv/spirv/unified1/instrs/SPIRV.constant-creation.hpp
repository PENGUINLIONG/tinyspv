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
struct OpConstantTrue {
  Id result_type;
  Id result_id;
};
struct OpConstantFalse {
  Id result_type;
  Id result_id;
};
struct OpConstant {
  Id result_type;
  Id result_id;
  Literal value;
};
struct OpConstantComposite {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpConstantSampler {
  Id result_type;
  Id result_id;
  SamplerAddressingMode sampler_addressing_mode;
  uint32_t param;
  SamplerFilterMode sampler_filter_mode;
};
struct OpConstantNull {
  Id result_type;
  Id result_id;
};
struct OpSpecConstantTrue {
  Id result_type;
  Id result_id;
};
struct OpSpecConstantFalse {
  Id result_type;
  Id result_id;
};
struct OpSpecConstant {
  Id result_type;
  Id result_id;
  Literal value;
};
struct OpSpecConstantComposite {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpSpecConstantOp {
  Id result_type;
  Id result_id;
  uint32_t opcode;
  std::vector<Id> operands;
};
} // namespace instrs
} // namespace tinyspv
