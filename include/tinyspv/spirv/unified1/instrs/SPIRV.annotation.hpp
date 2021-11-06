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
struct OpDecorate {
  Id target;
  Decoration decoration;
  LiteralList see_decoration;
};
struct OpMemberDecorate {
  Id structure_type;
  uint32_t member;
  Decoration decoration;
  LiteralList see_decoration;
};
struct OpDecorationGroup {
  Id result_id;
};
struct OpGroupDecorate {
  Id decoration_group;
  std::vector<Id> targets;
};
struct OpGroupMemberDecorate {
  Id decoration_group;
  std::vector<Id> targets;
  LiteralList targets2;
};
struct OpDecorateId {
  Id target;
  Decoration decoration;
  std::vector<Id> see_decoration;
};
struct OpDecorateString {
  Id target;
  Decoration decoration;
  uint32_t see_decoration;
  LiteralList see_decoration2;
};
typedef OpDecorateString OpDecorateStringGOOGLE;
struct OpMemberDecorateString {
  Id struct_type;
  uint32_t member;
  Decoration decoration;
  uint32_t see_decoration;
  LiteralList see_decoration2;
};
typedef OpMemberDecorateString OpMemberDecorateStringGOOGLE;
} // namespace instrs
} // namespace tinyspv
