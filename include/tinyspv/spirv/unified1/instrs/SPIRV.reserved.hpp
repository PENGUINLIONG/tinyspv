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
struct OpTraceRayKHR {
  Id accel;
  Id ray_flags;
  Id cull_mask;
  Id sbt_offset;
  Id sbt_stride;
  Id miss_index;
  Id ray_origin;
  Id ray_tmin;
  Id ray_direction;
  Id ray_tmax;
  Id payload;
};
struct OpExecuteCallableKHR {
  Id sbt_index;
  Id callable_data;
};
struct OpConvertUToAccelerationStructureKHR {
  Id result_type;
  Id result_id;
  Id accel;
};
struct OpIgnoreIntersectionKHR {
};
struct OpTerminateRayKHR {
};
struct OpTypeRayQueryKHR {
  Id result_id;
};
struct OpRayQueryInitializeKHR {
  Id ray_query;
  Id accel;
  Id ray_flags;
  Id cull_mask;
  Id ray_origin;
  Id ray_tmin;
  Id ray_direction;
  Id ray_tmax;
};
struct OpRayQueryTerminateKHR {
  Id ray_query;
};
struct OpRayQueryGenerateIntersectionKHR {
  Id ray_query;
  Id hit_t;
};
struct OpRayQueryConfirmIntersectionKHR {
  Id ray_query;
};
struct OpRayQueryProceedKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetIntersectionTypeKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpFragmentMaskFetchAMD {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
};
struct OpFragmentFetchAMD {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  Id fragment_index;
};
struct OpReadClockKHR {
  Id result_type;
  Id result_id;
  Id execution;
};
struct OpWritePackedPrimitiveIndices4x8NV {
  Id index_offset;
  Id packed_indices;
};
struct OpReportIntersectionNV {
  Id result_type;
  Id result_id;
  Id hit;
  Id hit_kind;
};
typedef OpReportIntersectionNV OpReportIntersectionKHR;
struct OpIgnoreIntersectionNV {
};
struct OpTerminateRayNV {
};
struct OpTraceNV {
  Id accel;
  Id ray_flags;
  Id cull_mask;
  Id sbt_offset;
  Id sbt_stride;
  Id miss_index;
  Id ray_origin;
  Id ray_tmin;
  Id ray_direction;
  Id ray_tmax;
  Id payload_id;
};
struct OpTypeAccelerationStructureNV {
  Id result_id;
};
typedef OpTypeAccelerationStructureNV OpTypeAccelerationStructureKHR;
struct OpExecuteCallableNV {
  Id sbt_index;
  Id callable_data_id;
};
struct OpTypeCooperativeMatrixNV {
  Id result_id;
  Id component_type;
  Id execution;
  Id rows;
  Id columns;
};
struct OpCooperativeMatrixLoadNV {
  Id result_type;
  Id result_id;
  Id pointer;
  Id stride;
  Id column_major;
  std::optional<MemoryOperands> memory_operands;
};
struct OpCooperativeMatrixStoreNV {
  Id pointer;
  Id object;
  Id stride;
  Id column_major;
  std::optional<MemoryOperands> memory_operands;
};
struct OpCooperativeMatrixMulAddNV {
  Id result_type;
  Id result_id;
  Id a;
  Id b;
  Id c;
};
struct OpCooperativeMatrixLengthNV {
  Id result_type;
  Id result_id;
  Id type;
};
struct OpBeginInvocationInterlockEXT {
};
struct OpEndInvocationInterlockEXT {
};
struct OpDemoteToHelperInvocationEXT {
};
struct OpIsHelperInvocationEXT {
  Id result_type;
  Id result_id;
};
struct OpUCountLeadingZerosINTEL {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpUCountTrailingZerosINTEL {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpAbsISubINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpAbsUSubINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpIAddSatINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUAddSatINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpIAverageINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUAverageINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpIAverageRoundedINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUAverageRoundedINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpISubSatINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUSubSatINTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpIMul32x16INTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpUMul32x16INTEL {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpLoopControlINTEL {
  LiteralList loop_control_parameters;
};
struct OpFPGARegINTEL {
  Id result_type;
  Id result_id;
  Id result;
  Id input;
};
struct OpRayQueryGetRayTMinKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetRayFlagsKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetIntersectionTKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceCustomIndexKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceIdKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionGeometryIndexKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionPrimitiveIndexKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionBarycentricsKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionFrontFaceKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionCandidateAABBOpaqueKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetIntersectionObjectRayDirectionKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionObjectRayOriginKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetWorldRayDirectionKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetWorldRayOriginKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
};
struct OpRayQueryGetIntersectionObjectToWorldKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
struct OpRayQueryGetIntersectionWorldToObjectKHR {
  Id result_type;
  Id result_id;
  Id ray_query;
  Id intersection;
};
} // namespace instrs
} // namespace tinyspv
