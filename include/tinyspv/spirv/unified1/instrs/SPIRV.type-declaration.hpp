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
struct OpTypeVoid {
  Id result_id;
};
struct OpTypeBool {
  Id result_id;
};
struct OpTypeInt {
  Id result_id;
  uint32_t width;
  uint32_t signedness;
};
struct OpTypeFloat {
  Id result_id;
  uint32_t width;
};
struct OpTypeVector {
  Id result_id;
  Id component_type;
  uint32_t component_count;
};
struct OpTypeMatrix {
  Id result_id;
  Id column_type;
  uint32_t column_count;
};
struct OpTypeImage {
  Id result_id;
  Id sampled_type;
  Dim dim;
  uint32_t depth;
  uint32_t arrayed;
  uint32_t ms;
  uint32_t sampled;
  ImageFormat image_format;
  std::optional<AccessQualifier> access_qualifier;
};
struct OpTypeSampler {
  Id result_id;
};
struct OpTypeSampledImage {
  Id result_id;
  Id image_type;
};
struct OpTypeArray {
  Id result_id;
  Id element_type;
  Id length;
};
struct OpTypeRuntimeArray {
  Id result_id;
  Id element_type;
};
struct OpTypeStruct {
  Id result_id;
  std::vector<Id> member_type;
};
struct OpTypeOpaque {
  Id result_id;
  std::string the_name_of_the_opaque_type;
};
struct OpTypePointer {
  Id result_id;
  StorageClass storage_class;
  Id type;
};
struct OpTypeFunction {
  Id result_id;
  Id return_type;
  std::vector<Id> parameter_type;
};
struct OpTypeEvent {
  Id result_id;
};
struct OpTypeDeviceEvent {
  Id result_id;
};
struct OpTypeReserveId {
  Id result_id;
};
struct OpTypeQueue {
  Id result_id;
};
struct OpTypePipe {
  Id result_id;
  AccessQualifier qualifier;
};
struct OpTypeForwardPointer {
  Id pointer_type;
  StorageClass storage_class;
};
struct OpTypePipeStorage {
  Id result_id;
};
struct OpTypeNamedBarrier {
  Id result_id;
};
} // namespace instrs
} // namespace tinyspv
