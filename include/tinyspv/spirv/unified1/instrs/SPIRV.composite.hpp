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
struct OpVectorExtractDynamic {
  Id result_type;
  Id result_id;
  Id vector;
  Id index;
};
struct OpVectorInsertDynamic {
  Id result_type;
  Id result_id;
  Id vector;
  Id component;
  Id index;
};
struct OpVectorShuffle {
  Id result_type;
  Id result_id;
  Id vector_1;
  Id vector_2;
  LiteralList components;
};
struct OpCompositeConstruct {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpCompositeExtract {
  Id result_type;
  Id result_id;
  Id composite;
  LiteralList indexes;
};
struct OpCompositeInsert {
  Id result_type;
  Id result_id;
  Id object;
  Id composite;
  LiteralList indexes;
};
struct OpCopyObject {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpTranspose {
  Id result_type;
  Id result_id;
  Id matrix;
};
struct OpCopyLogical {
  Id result_type;
  Id result_id;
  Id operand;
};
} // namespace instrs
} // namespace tinyspv
