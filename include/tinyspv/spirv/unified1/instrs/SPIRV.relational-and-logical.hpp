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
struct OpAny {
  Id result_type;
  Id result_id;
  Id vector;
};
struct OpAll {
  Id result_type;
  Id result_id;
  Id vector;
};
struct OpIsNan {
  Id result_type;
  Id result_id;
  Id x;
};
struct OpIsInf {
  Id result_type;
  Id result_id;
  Id x;
};
struct OpIsFinite {
  Id result_type;
  Id result_id;
  Id x;
};
struct OpIsNormal {
  Id result_type;
  Id result_id;
  Id x;
};
struct OpSignBitSet {
  Id result_type;
  Id result_id;
  Id x;
};
struct OpLessOrGreater {
  Id result_type;
  Id result_id;
  Id x;
  Id y;
};
struct OpOrdered {
  Id result_type;
  Id result_id;
  Id x;
  Id y;
};
struct OpUnordered {
  Id result_type;
  Id result_id;
  Id x;
  Id y;
};
struct OpLogicalEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalNotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalOr {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalAnd {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalNot {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpSelect {
  Id result_type;
  Id result_id;
  Id condition;
  Id object_1;
  Id object_2;
};
struct OpIEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpINotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUGreaterThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSGreaterThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUGreaterThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSGreaterThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpULessThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSLessThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpULessThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSLessThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdNotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordNotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdLessThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordLessThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdGreaterThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordGreaterThan {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdLessThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordLessThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdGreaterThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordGreaterThanEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
} // namespace instrs
} // namespace tinyspv
