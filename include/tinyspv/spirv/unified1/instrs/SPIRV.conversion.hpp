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
struct OpConvertFToU {
  Id result_type;
  Id result_id;
  Id float_value;
};
struct OpConvertFToS {
  Id result_type;
  Id result_id;
  Id float_value;
};
struct OpConvertSToF {
  Id result_type;
  Id result_id;
  Id signed_value;
};
struct OpConvertUToF {
  Id result_type;
  Id result_id;
  Id unsigned_value;
};
struct OpUConvert {
  Id result_type;
  Id result_id;
  Id unsigned_value;
};
struct OpSConvert {
  Id result_type;
  Id result_id;
  Id signed_value;
};
struct OpFConvert {
  Id result_type;
  Id result_id;
  Id float_value;
};
struct OpQuantizeToF16 {
  Id result_type;
  Id result_id;
  Id value;
};
struct OpConvertPtrToU {
  Id result_type;
  Id result_id;
  Id pointer;
};
struct OpSatConvertSToU {
  Id result_type;
  Id result_id;
  Id signed_value;
};
struct OpSatConvertUToS {
  Id result_type;
  Id result_id;
  Id unsigned_value;
};
struct OpConvertUToPtr {
  Id result_type;
  Id result_id;
  Id integer_value;
};
struct OpPtrCastToGeneric {
  Id result_type;
  Id result_id;
  Id pointer;
};
struct OpGenericCastToPtr {
  Id result_type;
  Id result_id;
  Id pointer;
};
struct OpGenericCastToPtrExplicit {
  Id result_type;
  Id result_id;
  Id pointer;
  StorageClass storage;
};
struct OpBitcast {
  Id result_type;
  Id result_id;
  Id operand;
};
} // namespace instrs
} // namespace tinyspv
