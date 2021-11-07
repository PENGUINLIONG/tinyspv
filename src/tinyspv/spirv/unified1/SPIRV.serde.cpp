// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
using instrs::Literal;
template<>
instrs::OpUndef deserialize_instr<instrs::OpUndef>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUndef out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSizeOf deserialize_instr<instrs::OpSizeOf>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSizeOf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSourceContinued deserialize_instr<instrs::OpSourceContinued>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSourceContinued out {};
  while (it.is_valid()) { out.continued_source.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSource deserialize_instr<instrs::OpSource>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSource out {};
  out.source_language = (SourceLanguage)it.next_u32();
  out.version = (uint32_t)it.next_u32();
  if (it.is_valid()) { out.file = (Id)it.next_u32(); }
  if (it.is_valid()) { out.source = (Literal)it.next_u32(); }
  return out;
}
template<>
instrs::OpSourceExtension deserialize_instr<instrs::OpSourceExtension>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSourceExtension out {};
  while (it.is_valid()) { out.extension.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpName deserialize_instr<instrs::OpName>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpName out {};
  out.target = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpMemberName deserialize_instr<instrs::OpMemberName>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberName out {};
  out.type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpString deserialize_instr<instrs::OpString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpString out {};
  out.result_id = (Id)it.next_u32();
  out.string = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpLine deserialize_instr<instrs::OpLine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLine out {};
  out.file = (Id)it.next_u32();
  out.line = (uint32_t)it.next_u32();
  out.column = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpModuleProcessed deserialize_instr<instrs::OpModuleProcessed>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpModuleProcessed out {};
  while (it.is_valid()) { out.process.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpDecorate deserialize_instr<instrs::OpDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorate out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpMemberDecorate deserialize_instr<instrs::OpMemberDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberDecorate out {};
  out.structure_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpDecorationGroup deserialize_instr<instrs::OpDecorationGroup>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorationGroup out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupDecorate deserialize_instr<instrs::OpGroupDecorate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupDecorate out {};
  out.decoration_group = (Id)it.next_u32();
  while (it.is_valid()) {
    out.targets.emplace_back((Id)it.next_u32());
  }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpGroupMemberDecorate`.

template<>
instrs::OpDecorateId deserialize_instr<instrs::OpDecorateId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorateId out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) {
    out.see_decoration.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpDecorateString deserialize_instr<instrs::OpDecorateString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDecorateString out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpMemberDecorateString deserialize_instr<instrs::OpMemberDecorateString>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemberDecorateString out {};
  out.struct_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpExtension deserialize_instr<instrs::OpExtension>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtension out {};
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpExtInstImport deserialize_instr<instrs::OpExtInstImport>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtInstImport out {};
  out.result_id = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
instrs::OpExtInst deserialize_instr<instrs::OpExtInst>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExtInst out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.set = (Id)it.next_u32();
  out.instruction = (uint32_t)it.next_u32();
  while (it.is_valid()) {
    out.operand.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpMemoryModel deserialize_instr<instrs::OpMemoryModel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryModel out {};
  out.addressing_model = (AddressingModel)it.next_u32();
  out.memory_model = (MemoryModel)it.next_u32();
  return out;
}
template<>
instrs::OpEntryPoint deserialize_instr<instrs::OpEntryPoint>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEntryPoint out {};
  out.execution_model = (ExecutionModel)it.next_u32();
  out.entry_point = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  while (it.is_valid()) {
    out.interface.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpExecutionMode deserialize_instr<instrs::OpExecutionMode>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecutionMode out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) { out.see_execution_mode.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCapability deserialize_instr<instrs::OpCapability>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCapability out {};
  out.capability = (Capability)it.next_u32();
  return out;
}
template<>
instrs::OpExecutionModeId deserialize_instr<instrs::OpExecutionModeId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpExecutionModeId out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) {
    out.see_execution_mode.emplace_back((Id)it.next_u32());
  }
  return out;
}
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
template<>
instrs::OpConstantTrue deserialize_instr<instrs::OpConstantTrue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstantFalse deserialize_instr<instrs::OpConstantFalse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstant deserialize_instr<instrs::OpConstant>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpConstantComposite deserialize_instr<instrs::OpConstantComposite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpConstantSampler deserialize_instr<instrs::OpConstantSampler>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantSampler out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampler_addressing_mode = (SamplerAddressingMode)it.next_u32();
  out.param = (uint32_t)it.next_u32();
  out.sampler_filter_mode = (SamplerFilterMode)it.next_u32();
  return out;
}
template<>
instrs::OpConstantNull deserialize_instr<instrs::OpConstantNull>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantNull out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstantTrue deserialize_instr<instrs::OpSpecConstantTrue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstantFalse deserialize_instr<instrs::OpSpecConstantFalse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSpecConstant deserialize_instr<instrs::OpSpecConstant>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSpecConstantComposite deserialize_instr<instrs::OpSpecConstantComposite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpSpecConstantOp deserialize_instr<instrs::OpSpecConstantOp>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSpecConstantOp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.opcode = (uint32_t)it.next_u32();
  while (it.is_valid()) {
    out.operands.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpVariable deserialize_instr<instrs::OpVariable>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVariable out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  if (it.is_valid()) { out.initializer = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpImageTexelPointer deserialize_instr<instrs::OpImageTexelPointer>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageTexelPointer out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.sample = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLoad deserialize_instr<instrs::OpLoad>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpStore deserialize_instr<instrs::OpStore>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpStore out {};
  out.pointer = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCopyMemory deserialize_instr<instrs::OpCopyMemory>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyMemory out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpCopyMemorySized deserialize_instr<instrs::OpCopyMemorySized>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyMemorySized out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  out.size = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
instrs::OpAccessChain deserialize_instr<instrs::OpAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpInBoundsAccessChain deserialize_instr<instrs::OpInBoundsAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpInBoundsAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpPtrAccessChain deserialize_instr<instrs::OpPtrAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.element = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpArrayLength deserialize_instr<instrs::OpArrayLength>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpArrayLength out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.structure = (Id)it.next_u32();
  out.array_member = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpGenericPtrMemSemantics deserialize_instr<instrs::OpGenericPtrMemSemantics>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericPtrMemSemantics out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpInBoundsPtrAccessChain deserialize_instr<instrs::OpInBoundsPtrAccessChain>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpInBoundsPtrAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.element = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpPtrEqual deserialize_instr<instrs::OpPtrEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrNotEqual deserialize_instr<instrs::OpPtrNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrDiff deserialize_instr<instrs::OpPtrDiff>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrDiff out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFunction deserialize_instr<instrs::OpFunction>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunction out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function_control = (FunctionControl)it.next_u32();
  out.function_type = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFunctionParameter deserialize_instr<instrs::OpFunctionParameter>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunctionParameter out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFunctionCall deserialize_instr<instrs::OpFunctionCall>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFunctionCall out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function = (Id)it.next_u32();
  while (it.is_valid()) {
    out.argument.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpSampledImage deserialize_instr<instrs::OpSampledImage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSampledImage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.sampler = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageSampleImplicitLod deserialize_instr<instrs::OpImageSampleImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleExplicitLod deserialize_instr<instrs::OpImageSampleExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleDrefImplicitLod deserialize_instr<instrs::OpImageSampleDrefImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleDrefImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleDrefExplicitLod deserialize_instr<instrs::OpImageSampleDrefExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleDrefExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleProjImplicitLod deserialize_instr<instrs::OpImageSampleProjImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleProjImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleProjExplicitLod deserialize_instr<instrs::OpImageSampleProjExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleProjExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleProjDrefImplicitLod deserialize_instr<instrs::OpImageSampleProjDrefImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleProjDrefImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleProjDrefExplicitLod deserialize_instr<instrs::OpImageSampleProjDrefExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleProjDrefExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageFetch deserialize_instr<instrs::OpImageFetch>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageFetch out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageGather deserialize_instr<instrs::OpImageGather>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageGather out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.component = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageDrefGather deserialize_instr<instrs::OpImageDrefGather>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageDrefGather out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageRead deserialize_instr<instrs::OpImageRead>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageRead out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageWrite deserialize_instr<instrs::OpImageWrite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageWrite out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.texel = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImage deserialize_instr<instrs::OpImage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQueryFormat deserialize_instr<instrs::OpImageQueryFormat>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQueryFormat out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQueryOrder deserialize_instr<instrs::OpImageQueryOrder>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQueryOrder out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQuerySizeLod deserialize_instr<instrs::OpImageQuerySizeLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQuerySizeLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.level_of_detail = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQuerySize deserialize_instr<instrs::OpImageQuerySize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQuerySize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQueryLod deserialize_instr<instrs::OpImageQueryLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQueryLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQueryLevels deserialize_instr<instrs::OpImageQueryLevels>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQueryLevels out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageQuerySamples deserialize_instr<instrs::OpImageQuerySamples>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageQuerySamples out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageSparseSampleImplicitLod deserialize_instr<instrs::OpImageSparseSampleImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleExplicitLod deserialize_instr<instrs::OpImageSparseSampleExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleDrefImplicitLod deserialize_instr<instrs::OpImageSparseSampleDrefImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleDrefImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleDrefExplicitLod deserialize_instr<instrs::OpImageSparseSampleDrefExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleDrefExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleProjImplicitLod deserialize_instr<instrs::OpImageSparseSampleProjImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleProjImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleProjExplicitLod deserialize_instr<instrs::OpImageSparseSampleProjExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleProjExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleProjDrefImplicitLod deserialize_instr<instrs::OpImageSparseSampleProjDrefImplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleProjDrefImplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseSampleProjDrefExplicitLod deserialize_instr<instrs::OpImageSparseSampleProjDrefExplicitLod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseSampleProjDrefExplicitLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  out.image_operands = (ImageOperands)it.next_u32();
  out.id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.id2.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseFetch deserialize_instr<instrs::OpImageSparseFetch>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseFetch out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseGather deserialize_instr<instrs::OpImageSparseGather>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseGather out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.component = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseDrefGather deserialize_instr<instrs::OpImageSparseDrefGather>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseDrefGather out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.dref = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSparseTexelsResident deserialize_instr<instrs::OpImageSparseTexelsResident>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseTexelsResident out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.resident_code = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpImageSparseRead deserialize_instr<instrs::OpImageSparseRead>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSparseRead out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpImageSampleFootprintNV deserialize_instr<instrs::OpImageSampleFootprintNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpImageSampleFootprintNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.granularity = (Id)it.next_u32();
  out.coarse = (Id)it.next_u32();
  if (it.is_valid()) { out.image_operands = (ImageOperands)it.next_u32(); }
  while (it.is_valid()) {
    out.id.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpConvertFToU deserialize_instr<instrs::OpConvertFToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertFToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertFToS deserialize_instr<instrs::OpConvertFToS>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertFToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertSToF deserialize_instr<instrs::OpConvertSToF>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertSToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertUToF deserialize_instr<instrs::OpConvertUToF>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertUToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUConvert deserialize_instr<instrs::OpUConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSConvert deserialize_instr<instrs::OpSConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFConvert deserialize_instr<instrs::OpFConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpQuantizeToF16 deserialize_instr<instrs::OpQuantizeToF16>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpQuantizeToF16 out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertPtrToU deserialize_instr<instrs::OpConvertPtrToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertPtrToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSatConvertSToU deserialize_instr<instrs::OpSatConvertSToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSatConvertSToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSatConvertUToS deserialize_instr<instrs::OpSatConvertUToS>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSatConvertUToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertUToPtr deserialize_instr<instrs::OpConvertUToPtr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertUToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.integer_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrCastToGeneric deserialize_instr<instrs::OpPtrCastToGeneric>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrCastToGeneric out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGenericCastToPtr deserialize_instr<instrs::OpGenericCastToPtr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericCastToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGenericCastToPtrExplicit deserialize_instr<instrs::OpGenericCastToPtrExplicit>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericCastToPtrExplicit out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.storage = (StorageClass)it.next_u32();
  return out;
}
template<>
instrs::OpBitcast deserialize_instr<instrs::OpBitcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorExtractDynamic deserialize_instr<instrs::OpVectorExtractDynamic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorExtractDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorInsertDynamic deserialize_instr<instrs::OpVectorInsertDynamic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorInsertDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.component = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorShuffle deserialize_instr<instrs::OpVectorShuffle>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  while (it.is_valid()) { out.components.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCompositeConstruct deserialize_instr<instrs::OpCompositeConstruct>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeConstruct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpCompositeExtract deserialize_instr<instrs::OpCompositeExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCompositeInsert deserialize_instr<instrs::OpCompositeInsert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCompositeInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpCopyObject deserialize_instr<instrs::OpCopyObject>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyObject out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpTranspose deserialize_instr<instrs::OpTranspose>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpTranspose out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCopyLogical deserialize_instr<instrs::OpCopyLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCopyLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSNegate deserialize_instr<instrs::OpSNegate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFNegate deserialize_instr<instrs::OpFNegate>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAdd deserialize_instr<instrs::OpIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFAdd deserialize_instr<instrs::OpFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpISub deserialize_instr<instrs::OpISub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFSub deserialize_instr<instrs::OpFSub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFSub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIMul deserialize_instr<instrs::OpIMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFMul deserialize_instr<instrs::OpFMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUDiv deserialize_instr<instrs::OpUDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSDiv deserialize_instr<instrs::OpSDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFDiv deserialize_instr<instrs::OpFDiv>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUMod deserialize_instr<instrs::OpUMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSRem deserialize_instr<instrs::OpSRem>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSMod deserialize_instr<instrs::OpSMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFRem deserialize_instr<instrs::OpFRem>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFMod deserialize_instr<instrs::OpFMod>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorTimesScalar deserialize_instr<instrs::OpVectorTimesScalar>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesScalar deserialize_instr<instrs::OpMatrixTimesScalar>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpVectorTimesMatrix deserialize_instr<instrs::OpVectorTimesMatrix>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpVectorTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesVector deserialize_instr<instrs::OpMatrixTimesVector>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesVector out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMatrixTimesMatrix deserialize_instr<instrs::OpMatrixTimesMatrix>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMatrixTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.left_matrix = (Id)it.next_u32();
  out.right_matrix = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpOuterProduct deserialize_instr<instrs::OpOuterProduct>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpOuterProduct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDot deserialize_instr<instrs::OpDot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIAddCarry deserialize_instr<instrs::OpIAddCarry>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIAddCarry out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpISubBorrow deserialize_instr<instrs::OpISubBorrow>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpISubBorrow out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUMulExtended deserialize_instr<instrs::OpUMulExtended>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSMulExtended deserialize_instr<instrs::OpSMulExtended>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpShiftRightLogical deserialize_instr<instrs::OpShiftRightLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftRightLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpShiftRightArithmetic deserialize_instr<instrs::OpShiftRightArithmetic>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftRightArithmetic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpShiftLeftLogical deserialize_instr<instrs::OpShiftLeftLogical>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpShiftLeftLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseOr deserialize_instr<instrs::OpBitwiseOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseXor deserialize_instr<instrs::OpBitwiseXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitwiseAnd deserialize_instr<instrs::OpBitwiseAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpNot deserialize_instr<instrs::OpNot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldInsert deserialize_instr<instrs::OpBitFieldInsert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.insert = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldSExtract deserialize_instr<instrs::OpBitFieldSExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldSExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitFieldUExtract deserialize_instr<instrs::OpBitFieldUExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitFieldUExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitReverse deserialize_instr<instrs::OpBitReverse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitReverse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBitCount deserialize_instr<instrs::OpBitCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAny deserialize_instr<instrs::OpAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAll deserialize_instr<instrs::OpAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsNan deserialize_instr<instrs::OpIsNan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsNan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsInf deserialize_instr<instrs::OpIsInf>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsInf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsFinite deserialize_instr<instrs::OpIsFinite>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsFinite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsNormal deserialize_instr<instrs::OpIsNormal>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsNormal out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSignBitSet deserialize_instr<instrs::OpSignBitSet>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSignBitSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLessOrGreater deserialize_instr<instrs::OpLessOrGreater>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLessOrGreater out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpOrdered deserialize_instr<instrs::OpOrdered>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpOrdered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUnordered deserialize_instr<instrs::OpUnordered>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUnordered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalEqual deserialize_instr<instrs::OpLogicalEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalNotEqual deserialize_instr<instrs::OpLogicalNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalOr deserialize_instr<instrs::OpLogicalOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalAnd deserialize_instr<instrs::OpLogicalAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLogicalNot deserialize_instr<instrs::OpLogicalNot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLogicalNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSelect deserialize_instr<instrs::OpSelect>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSelect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.condition = (Id)it.next_u32();
  out.object_1 = (Id)it.next_u32();
  out.object_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIEqual deserialize_instr<instrs::OpIEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpINotEqual deserialize_instr<instrs::OpINotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpINotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUGreaterThan deserialize_instr<instrs::OpUGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSGreaterThan deserialize_instr<instrs::OpSGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUGreaterThanEqual deserialize_instr<instrs::OpUGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSGreaterThanEqual deserialize_instr<instrs::OpSGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpULessThan deserialize_instr<instrs::OpULessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpULessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSLessThan deserialize_instr<instrs::OpSLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpULessThanEqual deserialize_instr<instrs::OpULessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpULessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSLessThanEqual deserialize_instr<instrs::OpSLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdEqual deserialize_instr<instrs::OpFOrdEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordEqual deserialize_instr<instrs::OpFUnordEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdNotEqual deserialize_instr<instrs::OpFOrdNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordNotEqual deserialize_instr<instrs::OpFUnordNotEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdLessThan deserialize_instr<instrs::OpFOrdLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordLessThan deserialize_instr<instrs::OpFUnordLessThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdGreaterThan deserialize_instr<instrs::OpFOrdGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordGreaterThan deserialize_instr<instrs::OpFUnordGreaterThan>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdLessThanEqual deserialize_instr<instrs::OpFOrdLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordLessThanEqual deserialize_instr<instrs::OpFUnordLessThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFOrdGreaterThanEqual deserialize_instr<instrs::OpFOrdGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFOrdGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFUnordGreaterThanEqual deserialize_instr<instrs::OpFUnordGreaterThanEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFUnordGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdx deserialize_instr<instrs::OpDPdx>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdx out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdy deserialize_instr<instrs::OpDPdy>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdy out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidth deserialize_instr<instrs::OpFwidth>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidth out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdxFine deserialize_instr<instrs::OpDPdxFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdxFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdyFine deserialize_instr<instrs::OpDPdyFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdyFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidthFine deserialize_instr<instrs::OpFwidthFine>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidthFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdxCoarse deserialize_instr<instrs::OpDPdxCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdxCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpDPdyCoarse deserialize_instr<instrs::OpDPdyCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpDPdyCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFwidthCoarse deserialize_instr<instrs::OpFwidthCoarse>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFwidthCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPhi deserialize_instr<instrs::OpPhi>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPhi out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.variable.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpLoopMerge deserialize_instr<instrs::OpLoopMerge>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLoopMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.continue_target = (Id)it.next_u32();
  out.loop_control = (LoopControl)it.next_u32();
  while (it.is_valid()) { out.loop_control_parameters.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSelectionMerge deserialize_instr<instrs::OpSelectionMerge>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSelectionMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.selection_control = (SelectionControl)it.next_u32();
  return out;
}
template<>
instrs::OpLabel deserialize_instr<instrs::OpLabel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLabel out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBranch deserialize_instr<instrs::OpBranch>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBranch out {};
  out.target_label = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBranchConditional deserialize_instr<instrs::OpBranchConditional>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBranchConditional out {};
  out.condition = (Id)it.next_u32();
  out.true_label = (Id)it.next_u32();
  out.false_label = (Id)it.next_u32();
  while (it.is_valid()) { out.branch_weights.emplace_back(it.next_u32()); }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpSwitch`.

template<>
instrs::OpReturnValue deserialize_instr<instrs::OpReturnValue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReturnValue out {};
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLifetimeStart deserialize_instr<instrs::OpLifetimeStart>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLifetimeStart out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpLifetimeStop deserialize_instr<instrs::OpLifetimeStop>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLifetimeStop out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicLoad deserialize_instr<instrs::OpAtomicLoad>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicStore deserialize_instr<instrs::OpAtomicStore>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicStore out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicExchange deserialize_instr<instrs::OpAtomicExchange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicExchange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicCompareExchange deserialize_instr<instrs::OpAtomicCompareExchange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicCompareExchange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.equal = (Id)it.next_u32();
  out.unequal = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.comparator = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicCompareExchangeWeak deserialize_instr<instrs::OpAtomicCompareExchangeWeak>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicCompareExchangeWeak out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.equal = (Id)it.next_u32();
  out.unequal = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.comparator = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIIncrement deserialize_instr<instrs::OpAtomicIIncrement>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIIncrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIDecrement deserialize_instr<instrs::OpAtomicIDecrement>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIDecrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicIAdd deserialize_instr<instrs::OpAtomicIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicISub deserialize_instr<instrs::OpAtomicISub>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicSMin deserialize_instr<instrs::OpAtomicSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicUMin deserialize_instr<instrs::OpAtomicUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicSMax deserialize_instr<instrs::OpAtomicSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicUMax deserialize_instr<instrs::OpAtomicUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicAnd deserialize_instr<instrs::OpAtomicAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicOr deserialize_instr<instrs::OpAtomicOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicXor deserialize_instr<instrs::OpAtomicXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFlagTestAndSet deserialize_instr<instrs::OpAtomicFlagTestAndSet>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFlagTestAndSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFlagClear deserialize_instr<instrs::OpAtomicFlagClear>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFlagClear out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpAtomicFAddEXT deserialize_instr<instrs::OpAtomicFAddEXT>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpAtomicFAddEXT out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEmitStreamVertex deserialize_instr<instrs::OpEmitStreamVertex>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEmitStreamVertex out {};
  out.stream = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEndStreamPrimitive deserialize_instr<instrs::OpEndStreamPrimitive>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEndStreamPrimitive out {};
  out.stream = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpControlBarrier deserialize_instr<instrs::OpControlBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpControlBarrier out {};
  out.execution = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMemoryBarrier deserialize_instr<instrs::OpMemoryBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryBarrier out {};
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpNamedBarrierInitialize deserialize_instr<instrs::OpNamedBarrierInitialize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpNamedBarrierInitialize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.subgroup_count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMemoryNamedBarrier deserialize_instr<instrs::OpMemoryNamedBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryNamedBarrier out {};
  out.named_barrier = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupAsyncCopy deserialize_instr<instrs::OpGroupAsyncCopy>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAsyncCopy out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.destination = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  out.num_elements = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupWaitEvents deserialize_instr<instrs::OpGroupWaitEvents>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupWaitEvents out {};
  out.execution = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.events_list = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupAll deserialize_instr<instrs::OpGroupAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupAny deserialize_instr<instrs::OpGroupAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupBroadcast deserialize_instr<instrs::OpGroupBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.local_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupIAdd deserialize_instr<instrs::OpGroupIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFAdd deserialize_instr<instrs::OpGroupFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMin deserialize_instr<instrs::OpGroupFMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMin deserialize_instr<instrs::OpGroupUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMin deserialize_instr<instrs::OpGroupSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMax deserialize_instr<instrs::OpGroupFMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMax deserialize_instr<instrs::OpGroupUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMax deserialize_instr<instrs::OpGroupSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBallotKHR deserialize_instr<instrs::OpSubgroupBallotKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBallotKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupFirstInvocationKHR deserialize_instr<instrs::OpSubgroupFirstInvocationKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupFirstInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAllKHR deserialize_instr<instrs::OpSubgroupAllKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAllKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAnyKHR deserialize_instr<instrs::OpSubgroupAnyKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAnyKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupAllEqualKHR deserialize_instr<instrs::OpSubgroupAllEqualKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupAllEqualKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupReadInvocationKHR deserialize_instr<instrs::OpSubgroupReadInvocationKHR>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupReadInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupIAddNonUniformAMD deserialize_instr<instrs::OpGroupIAddNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupIAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFAddNonUniformAMD deserialize_instr<instrs::OpGroupFAddNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMinNonUniformAMD deserialize_instr<instrs::OpGroupFMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMinNonUniformAMD deserialize_instr<instrs::OpGroupUMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMinNonUniformAMD deserialize_instr<instrs::OpGroupSMinNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupFMaxNonUniformAMD deserialize_instr<instrs::OpGroupFMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupFMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupUMaxNonUniformAMD deserialize_instr<instrs::OpGroupUMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupUMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupSMaxNonUniformAMD deserialize_instr<instrs::OpGroupSMaxNonUniformAMD>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupSMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleINTEL deserialize_instr<instrs::OpSubgroupShuffleINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.invocation_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleDownINTEL deserialize_instr<instrs::OpSubgroupShuffleDownINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleDownINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.next = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleUpINTEL deserialize_instr<instrs::OpSubgroupShuffleUpINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleUpINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.previous = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupShuffleXorINTEL deserialize_instr<instrs::OpSubgroupShuffleXorINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupShuffleXorINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBlockReadINTEL deserialize_instr<instrs::OpSubgroupBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ptr = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupBlockWriteINTEL deserialize_instr<instrs::OpSubgroupBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupBlockWriteINTEL out {};
  out.ptr = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageBlockReadINTEL deserialize_instr<instrs::OpSubgroupImageBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageBlockWriteINTEL deserialize_instr<instrs::OpSubgroupImageBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageMediaBlockReadINTEL deserialize_instr<instrs::OpSubgroupImageMediaBlockReadINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageMediaBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSubgroupImageMediaBlockWriteINTEL deserialize_instr<instrs::OpSubgroupImageMediaBlockWriteINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSubgroupImageMediaBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEnqueueMarker deserialize_instr<instrs::OpEnqueueMarker>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEnqueueMarker out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.queue = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.wait_events = (Id)it.next_u32();
  out.ret_event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpEnqueueKernel deserialize_instr<instrs::OpEnqueueKernel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpEnqueueKernel out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.queue = (Id)it.next_u32();
  out.flags = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.wait_events = (Id)it.next_u32();
  out.ret_event = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  while (it.is_valid()) {
    out.local_size.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpGetKernelNDrangeSubGroupCount deserialize_instr<instrs::OpGetKernelNDrangeSubGroupCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelNDrangeSubGroupCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelNDrangeMaxSubGroupSize deserialize_instr<instrs::OpGetKernelNDrangeMaxSubGroupSize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelNDrangeMaxSubGroupSize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.nd_range = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelWorkGroupSize deserialize_instr<instrs::OpGetKernelWorkGroupSize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelWorkGroupSize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelPreferredWorkGroupSizeMultiple deserialize_instr<instrs::OpGetKernelPreferredWorkGroupSizeMultiple>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelPreferredWorkGroupSizeMultiple out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpRetainEvent deserialize_instr<instrs::OpRetainEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpRetainEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReleaseEvent deserialize_instr<instrs::OpReleaseEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReleaseEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCreateUserEvent deserialize_instr<instrs::OpCreateUserEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCreateUserEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsValidEvent deserialize_instr<instrs::OpIsValidEvent>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsValidEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.event = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSetUserEventStatus deserialize_instr<instrs::OpSetUserEventStatus>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSetUserEventStatus out {};
  out.event = (Id)it.next_u32();
  out.status = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCaptureEventProfilingInfo deserialize_instr<instrs::OpCaptureEventProfilingInfo>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCaptureEventProfilingInfo out {};
  out.event = (Id)it.next_u32();
  out.profiling_info = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetDefaultQueue deserialize_instr<instrs::OpGetDefaultQueue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetDefaultQueue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBuildNDRange deserialize_instr<instrs::OpBuildNDRange>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBuildNDRange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.global_work_size = (Id)it.next_u32();
  out.local_work_size = (Id)it.next_u32();
  out.global_work_offset = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelLocalSizeForSubgroupCount deserialize_instr<instrs::OpGetKernelLocalSizeForSubgroupCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelLocalSizeForSubgroupCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.subgroup_count = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetKernelMaxNumSubgroups deserialize_instr<instrs::OpGetKernelMaxNumSubgroups>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetKernelMaxNumSubgroups out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReadPipe deserialize_instr<instrs::OpReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReadPipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpWritePipe deserialize_instr<instrs::OpWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpWritePipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReservedReadPipe deserialize_instr<instrs::OpReservedReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReservedReadPipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReservedWritePipe deserialize_instr<instrs::OpReservedWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReservedWritePipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReserveReadPipePackets deserialize_instr<instrs::OpReserveReadPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReserveReadPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReserveWritePipePackets deserialize_instr<instrs::OpReserveWritePipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReserveWritePipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCommitReadPipe deserialize_instr<instrs::OpCommitReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCommitReadPipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCommitWritePipe deserialize_instr<instrs::OpCommitWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCommitWritePipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsValidReserveId deserialize_instr<instrs::OpIsValidReserveId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsValidReserveId out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetNumPipePackets deserialize_instr<instrs::OpGetNumPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetNumPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetMaxPipePackets deserialize_instr<instrs::OpGetMaxPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetMaxPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupReserveReadPipePackets deserialize_instr<instrs::OpGroupReserveReadPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupReserveReadPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupReserveWritePipePackets deserialize_instr<instrs::OpGroupReserveWritePipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupReserveWritePipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupCommitReadPipe deserialize_instr<instrs::OpGroupCommitReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupCommitReadPipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupCommitWritePipe deserialize_instr<instrs::OpGroupCommitWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupCommitWritePipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstantPipeStorage deserialize_instr<instrs::OpConstantPipeStorage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (uint32_t)it.next_u32();
  out.packet_alignment = (uint32_t)it.next_u32();
  out.capacity = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpCreatePipeFromPipeStorage deserialize_instr<instrs::OpCreatePipeFromPipeStorage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCreatePipeFromPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe_storage = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReadPipeBlockingINTEL deserialize_instr<instrs::OpReadPipeBlockingINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReadPipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpWritePipeBlockingINTEL deserialize_instr<instrs::OpWritePipeBlockingINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpWritePipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformElect deserialize_instr<instrs::OpGroupNonUniformElect>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformElect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAll deserialize_instr<instrs::OpGroupNonUniformAll>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAny deserialize_instr<instrs::OpGroupNonUniformAny>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformAllEqual deserialize_instr<instrs::OpGroupNonUniformAllEqual>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformAllEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBroadcast deserialize_instr<instrs::OpGroupNonUniformBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBroadcastFirst deserialize_instr<instrs::OpGroupNonUniformBroadcastFirst>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBroadcastFirst out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallot deserialize_instr<instrs::OpGroupNonUniformBallot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformInverseBallot deserialize_instr<instrs::OpGroupNonUniformInverseBallot>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformInverseBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotBitExtract deserialize_instr<instrs::OpGroupNonUniformBallotBitExtract>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotBitExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotBitCount deserialize_instr<instrs::OpGroupNonUniformBallotBitCount>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotFindLSB deserialize_instr<instrs::OpGroupNonUniformBallotFindLSB>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotFindLSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformBallotFindMSB deserialize_instr<instrs::OpGroupNonUniformBallotFindMSB>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBallotFindMSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffle deserialize_instr<instrs::OpGroupNonUniformShuffle>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleXor deserialize_instr<instrs::OpGroupNonUniformShuffleXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.mask = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleUp deserialize_instr<instrs::OpGroupNonUniformShuffleUp>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleUp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformShuffleDown deserialize_instr<instrs::OpGroupNonUniformShuffleDown>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformShuffleDown out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformIAdd deserialize_instr<instrs::OpGroupNonUniformIAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFAdd deserialize_instr<instrs::OpGroupNonUniformFAdd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformIMul deserialize_instr<instrs::OpGroupNonUniformIMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMul deserialize_instr<instrs::OpGroupNonUniformFMul>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformSMin deserialize_instr<instrs::OpGroupNonUniformSMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformUMin deserialize_instr<instrs::OpGroupNonUniformUMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMin deserialize_instr<instrs::OpGroupNonUniformFMin>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformSMax deserialize_instr<instrs::OpGroupNonUniformSMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformUMax deserialize_instr<instrs::OpGroupNonUniformUMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformFMax deserialize_instr<instrs::OpGroupNonUniformFMax>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseAnd deserialize_instr<instrs::OpGroupNonUniformBitwiseAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseOr deserialize_instr<instrs::OpGroupNonUniformBitwiseOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformBitwiseXor deserialize_instr<instrs::OpGroupNonUniformBitwiseXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalAnd deserialize_instr<instrs::OpGroupNonUniformLogicalAnd>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalOr deserialize_instr<instrs::OpGroupNonUniformLogicalOr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformLogicalXor deserialize_instr<instrs::OpGroupNonUniformLogicalXor>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformLogicalXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
instrs::OpGroupNonUniformQuadBroadcast deserialize_instr<instrs::OpGroupNonUniformQuadBroadcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformQuadBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformQuadSwap deserialize_instr<instrs::OpGroupNonUniformQuadSwap>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformQuadSwap out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.direction = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupNonUniformPartitionNV deserialize_instr<instrs::OpGroupNonUniformPartitionNV>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupNonUniformPartitionNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
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
