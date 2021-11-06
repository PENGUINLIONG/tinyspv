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
struct OpSNegate {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpFNegate {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpIAdd {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFAdd {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpISub {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFSub {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpIMul {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFMul {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUDiv {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSDiv {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFDiv {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUMod {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSRem {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSMod {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFRem {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpFMod {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpVectorTimesScalar {
  Id result_type;
  Id result_id;
  Id vector;
  Id scalar;
};
struct OpMatrixTimesScalar {
  Id result_type;
  Id result_id;
  Id matrix;
  Id scalar;
};
struct OpVectorTimesMatrix {
  Id result_type;
  Id result_id;
  Id vector;
  Id matrix;
};
struct OpMatrixTimesVector {
  Id result_type;
  Id result_id;
  Id matrix;
  Id vector;
};
struct OpMatrixTimesMatrix {
  Id result_type;
  Id result_id;
  Id left_matrix;
  Id right_matrix;
};
struct OpOuterProduct {
  Id result_type;
  Id result_id;
  Id vector_1;
  Id vector_2;
};
struct OpDot {
  Id result_type;
  Id result_id;
  Id vector_1;
  Id vector_2;
};
struct OpIAddCarry {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpISubBorrow {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUMulExtended {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpSMulExtended {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
} // namespace instrs
} // namespace tinyspv
