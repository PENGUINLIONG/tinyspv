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
struct OpDPdx {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdy {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidth {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdxFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdyFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidthFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdxCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdyCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidthCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
} // namespace instrs
} // namespace tinyspv
