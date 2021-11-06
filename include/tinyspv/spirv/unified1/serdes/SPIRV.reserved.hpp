// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.reserved.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpTraceRayKHR deserialize_instr<instrs::OpTraceRayKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTraceRayKHR out {};
  out.accel = (Id)it.next_u32();
  out.ray_flags = (Id)it.next_u32();
  out.cull_mask = (Id)it.next_u32();
  out.sbt_offset = (Id)it.next_u32();
  out.sbt_stride = (Id)it.next_u32();
  out.miss_index = (Id)it.next_u32();
  out.ray_origin = (Id)it.next_u32();
  out.ray_tmin = (Id)it.next_u32();
  out.ray_direction = (Id)it.next_u32();
  out.ray_tmax = (Id)it.next_u32();
  out.payload = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpExecuteCallableKHR deserialize_instr<instrs::OpExecuteCallableKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecuteCallableKHR out {};
  out.sbt_index = (Id)it.next_u32();
  out.callable_data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertUToAccelerationStructureKHR deserialize_instr<instrs::OpConvertUToAccelerationStructureKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertUToAccelerationStructureKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.accel = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeRayQueryKHR deserialize_instr<instrs::OpTypeRayQueryKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeRayQueryKHR out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryInitializeKHR deserialize_instr<instrs::OpRayQueryInitializeKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryInitializeKHR out {};
  out.ray_query = (Id)it.next_u32();
  out.accel = (Id)it.next_u32();
  out.ray_flags = (Id)it.next_u32();
  out.cull_mask = (Id)it.next_u32();
  out.ray_origin = (Id)it.next_u32();
  out.ray_tmin = (Id)it.next_u32();
  out.ray_direction = (Id)it.next_u32();
  out.ray_tmax = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryTerminateKHR deserialize_instr<instrs::OpRayQueryTerminateKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryTerminateKHR out {};
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGenerateIntersectionKHR deserialize_instr<instrs::OpRayQueryGenerateIntersectionKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGenerateIntersectionKHR out {};
  out.ray_query = (Id)it.next_u32();
  out.hit_t = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryConfirmIntersectionKHR deserialize_instr<instrs::OpRayQueryConfirmIntersectionKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryConfirmIntersectionKHR out {};
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryProceedKHR deserialize_instr<instrs::OpRayQueryProceedKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryProceedKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionTypeKHR deserialize_instr<instrs::OpRayQueryGetIntersectionTypeKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionTypeKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFragmentMaskFetchAMD deserialize_instr<instrs::OpFragmentMaskFetchAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFragmentMaskFetchAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFragmentFetchAMD deserialize_instr<instrs::OpFragmentFetchAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFragmentFetchAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.fragment_index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReadClockKHR deserialize_instr<instrs::OpReadClockKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReadClockKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpWritePackedPrimitiveIndices4x8NV deserialize_instr<instrs::OpWritePackedPrimitiveIndices4x8NV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpWritePackedPrimitiveIndices4x8NV out {};
  out.index_offset = (Id)it.next_u32();
  out.packed_indices = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReportIntersectionNV deserialize_instr<instrs::OpReportIntersectionNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReportIntersectionNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.hit = (Id)it.next_u32();
  out.hit_kind = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTraceNV deserialize_instr<instrs::OpTraceNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTraceNV out {};
  out.accel = (Id)it.next_u32();
  out.ray_flags = (Id)it.next_u32();
  out.cull_mask = (Id)it.next_u32();
  out.sbt_offset = (Id)it.next_u32();
  out.sbt_stride = (Id)it.next_u32();
  out.miss_index = (Id)it.next_u32();
  out.ray_origin = (Id)it.next_u32();
  out.ray_tmin = (Id)it.next_u32();
  out.ray_direction = (Id)it.next_u32();
  out.ray_tmax = (Id)it.next_u32();
  out.payload_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeAccelerationStructureNV deserialize_instr<instrs::OpTypeAccelerationStructureNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeAccelerationStructureNV out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpExecuteCallableNV deserialize_instr<instrs::OpExecuteCallableNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecuteCallableNV out {};
  out.sbt_index = (Id)it.next_u32();
  out.callable_data_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeCooperativeMatrixNV deserialize_instr<instrs::OpTypeCooperativeMatrixNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeCooperativeMatrixNV out {};
  out.result_id = (Id)it.next_u32();
  out.component_type = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.rows = (Id)it.next_u32();
  out.columns = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCooperativeMatrixLoadNV deserialize_instr<instrs::OpCooperativeMatrixLoadNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCooperativeMatrixLoadNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.column_major = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCooperativeMatrixStoreNV deserialize_instr<instrs::OpCooperativeMatrixStoreNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCooperativeMatrixStoreNV out {};
  out.pointer = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.column_major = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCooperativeMatrixMulAddNV deserialize_instr<instrs::OpCooperativeMatrixMulAddNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCooperativeMatrixMulAddNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.a = (Id)it.next_u32();
  out.b = (Id)it.next_u32();
  out.c = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCooperativeMatrixLengthNV deserialize_instr<instrs::OpCooperativeMatrixLengthNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCooperativeMatrixLengthNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsHelperInvocationEXT deserialize_instr<instrs::OpIsHelperInvocationEXT>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsHelperInvocationEXT out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUCountLeadingZerosINTEL deserialize_instr<instrs::OpUCountLeadingZerosINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUCountLeadingZerosINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUCountTrailingZerosINTEL deserialize_instr<instrs::OpUCountTrailingZerosINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUCountTrailingZerosINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAbsISubINTEL deserialize_instr<instrs::OpAbsISubINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAbsISubINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAbsUSubINTEL deserialize_instr<instrs::OpAbsUSubINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAbsUSubINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAddSatINTEL deserialize_instr<instrs::OpIAddSatINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAddSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUAddSatINTEL deserialize_instr<instrs::OpUAddSatINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUAddSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAverageINTEL deserialize_instr<instrs::OpIAverageINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAverageINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUAverageINTEL deserialize_instr<instrs::OpUAverageINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUAverageINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAverageRoundedINTEL deserialize_instr<instrs::OpIAverageRoundedINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAverageRoundedINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUAverageRoundedINTEL deserialize_instr<instrs::OpUAverageRoundedINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUAverageRoundedINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpISubSatINTEL deserialize_instr<instrs::OpISubSatINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpISubSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUSubSatINTEL deserialize_instr<instrs::OpUSubSatINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUSubSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIMul32x16INTEL deserialize_instr<instrs::OpIMul32x16INTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIMul32x16INTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUMul32x16INTEL deserialize_instr<instrs::OpUMul32x16INTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUMul32x16INTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLoopControlINTEL deserialize_instr<instrs::OpLoopControlINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLoopControlINTEL out {};
  while (it.is_valid()) { out.loop_control_parameters.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpFPGARegINTEL deserialize_instr<instrs::OpFPGARegINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFPGARegINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.result = (Id)it.next_u32();
  out.input = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetRayTMinKHR deserialize_instr<instrs::OpRayQueryGetRayTMinKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetRayTMinKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetRayFlagsKHR deserialize_instr<instrs::OpRayQueryGetRayFlagsKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetRayFlagsKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionTKHR deserialize_instr<instrs::OpRayQueryGetIntersectionTKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionTKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionInstanceCustomIndexKHR deserialize_instr<instrs::OpRayQueryGetIntersectionInstanceCustomIndexKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionInstanceCustomIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionInstanceIdKHR deserialize_instr<instrs::OpRayQueryGetIntersectionInstanceIdKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionInstanceIdKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR deserialize_instr<instrs::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionGeometryIndexKHR deserialize_instr<instrs::OpRayQueryGetIntersectionGeometryIndexKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionGeometryIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionPrimitiveIndexKHR deserialize_instr<instrs::OpRayQueryGetIntersectionPrimitiveIndexKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionPrimitiveIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionBarycentricsKHR deserialize_instr<instrs::OpRayQueryGetIntersectionBarycentricsKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionBarycentricsKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionFrontFaceKHR deserialize_instr<instrs::OpRayQueryGetIntersectionFrontFaceKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionFrontFaceKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR deserialize_instr<instrs::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionObjectRayDirectionKHR deserialize_instr<instrs::OpRayQueryGetIntersectionObjectRayDirectionKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionObjectRayDirectionKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionObjectRayOriginKHR deserialize_instr<instrs::OpRayQueryGetIntersectionObjectRayOriginKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionObjectRayOriginKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetWorldRayDirectionKHR deserialize_instr<instrs::OpRayQueryGetWorldRayDirectionKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetWorldRayDirectionKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetWorldRayOriginKHR deserialize_instr<instrs::OpRayQueryGetWorldRayOriginKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetWorldRayOriginKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionObjectToWorldKHR deserialize_instr<instrs::OpRayQueryGetIntersectionObjectToWorldKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionObjectToWorldKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRayQueryGetIntersectionWorldToObjectKHR deserialize_instr<instrs::OpRayQueryGetIntersectionWorldToObjectKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRayQueryGetIntersectionWorldToObjectKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
