// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.type-declaration.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpTypeVoid deserialize_instr<instrs::OpTypeVoid>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeVoid out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeBool deserialize_instr<instrs::OpTypeBool>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeBool out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeInt deserialize_instr<instrs::OpTypeInt>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeInt out {};
  out.result_id = (Id)it.next_u32();
  out.width = (uint32_t)it.next_u32();
  out.signedness = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpTypeFloat deserialize_instr<instrs::OpTypeFloat>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeFloat out {};
  out.result_id = (Id)it.next_u32();
  out.width = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpTypeVector deserialize_instr<instrs::OpTypeVector>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeVector out {};
  out.result_id = (Id)it.next_u32();
  out.component_type = (Id)it.next_u32();
  out.component_count = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpTypeMatrix deserialize_instr<instrs::OpTypeMatrix>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeMatrix out {};
  out.result_id = (Id)it.next_u32();
  out.column_type = (Id)it.next_u32();
  out.column_count = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpTypeImage deserialize_instr<instrs::OpTypeImage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeImage out {};
  out.result_id = (Id)it.next_u32();
  out.sampled_type = (Id)it.next_u32();
  out.dim = (Dim)it.next_u32();
  out.depth = (uint32_t)it.next_u32();
  out.arrayed = (uint32_t)it.next_u32();
  out.ms = (uint32_t)it.next_u32();
  out.sampled = (uint32_t)it.next_u32();
  out.image_format = (ImageFormat)it.next_u32();
  if (it.is_valid()) { out.access_qualifier = (AccessQualifier)it.next_u32(); }
  return out;
}
template<>
instrs::OpTypeSampler deserialize_instr<instrs::OpTypeSampler>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeSampler out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeSampledImage deserialize_instr<instrs::OpTypeSampledImage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeSampledImage out {};
  out.result_id = (Id)it.next_u32();
  out.image_type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeArray deserialize_instr<instrs::OpTypeArray>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeArray out {};
  out.result_id = (Id)it.next_u32();
  out.element_type = (Id)it.next_u32();
  out.length = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeRuntimeArray deserialize_instr<instrs::OpTypeRuntimeArray>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeRuntimeArray out {};
  out.result_id = (Id)it.next_u32();
  out.element_type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeStruct deserialize_instr<instrs::OpTypeStruct>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeStruct out {};
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.member_type.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpTypeOpaque deserialize_instr<instrs::OpTypeOpaque>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeOpaque out {};
  out.result_id = (Id)it.next_u32();
  out.the_name_of_the_opaque_type = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpTypePointer deserialize_instr<instrs::OpTypePointer>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypePointer out {};
  out.result_id = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  out.type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeFunction deserialize_instr<instrs::OpTypeFunction>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeFunction out {};
  out.result_id = (Id)it.next_u32();
  out.return_type = (Id)it.next_u32();
  while (it.is_valid()) {
    out.parameter_type.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpTypeEvent deserialize_instr<instrs::OpTypeEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeEvent out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeDeviceEvent deserialize_instr<instrs::OpTypeDeviceEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeDeviceEvent out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeReserveId deserialize_instr<instrs::OpTypeReserveId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeReserveId out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeQueue deserialize_instr<instrs::OpTypeQueue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeQueue out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypePipe deserialize_instr<instrs::OpTypePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypePipe out {};
  out.result_id = (Id)it.next_u32();
  out.qualifier = (AccessQualifier)it.next_u32();
  return out;
}
template<>
instrs::OpTypeForwardPointer deserialize_instr<instrs::OpTypeForwardPointer>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeForwardPointer out {};
  out.pointer_type = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  return out;
}
template<>
instrs::OpTypePipeStorage deserialize_instr<instrs::OpTypePipeStorage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypePipeStorage out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTypeNamedBarrier deserialize_instr<instrs::OpTypeNamedBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTypeNamedBarrier out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
