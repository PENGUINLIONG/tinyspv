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
struct OpShiftRightLogical {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpShiftRightArithmetic {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpShiftLeftLogical {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpBitwiseOr {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseXor {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseAnd {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpNot {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpBitFieldInsert {
  Id result_type;
  Id result_id;
  Id base;
  Id insert;
  Id offset;
  Id count;
};
struct OpBitFieldSExtract {
  Id result_type;
  Id result_id;
  Id base;
  Id offset;
  Id count;
};
struct OpBitFieldUExtract {
  Id result_type;
  Id result_id;
  Id base;
  Id offset;
  Id count;
};
struct OpBitReverse {
  Id result_type;
  Id result_id;
  Id base;
};
struct OpBitCount {
  Id result_type;
  Id result_id;
  Id base;
};
} // namespace instrs
} // namespace tinyspv
