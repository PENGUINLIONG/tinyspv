// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/operand-structs.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace instrs {
template<typename T>
T read_instr_operands(OperandIterator it);

template<>
OpUndef read_instr_operands<OpUndef>(OperandIterator it) {
  OpUndef out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpSizeOf read_instr_operands<OpSizeOf>(OperandIterator it) {
  OpSizeOf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
OpSourceContinued read_instr_operands<OpSourceContinued>(OperandIterator it) {
  OpSourceContinued out {};
  while (it.is_valid()) { out.continued_source.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpSource read_instr_operands<OpSource>(OperandIterator it) {
  OpSource out {};
  out.source_language = (SourceLanguage)it.next_u32();
  out.version = (uint32_t)it.next_u32();
  if (it.is_valid()) { out.file = (Id)it.next_u32(); }
  if (it.is_valid()) { out.source = (Literal)it.next_u32(); }
  return out;
}
template<>
OpSourceExtension read_instr_operands<OpSourceExtension>(OperandIterator it) {
  OpSourceExtension out {};
  while (it.is_valid()) { out.extension.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpName read_instr_operands<OpName>(OperandIterator it) {
  OpName out {};
  out.target = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
OpMemberName read_instr_operands<OpMemberName>(OperandIterator it) {
  OpMemberName out {};
  out.type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
OpString read_instr_operands<OpString>(OperandIterator it) {
  OpString out {};
  out.result_id = (Id)it.next_u32();
  out.string = (std::string)it.next_str();
  return out;
}
template<>
OpLine read_instr_operands<OpLine>(OperandIterator it) {
  OpLine out {};
  out.file = (Id)it.next_u32();
  out.line = (uint32_t)it.next_u32();
  out.column = (uint32_t)it.next_u32();
  return out;
}
template<>
OpModuleProcessed read_instr_operands<OpModuleProcessed>(OperandIterator it) {
  OpModuleProcessed out {};
  while (it.is_valid()) { out.process.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpDecorate read_instr_operands<OpDecorate>(OperandIterator it) {
  OpDecorate out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpMemberDecorate read_instr_operands<OpMemberDecorate>(OperandIterator it) {
  OpMemberDecorate out {};
  out.structure_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) { out.see_decoration.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpDecorationGroup read_instr_operands<OpDecorationGroup>(OperandIterator it) {
  OpDecorationGroup out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpGroupDecorate read_instr_operands<OpGroupDecorate>(OperandIterator it) {
  OpGroupDecorate out {};
  out.decoration_group = (Id)it.next_u32();
  while (it.is_valid()) {
    out.targets.emplace_back((Id)it.next_u32());
  }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpGroupMemberDecorate`.

template<>
OpDecorateId read_instr_operands<OpDecorateId>(OperandIterator it) {
  OpDecorateId out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  while (it.is_valid()) {
    out.see_decoration.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpDecorateString read_instr_operands<OpDecorateString>(OperandIterator it) {
  OpDecorateString out {};
  out.target = (Id)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpMemberDecorateString read_instr_operands<OpMemberDecorateString>(OperandIterator it) {
  OpMemberDecorateString out {};
  out.struct_type = (Id)it.next_u32();
  out.member = (uint32_t)it.next_u32();
  out.decoration = (Decoration)it.next_u32();
  out.see_decoration = (uint32_t)it.next_u32();
  while (it.is_valid()) { out.see_decoration2.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpExtension read_instr_operands<OpExtension>(OperandIterator it) {
  OpExtension out {};
  out.name = (std::string)it.next_str();
  return out;
}
template<>
OpExtInstImport read_instr_operands<OpExtInstImport>(OperandIterator it) {
  OpExtInstImport out {};
  out.result_id = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  return out;
}
template<>
OpExtInst read_instr_operands<OpExtInst>(OperandIterator it) {
  OpExtInst out {};
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
OpMemoryModel read_instr_operands<OpMemoryModel>(OperandIterator it) {
  OpMemoryModel out {};
  out.addressing_model = (AddressingModel)it.next_u32();
  out.memory_model = (MemoryModel)it.next_u32();
  return out;
}
template<>
OpEntryPoint read_instr_operands<OpEntryPoint>(OperandIterator it) {
  OpEntryPoint out {};
  out.execution_model = (ExecutionModel)it.next_u32();
  out.entry_point = (Id)it.next_u32();
  out.name = (std::string)it.next_str();
  while (it.is_valid()) {
    out.interface.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpExecutionMode read_instr_operands<OpExecutionMode>(OperandIterator it) {
  OpExecutionMode out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) { out.see_execution_mode.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpCapability read_instr_operands<OpCapability>(OperandIterator it) {
  OpCapability out {};
  out.capability = (Capability)it.next_u32();
  return out;
}
template<>
OpExecutionModeId read_instr_operands<OpExecutionModeId>(OperandIterator it) {
  OpExecutionModeId out {};
  out.entry_point = (Id)it.next_u32();
  out.mode = (ExecutionMode)it.next_u32();
  while (it.is_valid()) {
    out.see_execution_mode.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpTypeVoid read_instr_operands<OpTypeVoid>(OperandIterator it) {
  OpTypeVoid out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeBool read_instr_operands<OpTypeBool>(OperandIterator it) {
  OpTypeBool out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeInt read_instr_operands<OpTypeInt>(OperandIterator it) {
  OpTypeInt out {};
  out.result_id = (Id)it.next_u32();
  out.width = (uint32_t)it.next_u32();
  out.signedness = (uint32_t)it.next_u32();
  return out;
}
template<>
OpTypeFloat read_instr_operands<OpTypeFloat>(OperandIterator it) {
  OpTypeFloat out {};
  out.result_id = (Id)it.next_u32();
  out.width = (uint32_t)it.next_u32();
  return out;
}
template<>
OpTypeVector read_instr_operands<OpTypeVector>(OperandIterator it) {
  OpTypeVector out {};
  out.result_id = (Id)it.next_u32();
  out.component_type = (Id)it.next_u32();
  out.component_count = (uint32_t)it.next_u32();
  return out;
}
template<>
OpTypeMatrix read_instr_operands<OpTypeMatrix>(OperandIterator it) {
  OpTypeMatrix out {};
  out.result_id = (Id)it.next_u32();
  out.column_type = (Id)it.next_u32();
  out.column_count = (uint32_t)it.next_u32();
  return out;
}
template<>
OpTypeImage read_instr_operands<OpTypeImage>(OperandIterator it) {
  OpTypeImage out {};
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
OpTypeSampler read_instr_operands<OpTypeSampler>(OperandIterator it) {
  OpTypeSampler out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeSampledImage read_instr_operands<OpTypeSampledImage>(OperandIterator it) {
  OpTypeSampledImage out {};
  out.result_id = (Id)it.next_u32();
  out.image_type = (Id)it.next_u32();
  return out;
}
template<>
OpTypeArray read_instr_operands<OpTypeArray>(OperandIterator it) {
  OpTypeArray out {};
  out.result_id = (Id)it.next_u32();
  out.element_type = (Id)it.next_u32();
  out.length = (Id)it.next_u32();
  return out;
}
template<>
OpTypeRuntimeArray read_instr_operands<OpTypeRuntimeArray>(OperandIterator it) {
  OpTypeRuntimeArray out {};
  out.result_id = (Id)it.next_u32();
  out.element_type = (Id)it.next_u32();
  return out;
}
template<>
OpTypeStruct read_instr_operands<OpTypeStruct>(OperandIterator it) {
  OpTypeStruct out {};
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.member_type.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpTypeOpaque read_instr_operands<OpTypeOpaque>(OperandIterator it) {
  OpTypeOpaque out {};
  out.result_id = (Id)it.next_u32();
  out.the_name_of_the_opaque_type = (std::string)it.next_str();
  return out;
}
template<>
OpTypePointer read_instr_operands<OpTypePointer>(OperandIterator it) {
  OpTypePointer out {};
  out.result_id = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  out.type = (Id)it.next_u32();
  return out;
}
template<>
OpTypeFunction read_instr_operands<OpTypeFunction>(OperandIterator it) {
  OpTypeFunction out {};
  out.result_id = (Id)it.next_u32();
  out.return_type = (Id)it.next_u32();
  while (it.is_valid()) {
    out.parameter_type.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpTypeEvent read_instr_operands<OpTypeEvent>(OperandIterator it) {
  OpTypeEvent out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeDeviceEvent read_instr_operands<OpTypeDeviceEvent>(OperandIterator it) {
  OpTypeDeviceEvent out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeReserveId read_instr_operands<OpTypeReserveId>(OperandIterator it) {
  OpTypeReserveId out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeQueue read_instr_operands<OpTypeQueue>(OperandIterator it) {
  OpTypeQueue out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypePipe read_instr_operands<OpTypePipe>(OperandIterator it) {
  OpTypePipe out {};
  out.result_id = (Id)it.next_u32();
  out.qualifier = (AccessQualifier)it.next_u32();
  return out;
}
template<>
OpTypeForwardPointer read_instr_operands<OpTypeForwardPointer>(OperandIterator it) {
  OpTypeForwardPointer out {};
  out.pointer_type = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  return out;
}
template<>
OpTypePipeStorage read_instr_operands<OpTypePipeStorage>(OperandIterator it) {
  OpTypePipeStorage out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeNamedBarrier read_instr_operands<OpTypeNamedBarrier>(OperandIterator it) {
  OpTypeNamedBarrier out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpConstantTrue read_instr_operands<OpConstantTrue>(OperandIterator it) {
  OpConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpConstantFalse read_instr_operands<OpConstantFalse>(OperandIterator it) {
  OpConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpConstant read_instr_operands<OpConstant>(OperandIterator it) {
  OpConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpConstantComposite read_instr_operands<OpConstantComposite>(OperandIterator it) {
  OpConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpConstantSampler read_instr_operands<OpConstantSampler>(OperandIterator it) {
  OpConstantSampler out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampler_addressing_mode = (SamplerAddressingMode)it.next_u32();
  out.param = (uint32_t)it.next_u32();
  out.sampler_filter_mode = (SamplerFilterMode)it.next_u32();
  return out;
}
template<>
OpConstantNull read_instr_operands<OpConstantNull>(OperandIterator it) {
  OpConstantNull out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpSpecConstantTrue read_instr_operands<OpSpecConstantTrue>(OperandIterator it) {
  OpSpecConstantTrue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpSpecConstantFalse read_instr_operands<OpSpecConstantFalse>(OperandIterator it) {
  OpSpecConstantFalse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpSpecConstant read_instr_operands<OpSpecConstant>(OperandIterator it) {
  OpSpecConstant out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) { out.value.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpSpecConstantComposite read_instr_operands<OpSpecConstantComposite>(OperandIterator it) {
  OpSpecConstantComposite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpSpecConstantOp read_instr_operands<OpSpecConstantOp>(OperandIterator it) {
  OpSpecConstantOp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.opcode = (uint32_t)it.next_u32();
  while (it.is_valid()) {
    out.operands.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpVariable read_instr_operands<OpVariable>(OperandIterator it) {
  OpVariable out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.storage_class = (StorageClass)it.next_u32();
  if (it.is_valid()) { out.initializer = (Id)it.next_u32(); }
  return out;
}
template<>
OpImageTexelPointer read_instr_operands<OpImageTexelPointer>(OperandIterator it) {
  OpImageTexelPointer out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.sample = (Id)it.next_u32();
  return out;
}
template<>
OpLoad read_instr_operands<OpLoad>(OperandIterator it) {
  OpLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpStore read_instr_operands<OpStore>(OperandIterator it) {
  OpStore out {};
  out.pointer = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpCopyMemory read_instr_operands<OpCopyMemory>(OperandIterator it) {
  OpCopyMemory out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpCopyMemorySized read_instr_operands<OpCopyMemorySized>(OperandIterator it) {
  OpCopyMemorySized out {};
  out.target = (Id)it.next_u32();
  out.source = (Id)it.next_u32();
  out.size = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  if (it.is_valid()) { out.memory_operands2 = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpAccessChain read_instr_operands<OpAccessChain>(OperandIterator it) {
  OpAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpInBoundsAccessChain read_instr_operands<OpInBoundsAccessChain>(OperandIterator it) {
  OpInBoundsAccessChain out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  while (it.is_valid()) {
    out.indexes.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpPtrAccessChain read_instr_operands<OpPtrAccessChain>(OperandIterator it) {
  OpPtrAccessChain out {};
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
OpArrayLength read_instr_operands<OpArrayLength>(OperandIterator it) {
  OpArrayLength out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.structure = (Id)it.next_u32();
  out.array_member = (uint32_t)it.next_u32();
  return out;
}
template<>
OpGenericPtrMemSemantics read_instr_operands<OpGenericPtrMemSemantics>(OperandIterator it) {
  OpGenericPtrMemSemantics out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
OpInBoundsPtrAccessChain read_instr_operands<OpInBoundsPtrAccessChain>(OperandIterator it) {
  OpInBoundsPtrAccessChain out {};
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
OpPtrEqual read_instr_operands<OpPtrEqual>(OperandIterator it) {
  OpPtrEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpPtrNotEqual read_instr_operands<OpPtrNotEqual>(OperandIterator it) {
  OpPtrNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpPtrDiff read_instr_operands<OpPtrDiff>(OperandIterator it) {
  OpPtrDiff out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFunction read_instr_operands<OpFunction>(OperandIterator it) {
  OpFunction out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function_control = (FunctionControl)it.next_u32();
  out.function_type = (Id)it.next_u32();
  return out;
}
template<>
OpFunctionParameter read_instr_operands<OpFunctionParameter>(OperandIterator it) {
  OpFunctionParameter out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpFunctionCall read_instr_operands<OpFunctionCall>(OperandIterator it) {
  OpFunctionCall out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.function = (Id)it.next_u32();
  while (it.is_valid()) {
    out.argument.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpSampledImage read_instr_operands<OpSampledImage>(OperandIterator it) {
  OpSampledImage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.sampler = (Id)it.next_u32();
  return out;
}
template<>
OpImageSampleImplicitLod read_instr_operands<OpImageSampleImplicitLod>(OperandIterator it) {
  OpImageSampleImplicitLod out {};
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
OpImageSampleExplicitLod read_instr_operands<OpImageSampleExplicitLod>(OperandIterator it) {
  OpImageSampleExplicitLod out {};
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
OpImageSampleDrefImplicitLod read_instr_operands<OpImageSampleDrefImplicitLod>(OperandIterator it) {
  OpImageSampleDrefImplicitLod out {};
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
OpImageSampleDrefExplicitLod read_instr_operands<OpImageSampleDrefExplicitLod>(OperandIterator it) {
  OpImageSampleDrefExplicitLod out {};
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
OpImageSampleProjImplicitLod read_instr_operands<OpImageSampleProjImplicitLod>(OperandIterator it) {
  OpImageSampleProjImplicitLod out {};
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
OpImageSampleProjExplicitLod read_instr_operands<OpImageSampleProjExplicitLod>(OperandIterator it) {
  OpImageSampleProjExplicitLod out {};
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
OpImageSampleProjDrefImplicitLod read_instr_operands<OpImageSampleProjDrefImplicitLod>(OperandIterator it) {
  OpImageSampleProjDrefImplicitLod out {};
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
OpImageSampleProjDrefExplicitLod read_instr_operands<OpImageSampleProjDrefExplicitLod>(OperandIterator it) {
  OpImageSampleProjDrefExplicitLod out {};
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
OpImageFetch read_instr_operands<OpImageFetch>(OperandIterator it) {
  OpImageFetch out {};
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
OpImageGather read_instr_operands<OpImageGather>(OperandIterator it) {
  OpImageGather out {};
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
OpImageDrefGather read_instr_operands<OpImageDrefGather>(OperandIterator it) {
  OpImageDrefGather out {};
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
OpImageRead read_instr_operands<OpImageRead>(OperandIterator it) {
  OpImageRead out {};
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
OpImageWrite read_instr_operands<OpImageWrite>(OperandIterator it) {
  OpImageWrite out {};
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
OpImage read_instr_operands<OpImage>(OperandIterator it) {
  OpImage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  return out;
}
template<>
OpImageQueryFormat read_instr_operands<OpImageQueryFormat>(OperandIterator it) {
  OpImageQueryFormat out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
OpImageQueryOrder read_instr_operands<OpImageQueryOrder>(OperandIterator it) {
  OpImageQueryOrder out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
OpImageQuerySizeLod read_instr_operands<OpImageQuerySizeLod>(OperandIterator it) {
  OpImageQuerySizeLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.level_of_detail = (Id)it.next_u32();
  return out;
}
template<>
OpImageQuerySize read_instr_operands<OpImageQuerySize>(OperandIterator it) {
  OpImageQuerySize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
OpImageQueryLod read_instr_operands<OpImageQueryLod>(OperandIterator it) {
  OpImageQueryLod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.sampled_image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
OpImageQueryLevels read_instr_operands<OpImageQueryLevels>(OperandIterator it) {
  OpImageQueryLevels out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
OpImageQuerySamples read_instr_operands<OpImageQuerySamples>(OperandIterator it) {
  OpImageQuerySamples out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  return out;
}
template<>
OpImageSparseSampleImplicitLod read_instr_operands<OpImageSparseSampleImplicitLod>(OperandIterator it) {
  OpImageSparseSampleImplicitLod out {};
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
OpImageSparseSampleExplicitLod read_instr_operands<OpImageSparseSampleExplicitLod>(OperandIterator it) {
  OpImageSparseSampleExplicitLod out {};
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
OpImageSparseSampleDrefImplicitLod read_instr_operands<OpImageSparseSampleDrefImplicitLod>(OperandIterator it) {
  OpImageSparseSampleDrefImplicitLod out {};
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
OpImageSparseSampleDrefExplicitLod read_instr_operands<OpImageSparseSampleDrefExplicitLod>(OperandIterator it) {
  OpImageSparseSampleDrefExplicitLod out {};
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
OpImageSparseSampleProjImplicitLod read_instr_operands<OpImageSparseSampleProjImplicitLod>(OperandIterator it) {
  OpImageSparseSampleProjImplicitLod out {};
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
OpImageSparseSampleProjExplicitLod read_instr_operands<OpImageSparseSampleProjExplicitLod>(OperandIterator it) {
  OpImageSparseSampleProjExplicitLod out {};
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
OpImageSparseSampleProjDrefImplicitLod read_instr_operands<OpImageSparseSampleProjDrefImplicitLod>(OperandIterator it) {
  OpImageSparseSampleProjDrefImplicitLod out {};
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
OpImageSparseSampleProjDrefExplicitLod read_instr_operands<OpImageSparseSampleProjDrefExplicitLod>(OperandIterator it) {
  OpImageSparseSampleProjDrefExplicitLod out {};
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
OpImageSparseFetch read_instr_operands<OpImageSparseFetch>(OperandIterator it) {
  OpImageSparseFetch out {};
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
OpImageSparseGather read_instr_operands<OpImageSparseGather>(OperandIterator it) {
  OpImageSparseGather out {};
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
OpImageSparseDrefGather read_instr_operands<OpImageSparseDrefGather>(OperandIterator it) {
  OpImageSparseDrefGather out {};
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
OpImageSparseTexelsResident read_instr_operands<OpImageSparseTexelsResident>(OperandIterator it) {
  OpImageSparseTexelsResident out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.resident_code = (Id)it.next_u32();
  return out;
}
template<>
OpImageSparseRead read_instr_operands<OpImageSparseRead>(OperandIterator it) {
  OpImageSparseRead out {};
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
OpImageSampleFootprintNV read_instr_operands<OpImageSampleFootprintNV>(OperandIterator it) {
  OpImageSampleFootprintNV out {};
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
OpConvertFToU read_instr_operands<OpConvertFToU>(OperandIterator it) {
  OpConvertFToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
OpConvertFToS read_instr_operands<OpConvertFToS>(OperandIterator it) {
  OpConvertFToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
OpConvertSToF read_instr_operands<OpConvertSToF>(OperandIterator it) {
  OpConvertSToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
OpConvertUToF read_instr_operands<OpConvertUToF>(OperandIterator it) {
  OpConvertUToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
OpUConvert read_instr_operands<OpUConvert>(OperandIterator it) {
  OpUConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
OpSConvert read_instr_operands<OpSConvert>(OperandIterator it) {
  OpSConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
OpFConvert read_instr_operands<OpFConvert>(OperandIterator it) {
  OpFConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
OpQuantizeToF16 read_instr_operands<OpQuantizeToF16>(OperandIterator it) {
  OpQuantizeToF16 out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpConvertPtrToU read_instr_operands<OpConvertPtrToU>(OperandIterator it) {
  OpConvertPtrToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
OpSatConvertSToU read_instr_operands<OpSatConvertSToU>(OperandIterator it) {
  OpSatConvertSToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
OpSatConvertUToS read_instr_operands<OpSatConvertUToS>(OperandIterator it) {
  OpSatConvertUToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
OpConvertUToPtr read_instr_operands<OpConvertUToPtr>(OperandIterator it) {
  OpConvertUToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.integer_value = (Id)it.next_u32();
  return out;
}
template<>
OpPtrCastToGeneric read_instr_operands<OpPtrCastToGeneric>(OperandIterator it) {
  OpPtrCastToGeneric out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
OpGenericCastToPtr read_instr_operands<OpGenericCastToPtr>(OperandIterator it) {
  OpGenericCastToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
OpGenericCastToPtrExplicit read_instr_operands<OpGenericCastToPtrExplicit>(OperandIterator it) {
  OpGenericCastToPtrExplicit out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.storage = (StorageClass)it.next_u32();
  return out;
}
template<>
OpBitcast read_instr_operands<OpBitcast>(OperandIterator it) {
  OpBitcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpVectorExtractDynamic read_instr_operands<OpVectorExtractDynamic>(OperandIterator it) {
  OpVectorExtractDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
OpVectorInsertDynamic read_instr_operands<OpVectorInsertDynamic>(OperandIterator it) {
  OpVectorInsertDynamic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.component = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
OpVectorShuffle read_instr_operands<OpVectorShuffle>(OperandIterator it) {
  OpVectorShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  while (it.is_valid()) { out.components.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpCompositeConstruct read_instr_operands<OpCompositeConstruct>(OperandIterator it) {
  OpCompositeConstruct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.constituents.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpCompositeExtract read_instr_operands<OpCompositeExtract>(OperandIterator it) {
  OpCompositeExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpCompositeInsert read_instr_operands<OpCompositeInsert>(OperandIterator it) {
  OpCompositeInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  out.composite = (Id)it.next_u32();
  while (it.is_valid()) { out.indexes.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpCopyObject read_instr_operands<OpCopyObject>(OperandIterator it) {
  OpCopyObject out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpTranspose read_instr_operands<OpTranspose>(OperandIterator it) {
  OpTranspose out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
OpCopyLogical read_instr_operands<OpCopyLogical>(OperandIterator it) {
  OpCopyLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpSNegate read_instr_operands<OpSNegate>(OperandIterator it) {
  OpSNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpFNegate read_instr_operands<OpFNegate>(OperandIterator it) {
  OpFNegate out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpIAdd read_instr_operands<OpIAdd>(OperandIterator it) {
  OpIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFAdd read_instr_operands<OpFAdd>(OperandIterator it) {
  OpFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpISub read_instr_operands<OpISub>(OperandIterator it) {
  OpISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFSub read_instr_operands<OpFSub>(OperandIterator it) {
  OpFSub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIMul read_instr_operands<OpIMul>(OperandIterator it) {
  OpIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFMul read_instr_operands<OpFMul>(OperandIterator it) {
  OpFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUDiv read_instr_operands<OpUDiv>(OperandIterator it) {
  OpUDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSDiv read_instr_operands<OpSDiv>(OperandIterator it) {
  OpSDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFDiv read_instr_operands<OpFDiv>(OperandIterator it) {
  OpFDiv out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUMod read_instr_operands<OpUMod>(OperandIterator it) {
  OpUMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSRem read_instr_operands<OpSRem>(OperandIterator it) {
  OpSRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSMod read_instr_operands<OpSMod>(OperandIterator it) {
  OpSMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFRem read_instr_operands<OpFRem>(OperandIterator it) {
  OpFRem out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFMod read_instr_operands<OpFMod>(OperandIterator it) {
  OpFMod out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpVectorTimesScalar read_instr_operands<OpVectorTimesScalar>(OperandIterator it) {
  OpVectorTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
OpMatrixTimesScalar read_instr_operands<OpMatrixTimesScalar>(OperandIterator it) {
  OpMatrixTimesScalar out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.scalar = (Id)it.next_u32();
  return out;
}
template<>
OpVectorTimesMatrix read_instr_operands<OpVectorTimesMatrix>(OperandIterator it) {
  OpVectorTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  return out;
}
template<>
OpMatrixTimesVector read_instr_operands<OpMatrixTimesVector>(OperandIterator it) {
  OpMatrixTimesVector out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.matrix = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
OpMatrixTimesMatrix read_instr_operands<OpMatrixTimesMatrix>(OperandIterator it) {
  OpMatrixTimesMatrix out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.left_matrix = (Id)it.next_u32();
  out.right_matrix = (Id)it.next_u32();
  return out;
}
template<>
OpOuterProduct read_instr_operands<OpOuterProduct>(OperandIterator it) {
  OpOuterProduct out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
OpDot read_instr_operands<OpDot>(OperandIterator it) {
  OpDot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector_1 = (Id)it.next_u32();
  out.vector_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIAddCarry read_instr_operands<OpIAddCarry>(OperandIterator it) {
  OpIAddCarry out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpISubBorrow read_instr_operands<OpISubBorrow>(OperandIterator it) {
  OpISubBorrow out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUMulExtended read_instr_operands<OpUMulExtended>(OperandIterator it) {
  OpUMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSMulExtended read_instr_operands<OpSMulExtended>(OperandIterator it) {
  OpSMulExtended out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpShiftRightLogical read_instr_operands<OpShiftRightLogical>(OperandIterator it) {
  OpShiftRightLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
OpShiftRightArithmetic read_instr_operands<OpShiftRightArithmetic>(OperandIterator it) {
  OpShiftRightArithmetic out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
OpShiftLeftLogical read_instr_operands<OpShiftLeftLogical>(OperandIterator it) {
  OpShiftLeftLogical out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.shift = (Id)it.next_u32();
  return out;
}
template<>
OpBitwiseOr read_instr_operands<OpBitwiseOr>(OperandIterator it) {
  OpBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpBitwiseXor read_instr_operands<OpBitwiseXor>(OperandIterator it) {
  OpBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpBitwiseAnd read_instr_operands<OpBitwiseAnd>(OperandIterator it) {
  OpBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpNot read_instr_operands<OpNot>(OperandIterator it) {
  OpNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpBitFieldInsert read_instr_operands<OpBitFieldInsert>(OperandIterator it) {
  OpBitFieldInsert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.insert = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
OpBitFieldSExtract read_instr_operands<OpBitFieldSExtract>(OperandIterator it) {
  OpBitFieldSExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
OpBitFieldUExtract read_instr_operands<OpBitFieldUExtract>(OperandIterator it) {
  OpBitFieldUExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  out.offset = (Id)it.next_u32();
  out.count = (Id)it.next_u32();
  return out;
}
template<>
OpBitReverse read_instr_operands<OpBitReverse>(OperandIterator it) {
  OpBitReverse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
template<>
OpBitCount read_instr_operands<OpBitCount>(OperandIterator it) {
  OpBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.base = (Id)it.next_u32();
  return out;
}
template<>
OpAny read_instr_operands<OpAny>(OperandIterator it) {
  OpAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
OpAll read_instr_operands<OpAll>(OperandIterator it) {
  OpAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.vector = (Id)it.next_u32();
  return out;
}
template<>
OpIsNan read_instr_operands<OpIsNan>(OperandIterator it) {
  OpIsNan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpIsInf read_instr_operands<OpIsInf>(OperandIterator it) {
  OpIsInf out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpIsFinite read_instr_operands<OpIsFinite>(OperandIterator it) {
  OpIsFinite out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpIsNormal read_instr_operands<OpIsNormal>(OperandIterator it) {
  OpIsNormal out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpSignBitSet read_instr_operands<OpSignBitSet>(OperandIterator it) {
  OpSignBitSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpLessOrGreater read_instr_operands<OpLessOrGreater>(OperandIterator it) {
  OpLessOrGreater out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
OpOrdered read_instr_operands<OpOrdered>(OperandIterator it) {
  OpOrdered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
OpUnordered read_instr_operands<OpUnordered>(OperandIterator it) {
  OpUnordered out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.x = (Id)it.next_u32();
  out.y = (Id)it.next_u32();
  return out;
}
template<>
OpLogicalEqual read_instr_operands<OpLogicalEqual>(OperandIterator it) {
  OpLogicalEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpLogicalNotEqual read_instr_operands<OpLogicalNotEqual>(OperandIterator it) {
  OpLogicalNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpLogicalOr read_instr_operands<OpLogicalOr>(OperandIterator it) {
  OpLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpLogicalAnd read_instr_operands<OpLogicalAnd>(OperandIterator it) {
  OpLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpLogicalNot read_instr_operands<OpLogicalNot>(OperandIterator it) {
  OpLogicalNot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpSelect read_instr_operands<OpSelect>(OperandIterator it) {
  OpSelect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.condition = (Id)it.next_u32();
  out.object_1 = (Id)it.next_u32();
  out.object_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIEqual read_instr_operands<OpIEqual>(OperandIterator it) {
  OpIEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpINotEqual read_instr_operands<OpINotEqual>(OperandIterator it) {
  OpINotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUGreaterThan read_instr_operands<OpUGreaterThan>(OperandIterator it) {
  OpUGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSGreaterThan read_instr_operands<OpSGreaterThan>(OperandIterator it) {
  OpSGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUGreaterThanEqual read_instr_operands<OpUGreaterThanEqual>(OperandIterator it) {
  OpUGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSGreaterThanEqual read_instr_operands<OpSGreaterThanEqual>(OperandIterator it) {
  OpSGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpULessThan read_instr_operands<OpULessThan>(OperandIterator it) {
  OpULessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSLessThan read_instr_operands<OpSLessThan>(OperandIterator it) {
  OpSLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpULessThanEqual read_instr_operands<OpULessThanEqual>(OperandIterator it) {
  OpULessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpSLessThanEqual read_instr_operands<OpSLessThanEqual>(OperandIterator it) {
  OpSLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdEqual read_instr_operands<OpFOrdEqual>(OperandIterator it) {
  OpFOrdEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordEqual read_instr_operands<OpFUnordEqual>(OperandIterator it) {
  OpFUnordEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdNotEqual read_instr_operands<OpFOrdNotEqual>(OperandIterator it) {
  OpFOrdNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordNotEqual read_instr_operands<OpFUnordNotEqual>(OperandIterator it) {
  OpFUnordNotEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdLessThan read_instr_operands<OpFOrdLessThan>(OperandIterator it) {
  OpFOrdLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordLessThan read_instr_operands<OpFUnordLessThan>(OperandIterator it) {
  OpFUnordLessThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdGreaterThan read_instr_operands<OpFOrdGreaterThan>(OperandIterator it) {
  OpFOrdGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordGreaterThan read_instr_operands<OpFUnordGreaterThan>(OperandIterator it) {
  OpFUnordGreaterThan out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdLessThanEqual read_instr_operands<OpFOrdLessThanEqual>(OperandIterator it) {
  OpFOrdLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordLessThanEqual read_instr_operands<OpFUnordLessThanEqual>(OperandIterator it) {
  OpFUnordLessThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFOrdGreaterThanEqual read_instr_operands<OpFOrdGreaterThanEqual>(OperandIterator it) {
  OpFOrdGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpFUnordGreaterThanEqual read_instr_operands<OpFUnordGreaterThanEqual>(OperandIterator it) {
  OpFUnordGreaterThanEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpDPdx read_instr_operands<OpDPdx>(OperandIterator it) {
  OpDPdx out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpDPdy read_instr_operands<OpDPdy>(OperandIterator it) {
  OpDPdy out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpFwidth read_instr_operands<OpFwidth>(OperandIterator it) {
  OpFwidth out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpDPdxFine read_instr_operands<OpDPdxFine>(OperandIterator it) {
  OpDPdxFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpDPdyFine read_instr_operands<OpDPdyFine>(OperandIterator it) {
  OpDPdyFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpFwidthFine read_instr_operands<OpFwidthFine>(OperandIterator it) {
  OpFwidthFine out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpDPdxCoarse read_instr_operands<OpDPdxCoarse>(OperandIterator it) {
  OpDPdxCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpDPdyCoarse read_instr_operands<OpDPdyCoarse>(OperandIterator it) {
  OpDPdyCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpFwidthCoarse read_instr_operands<OpFwidthCoarse>(OperandIterator it) {
  OpFwidthCoarse out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.p = (Id)it.next_u32();
  return out;
}
template<>
OpPhi read_instr_operands<OpPhi>(OperandIterator it) {
  OpPhi out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.variable.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
OpLoopMerge read_instr_operands<OpLoopMerge>(OperandIterator it) {
  OpLoopMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.continue_target = (Id)it.next_u32();
  out.loop_control = (LoopControl)it.next_u32();
  while (it.is_valid()) { out.loop_control_parameters.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpSelectionMerge read_instr_operands<OpSelectionMerge>(OperandIterator it) {
  OpSelectionMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.selection_control = (SelectionControl)it.next_u32();
  return out;
}
template<>
OpLabel read_instr_operands<OpLabel>(OperandIterator it) {
  OpLabel out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpBranch read_instr_operands<OpBranch>(OperandIterator it) {
  OpBranch out {};
  out.target_label = (Id)it.next_u32();
  return out;
}
template<>
OpBranchConditional read_instr_operands<OpBranchConditional>(OperandIterator it) {
  OpBranchConditional out {};
  out.condition = (Id)it.next_u32();
  out.true_label = (Id)it.next_u32();
  out.false_label = (Id)it.next_u32();
  while (it.is_valid()) { out.branch_weights.emplace_back(it.next_u32()); }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpSwitch`.

template<>
OpReturnValue read_instr_operands<OpReturnValue>(OperandIterator it) {
  OpReturnValue out {};
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpLifetimeStart read_instr_operands<OpLifetimeStart>(OperandIterator it) {
  OpLifetimeStart out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
template<>
OpLifetimeStop read_instr_operands<OpLifetimeStop>(OperandIterator it) {
  OpLifetimeStop out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
template<>
OpAtomicLoad read_instr_operands<OpAtomicLoad>(OperandIterator it) {
  OpAtomicLoad out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicStore read_instr_operands<OpAtomicStore>(OperandIterator it) {
  OpAtomicStore out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicExchange read_instr_operands<OpAtomicExchange>(OperandIterator it) {
  OpAtomicExchange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicCompareExchange read_instr_operands<OpAtomicCompareExchange>(OperandIterator it) {
  OpAtomicCompareExchange out {};
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
OpAtomicCompareExchangeWeak read_instr_operands<OpAtomicCompareExchangeWeak>(OperandIterator it) {
  OpAtomicCompareExchangeWeak out {};
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
OpAtomicIIncrement read_instr_operands<OpAtomicIIncrement>(OperandIterator it) {
  OpAtomicIIncrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicIDecrement read_instr_operands<OpAtomicIDecrement>(OperandIterator it) {
  OpAtomicIDecrement out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicIAdd read_instr_operands<OpAtomicIAdd>(OperandIterator it) {
  OpAtomicIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicISub read_instr_operands<OpAtomicISub>(OperandIterator it) {
  OpAtomicISub out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicSMin read_instr_operands<OpAtomicSMin>(OperandIterator it) {
  OpAtomicSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicUMin read_instr_operands<OpAtomicUMin>(OperandIterator it) {
  OpAtomicUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicSMax read_instr_operands<OpAtomicSMax>(OperandIterator it) {
  OpAtomicSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicUMax read_instr_operands<OpAtomicUMax>(OperandIterator it) {
  OpAtomicUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicAnd read_instr_operands<OpAtomicAnd>(OperandIterator it) {
  OpAtomicAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicOr read_instr_operands<OpAtomicOr>(OperandIterator it) {
  OpAtomicOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicXor read_instr_operands<OpAtomicXor>(OperandIterator it) {
  OpAtomicXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicFlagTestAndSet read_instr_operands<OpAtomicFlagTestAndSet>(OperandIterator it) {
  OpAtomicFlagTestAndSet out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicFlagClear read_instr_operands<OpAtomicFlagClear>(OperandIterator it) {
  OpAtomicFlagClear out {};
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpAtomicFAddEXT read_instr_operands<OpAtomicFAddEXT>(OperandIterator it) {
  OpAtomicFAddEXT out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpEmitStreamVertex read_instr_operands<OpEmitStreamVertex>(OperandIterator it) {
  OpEmitStreamVertex out {};
  out.stream = (Id)it.next_u32();
  return out;
}
template<>
OpEndStreamPrimitive read_instr_operands<OpEndStreamPrimitive>(OperandIterator it) {
  OpEndStreamPrimitive out {};
  out.stream = (Id)it.next_u32();
  return out;
}
template<>
OpControlBarrier read_instr_operands<OpControlBarrier>(OperandIterator it) {
  OpControlBarrier out {};
  out.execution = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpMemoryBarrier read_instr_operands<OpMemoryBarrier>(OperandIterator it) {
  OpMemoryBarrier out {};
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpNamedBarrierInitialize read_instr_operands<OpNamedBarrierInitialize>(OperandIterator it) {
  OpNamedBarrierInitialize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.subgroup_count = (Id)it.next_u32();
  return out;
}
template<>
OpMemoryNamedBarrier read_instr_operands<OpMemoryNamedBarrier>(OperandIterator it) {
  OpMemoryNamedBarrier out {};
  out.named_barrier = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
OpGroupAsyncCopy read_instr_operands<OpGroupAsyncCopy>(OperandIterator it) {
  OpGroupAsyncCopy out {};
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
OpGroupWaitEvents read_instr_operands<OpGroupWaitEvents>(OperandIterator it) {
  OpGroupWaitEvents out {};
  out.execution = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.events_list = (Id)it.next_u32();
  return out;
}
template<>
OpGroupAll read_instr_operands<OpGroupAll>(OperandIterator it) {
  OpGroupAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpGroupAny read_instr_operands<OpGroupAny>(OperandIterator it) {
  OpGroupAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpGroupBroadcast read_instr_operands<OpGroupBroadcast>(OperandIterator it) {
  OpGroupBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.local_id = (Id)it.next_u32();
  return out;
}
template<>
OpGroupIAdd read_instr_operands<OpGroupIAdd>(OperandIterator it) {
  OpGroupIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFAdd read_instr_operands<OpGroupFAdd>(OperandIterator it) {
  OpGroupFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFMin read_instr_operands<OpGroupFMin>(OperandIterator it) {
  OpGroupFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupUMin read_instr_operands<OpGroupUMin>(OperandIterator it) {
  OpGroupUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupSMin read_instr_operands<OpGroupSMin>(OperandIterator it) {
  OpGroupSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFMax read_instr_operands<OpGroupFMax>(OperandIterator it) {
  OpGroupFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupUMax read_instr_operands<OpGroupUMax>(OperandIterator it) {
  OpGroupUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupSMax read_instr_operands<OpGroupSMax>(OperandIterator it) {
  OpGroupSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupBallotKHR read_instr_operands<OpSubgroupBallotKHR>(OperandIterator it) {
  OpSubgroupBallotKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupFirstInvocationKHR read_instr_operands<OpSubgroupFirstInvocationKHR>(OperandIterator it) {
  OpSubgroupFirstInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupAllKHR read_instr_operands<OpSubgroupAllKHR>(OperandIterator it) {
  OpSubgroupAllKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupAnyKHR read_instr_operands<OpSubgroupAnyKHR>(OperandIterator it) {
  OpSubgroupAnyKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupAllEqualKHR read_instr_operands<OpSubgroupAllEqualKHR>(OperandIterator it) {
  OpSubgroupAllEqualKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupReadInvocationKHR read_instr_operands<OpSubgroupReadInvocationKHR>(OperandIterator it) {
  OpSubgroupReadInvocationKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
OpGroupIAddNonUniformAMD read_instr_operands<OpGroupIAddNonUniformAMD>(OperandIterator it) {
  OpGroupIAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFAddNonUniformAMD read_instr_operands<OpGroupFAddNonUniformAMD>(OperandIterator it) {
  OpGroupFAddNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFMinNonUniformAMD read_instr_operands<OpGroupFMinNonUniformAMD>(OperandIterator it) {
  OpGroupFMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupUMinNonUniformAMD read_instr_operands<OpGroupUMinNonUniformAMD>(OperandIterator it) {
  OpGroupUMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupSMinNonUniformAMD read_instr_operands<OpGroupSMinNonUniformAMD>(OperandIterator it) {
  OpGroupSMinNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupFMaxNonUniformAMD read_instr_operands<OpGroupFMaxNonUniformAMD>(OperandIterator it) {
  OpGroupFMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupUMaxNonUniformAMD read_instr_operands<OpGroupUMaxNonUniformAMD>(OperandIterator it) {
  OpGroupUMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpGroupSMaxNonUniformAMD read_instr_operands<OpGroupSMaxNonUniformAMD>(OperandIterator it) {
  OpGroupSMaxNonUniformAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.x = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupShuffleINTEL read_instr_operands<OpSubgroupShuffleINTEL>(OperandIterator it) {
  OpSubgroupShuffleINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.invocation_id = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupShuffleDownINTEL read_instr_operands<OpSubgroupShuffleDownINTEL>(OperandIterator it) {
  OpSubgroupShuffleDownINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.next = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupShuffleUpINTEL read_instr_operands<OpSubgroupShuffleUpINTEL>(OperandIterator it) {
  OpSubgroupShuffleUpINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.previous = (Id)it.next_u32();
  out.current = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupShuffleXorINTEL read_instr_operands<OpSubgroupShuffleXorINTEL>(OperandIterator it) {
  OpSubgroupShuffleXorINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupBlockReadINTEL read_instr_operands<OpSubgroupBlockReadINTEL>(OperandIterator it) {
  OpSubgroupBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ptr = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupBlockWriteINTEL read_instr_operands<OpSubgroupBlockWriteINTEL>(OperandIterator it) {
  OpSubgroupBlockWriteINTEL out {};
  out.ptr = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupImageBlockReadINTEL read_instr_operands<OpSubgroupImageBlockReadINTEL>(OperandIterator it) {
  OpSubgroupImageBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupImageBlockWriteINTEL read_instr_operands<OpSubgroupImageBlockWriteINTEL>(OperandIterator it) {
  OpSubgroupImageBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupImageMediaBlockReadINTEL read_instr_operands<OpSubgroupImageMediaBlockReadINTEL>(OperandIterator it) {
  OpSubgroupImageMediaBlockReadINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  return out;
}
template<>
OpSubgroupImageMediaBlockWriteINTEL read_instr_operands<OpSubgroupImageMediaBlockWriteINTEL>(OperandIterator it) {
  OpSubgroupImageMediaBlockWriteINTEL out {};
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.width = (Id)it.next_u32();
  out.height = (Id)it.next_u32();
  out.data = (Id)it.next_u32();
  return out;
}
template<>
OpEnqueueMarker read_instr_operands<OpEnqueueMarker>(OperandIterator it) {
  OpEnqueueMarker out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.queue = (Id)it.next_u32();
  out.num_events = (Id)it.next_u32();
  out.wait_events = (Id)it.next_u32();
  out.ret_event = (Id)it.next_u32();
  return out;
}
template<>
OpEnqueueKernel read_instr_operands<OpEnqueueKernel>(OperandIterator it) {
  OpEnqueueKernel out {};
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
OpGetKernelNDrangeSubGroupCount read_instr_operands<OpGetKernelNDrangeSubGroupCount>(OperandIterator it) {
  OpGetKernelNDrangeSubGroupCount out {};
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
OpGetKernelNDrangeMaxSubGroupSize read_instr_operands<OpGetKernelNDrangeMaxSubGroupSize>(OperandIterator it) {
  OpGetKernelNDrangeMaxSubGroupSize out {};
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
OpGetKernelWorkGroupSize read_instr_operands<OpGetKernelWorkGroupSize>(OperandIterator it) {
  OpGetKernelWorkGroupSize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
OpGetKernelPreferredWorkGroupSizeMultiple read_instr_operands<OpGetKernelPreferredWorkGroupSizeMultiple>(OperandIterator it) {
  OpGetKernelPreferredWorkGroupSizeMultiple out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
OpRetainEvent read_instr_operands<OpRetainEvent>(OperandIterator it) {
  OpRetainEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
OpReleaseEvent read_instr_operands<OpReleaseEvent>(OperandIterator it) {
  OpReleaseEvent out {};
  out.event = (Id)it.next_u32();
  return out;
}
template<>
OpCreateUserEvent read_instr_operands<OpCreateUserEvent>(OperandIterator it) {
  OpCreateUserEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpIsValidEvent read_instr_operands<OpIsValidEvent>(OperandIterator it) {
  OpIsValidEvent out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.event = (Id)it.next_u32();
  return out;
}
template<>
OpSetUserEventStatus read_instr_operands<OpSetUserEventStatus>(OperandIterator it) {
  OpSetUserEventStatus out {};
  out.event = (Id)it.next_u32();
  out.status = (Id)it.next_u32();
  return out;
}
template<>
OpCaptureEventProfilingInfo read_instr_operands<OpCaptureEventProfilingInfo>(OperandIterator it) {
  OpCaptureEventProfilingInfo out {};
  out.event = (Id)it.next_u32();
  out.profiling_info = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGetDefaultQueue read_instr_operands<OpGetDefaultQueue>(OperandIterator it) {
  OpGetDefaultQueue out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpBuildNDRange read_instr_operands<OpBuildNDRange>(OperandIterator it) {
  OpBuildNDRange out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.global_work_size = (Id)it.next_u32();
  out.local_work_size = (Id)it.next_u32();
  out.global_work_offset = (Id)it.next_u32();
  return out;
}
template<>
OpGetKernelLocalSizeForSubgroupCount read_instr_operands<OpGetKernelLocalSizeForSubgroupCount>(OperandIterator it) {
  OpGetKernelLocalSizeForSubgroupCount out {};
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
OpGetKernelMaxNumSubgroups read_instr_operands<OpGetKernelMaxNumSubgroups>(OperandIterator it) {
  OpGetKernelMaxNumSubgroups out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.invoke = (Id)it.next_u32();
  out.param = (Id)it.next_u32();
  out.param_size = (Id)it.next_u32();
  out.param_align = (Id)it.next_u32();
  return out;
}
template<>
OpReadPipe read_instr_operands<OpReadPipe>(OperandIterator it) {
  OpReadPipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpWritePipe read_instr_operands<OpWritePipe>(OperandIterator it) {
  OpWritePipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpReservedReadPipe read_instr_operands<OpReservedReadPipe>(OperandIterator it) {
  OpReservedReadPipe out {};
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
OpReservedWritePipe read_instr_operands<OpReservedWritePipe>(OperandIterator it) {
  OpReservedWritePipe out {};
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
OpReserveReadPipePackets read_instr_operands<OpReserveReadPipePackets>(OperandIterator it) {
  OpReserveReadPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpReserveWritePipePackets read_instr_operands<OpReserveWritePipePackets>(OperandIterator it) {
  OpReserveWritePipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpCommitReadPipe read_instr_operands<OpCommitReadPipe>(OperandIterator it) {
  OpCommitReadPipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpCommitWritePipe read_instr_operands<OpCommitWritePipe>(OperandIterator it) {
  OpCommitWritePipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpIsValidReserveId read_instr_operands<OpIsValidReserveId>(OperandIterator it) {
  OpIsValidReserveId out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  return out;
}
template<>
OpGetNumPipePackets read_instr_operands<OpGetNumPipePackets>(OperandIterator it) {
  OpGetNumPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpGetMaxPipePackets read_instr_operands<OpGetMaxPipePackets>(OperandIterator it) {
  OpGetMaxPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpGroupReserveReadPipePackets read_instr_operands<OpGroupReserveReadPipePackets>(OperandIterator it) {
  OpGroupReserveReadPipePackets out {};
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
OpGroupReserveWritePipePackets read_instr_operands<OpGroupReserveWritePipePackets>(OperandIterator it) {
  OpGroupReserveWritePipePackets out {};
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
OpGroupCommitReadPipe read_instr_operands<OpGroupCommitReadPipe>(OperandIterator it) {
  OpGroupCommitReadPipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpGroupCommitWritePipe read_instr_operands<OpGroupCommitWritePipe>(OperandIterator it) {
  OpGroupCommitWritePipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpConstantPipeStorage read_instr_operands<OpConstantPipeStorage>(OperandIterator it) {
  OpConstantPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (uint32_t)it.next_u32();
  out.packet_alignment = (uint32_t)it.next_u32();
  out.capacity = (uint32_t)it.next_u32();
  return out;
}
template<>
OpCreatePipeFromPipeStorage read_instr_operands<OpCreatePipeFromPipeStorage>(OperandIterator it) {
  OpCreatePipeFromPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe_storage = (Id)it.next_u32();
  return out;
}
template<>
OpReadPipeBlockingINTEL read_instr_operands<OpReadPipeBlockingINTEL>(OperandIterator it) {
  OpReadPipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpWritePipeBlockingINTEL read_instr_operands<OpWritePipeBlockingINTEL>(OperandIterator it) {
  OpWritePipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformElect read_instr_operands<OpGroupNonUniformElect>(OperandIterator it) {
  OpGroupNonUniformElect out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformAll read_instr_operands<OpGroupNonUniformAll>(OperandIterator it) {
  OpGroupNonUniformAll out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformAny read_instr_operands<OpGroupNonUniformAny>(OperandIterator it) {
  OpGroupNonUniformAny out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformAllEqual read_instr_operands<OpGroupNonUniformAllEqual>(OperandIterator it) {
  OpGroupNonUniformAllEqual out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBroadcast read_instr_operands<OpGroupNonUniformBroadcast>(OperandIterator it) {
  OpGroupNonUniformBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBroadcastFirst read_instr_operands<OpGroupNonUniformBroadcastFirst>(OperandIterator it) {
  OpGroupNonUniformBroadcastFirst out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBallot read_instr_operands<OpGroupNonUniformBallot>(OperandIterator it) {
  OpGroupNonUniformBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.predicate = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformInverseBallot read_instr_operands<OpGroupNonUniformInverseBallot>(OperandIterator it) {
  OpGroupNonUniformInverseBallot out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBallotBitExtract read_instr_operands<OpGroupNonUniformBallotBitExtract>(OperandIterator it) {
  OpGroupNonUniformBallotBitExtract out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBallotBitCount read_instr_operands<OpGroupNonUniformBallotBitCount>(OperandIterator it) {
  OpGroupNonUniformBallotBitCount out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBallotFindLSB read_instr_operands<OpGroupNonUniformBallotFindLSB>(OperandIterator it) {
  OpGroupNonUniformBallotFindLSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformBallotFindMSB read_instr_operands<OpGroupNonUniformBallotFindMSB>(OperandIterator it) {
  OpGroupNonUniformBallotFindMSB out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformShuffle read_instr_operands<OpGroupNonUniformShuffle>(OperandIterator it) {
  OpGroupNonUniformShuffle out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.id = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformShuffleXor read_instr_operands<OpGroupNonUniformShuffleXor>(OperandIterator it) {
  OpGroupNonUniformShuffleXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.mask = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformShuffleUp read_instr_operands<OpGroupNonUniformShuffleUp>(OperandIterator it) {
  OpGroupNonUniformShuffleUp out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformShuffleDown read_instr_operands<OpGroupNonUniformShuffleDown>(OperandIterator it) {
  OpGroupNonUniformShuffleDown out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.delta = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformIAdd read_instr_operands<OpGroupNonUniformIAdd>(OperandIterator it) {
  OpGroupNonUniformIAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformFAdd read_instr_operands<OpGroupNonUniformFAdd>(OperandIterator it) {
  OpGroupNonUniformFAdd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformIMul read_instr_operands<OpGroupNonUniformIMul>(OperandIterator it) {
  OpGroupNonUniformIMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformFMul read_instr_operands<OpGroupNonUniformFMul>(OperandIterator it) {
  OpGroupNonUniformFMul out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformSMin read_instr_operands<OpGroupNonUniformSMin>(OperandIterator it) {
  OpGroupNonUniformSMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformUMin read_instr_operands<OpGroupNonUniformUMin>(OperandIterator it) {
  OpGroupNonUniformUMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformFMin read_instr_operands<OpGroupNonUniformFMin>(OperandIterator it) {
  OpGroupNonUniformFMin out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformSMax read_instr_operands<OpGroupNonUniformSMax>(OperandIterator it) {
  OpGroupNonUniformSMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformUMax read_instr_operands<OpGroupNonUniformUMax>(OperandIterator it) {
  OpGroupNonUniformUMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformFMax read_instr_operands<OpGroupNonUniformFMax>(OperandIterator it) {
  OpGroupNonUniformFMax out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformBitwiseAnd read_instr_operands<OpGroupNonUniformBitwiseAnd>(OperandIterator it) {
  OpGroupNonUniformBitwiseAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformBitwiseOr read_instr_operands<OpGroupNonUniformBitwiseOr>(OperandIterator it) {
  OpGroupNonUniformBitwiseOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformBitwiseXor read_instr_operands<OpGroupNonUniformBitwiseXor>(OperandIterator it) {
  OpGroupNonUniformBitwiseXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformLogicalAnd read_instr_operands<OpGroupNonUniformLogicalAnd>(OperandIterator it) {
  OpGroupNonUniformLogicalAnd out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformLogicalOr read_instr_operands<OpGroupNonUniformLogicalOr>(OperandIterator it) {
  OpGroupNonUniformLogicalOr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformLogicalXor read_instr_operands<OpGroupNonUniformLogicalXor>(OperandIterator it) {
  OpGroupNonUniformLogicalXor out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.operation = (GroupOperation)it.next_u32();
  out.value = (Id)it.next_u32();
  if (it.is_valid()) { out.cluster_size = (Id)it.next_u32(); }
  return out;
}
template<>
OpGroupNonUniformQuadBroadcast read_instr_operands<OpGroupNonUniformQuadBroadcast>(OperandIterator it) {
  OpGroupNonUniformQuadBroadcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformQuadSwap read_instr_operands<OpGroupNonUniformQuadSwap>(OperandIterator it) {
  OpGroupNonUniformQuadSwap out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  out.direction = (Id)it.next_u32();
  return out;
}
template<>
OpGroupNonUniformPartitionNV read_instr_operands<OpGroupNonUniformPartitionNV>(OperandIterator it) {
  OpGroupNonUniformPartitionNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
OpTraceRayKHR read_instr_operands<OpTraceRayKHR>(OperandIterator it) {
  OpTraceRayKHR out {};
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
OpExecuteCallableKHR read_instr_operands<OpExecuteCallableKHR>(OperandIterator it) {
  OpExecuteCallableKHR out {};
  out.sbt_index = (Id)it.next_u32();
  out.callable_data = (Id)it.next_u32();
  return out;
}
template<>
OpConvertUToAccelerationStructureKHR read_instr_operands<OpConvertUToAccelerationStructureKHR>(OperandIterator it) {
  OpConvertUToAccelerationStructureKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.accel = (Id)it.next_u32();
  return out;
}
template<>
OpTypeRayQueryKHR read_instr_operands<OpTypeRayQueryKHR>(OperandIterator it) {
  OpTypeRayQueryKHR out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryInitializeKHR read_instr_operands<OpRayQueryInitializeKHR>(OperandIterator it) {
  OpRayQueryInitializeKHR out {};
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
OpRayQueryTerminateKHR read_instr_operands<OpRayQueryTerminateKHR>(OperandIterator it) {
  OpRayQueryTerminateKHR out {};
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGenerateIntersectionKHR read_instr_operands<OpRayQueryGenerateIntersectionKHR>(OperandIterator it) {
  OpRayQueryGenerateIntersectionKHR out {};
  out.ray_query = (Id)it.next_u32();
  out.hit_t = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryConfirmIntersectionKHR read_instr_operands<OpRayQueryConfirmIntersectionKHR>(OperandIterator it) {
  OpRayQueryConfirmIntersectionKHR out {};
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryProceedKHR read_instr_operands<OpRayQueryProceedKHR>(OperandIterator it) {
  OpRayQueryProceedKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionTypeKHR read_instr_operands<OpRayQueryGetIntersectionTypeKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionTypeKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpFragmentMaskFetchAMD read_instr_operands<OpFragmentMaskFetchAMD>(OperandIterator it) {
  OpFragmentMaskFetchAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  return out;
}
template<>
OpFragmentFetchAMD read_instr_operands<OpFragmentFetchAMD>(OperandIterator it) {
  OpFragmentFetchAMD out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.image = (Id)it.next_u32();
  out.coordinate = (Id)it.next_u32();
  out.fragment_index = (Id)it.next_u32();
  return out;
}
template<>
OpReadClockKHR read_instr_operands<OpReadClockKHR>(OperandIterator it) {
  OpReadClockKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  return out;
}
template<>
OpWritePackedPrimitiveIndices4x8NV read_instr_operands<OpWritePackedPrimitiveIndices4x8NV>(OperandIterator it) {
  OpWritePackedPrimitiveIndices4x8NV out {};
  out.index_offset = (Id)it.next_u32();
  out.packed_indices = (Id)it.next_u32();
  return out;
}
template<>
OpReportIntersectionNV read_instr_operands<OpReportIntersectionNV>(OperandIterator it) {
  OpReportIntersectionNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.hit = (Id)it.next_u32();
  out.hit_kind = (Id)it.next_u32();
  return out;
}
template<>
OpTraceNV read_instr_operands<OpTraceNV>(OperandIterator it) {
  OpTraceNV out {};
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
OpTypeAccelerationStructureNV read_instr_operands<OpTypeAccelerationStructureNV>(OperandIterator it) {
  OpTypeAccelerationStructureNV out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpExecuteCallableNV read_instr_operands<OpExecuteCallableNV>(OperandIterator it) {
  OpExecuteCallableNV out {};
  out.sbt_index = (Id)it.next_u32();
  out.callable_data_id = (Id)it.next_u32();
  return out;
}
template<>
OpTypeCooperativeMatrixNV read_instr_operands<OpTypeCooperativeMatrixNV>(OperandIterator it) {
  OpTypeCooperativeMatrixNV out {};
  out.result_id = (Id)it.next_u32();
  out.component_type = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.rows = (Id)it.next_u32();
  out.columns = (Id)it.next_u32();
  return out;
}
template<>
OpCooperativeMatrixLoadNV read_instr_operands<OpCooperativeMatrixLoadNV>(OperandIterator it) {
  OpCooperativeMatrixLoadNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.column_major = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpCooperativeMatrixStoreNV read_instr_operands<OpCooperativeMatrixStoreNV>(OperandIterator it) {
  OpCooperativeMatrixStoreNV out {};
  out.pointer = (Id)it.next_u32();
  out.object = (Id)it.next_u32();
  out.stride = (Id)it.next_u32();
  out.column_major = (Id)it.next_u32();
  if (it.is_valid()) { out.memory_operands = (MemoryOperands)it.next_u32(); }
  return out;
}
template<>
OpCooperativeMatrixMulAddNV read_instr_operands<OpCooperativeMatrixMulAddNV>(OperandIterator it) {
  OpCooperativeMatrixMulAddNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.a = (Id)it.next_u32();
  out.b = (Id)it.next_u32();
  out.c = (Id)it.next_u32();
  return out;
}
template<>
OpCooperativeMatrixLengthNV read_instr_operands<OpCooperativeMatrixLengthNV>(OperandIterator it) {
  OpCooperativeMatrixLengthNV out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.type = (Id)it.next_u32();
  return out;
}
template<>
OpIsHelperInvocationEXT read_instr_operands<OpIsHelperInvocationEXT>(OperandIterator it) {
  OpIsHelperInvocationEXT out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
OpUCountLeadingZerosINTEL read_instr_operands<OpUCountLeadingZerosINTEL>(OperandIterator it) {
  OpUCountLeadingZerosINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpUCountTrailingZerosINTEL read_instr_operands<OpUCountTrailingZerosINTEL>(OperandIterator it) {
  OpUCountTrailingZerosINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
template<>
OpAbsISubINTEL read_instr_operands<OpAbsISubINTEL>(OperandIterator it) {
  OpAbsISubINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpAbsUSubINTEL read_instr_operands<OpAbsUSubINTEL>(OperandIterator it) {
  OpAbsUSubINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIAddSatINTEL read_instr_operands<OpIAddSatINTEL>(OperandIterator it) {
  OpIAddSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUAddSatINTEL read_instr_operands<OpUAddSatINTEL>(OperandIterator it) {
  OpUAddSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIAverageINTEL read_instr_operands<OpIAverageINTEL>(OperandIterator it) {
  OpIAverageINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUAverageINTEL read_instr_operands<OpUAverageINTEL>(OperandIterator it) {
  OpUAverageINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIAverageRoundedINTEL read_instr_operands<OpIAverageRoundedINTEL>(OperandIterator it) {
  OpIAverageRoundedINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUAverageRoundedINTEL read_instr_operands<OpUAverageRoundedINTEL>(OperandIterator it) {
  OpUAverageRoundedINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpISubSatINTEL read_instr_operands<OpISubSatINTEL>(OperandIterator it) {
  OpISubSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUSubSatINTEL read_instr_operands<OpUSubSatINTEL>(OperandIterator it) {
  OpUSubSatINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpIMul32x16INTEL read_instr_operands<OpIMul32x16INTEL>(OperandIterator it) {
  OpIMul32x16INTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpUMul32x16INTEL read_instr_operands<OpUMul32x16INTEL>(OperandIterator it) {
  OpUMul32x16INTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand_1 = (Id)it.next_u32();
  out.operand_2 = (Id)it.next_u32();
  return out;
}
template<>
OpLoopControlINTEL read_instr_operands<OpLoopControlINTEL>(OperandIterator it) {
  OpLoopControlINTEL out {};
  while (it.is_valid()) { out.loop_control_parameters.emplace_back(it.next_u32()); }
  return out;
}
template<>
OpFPGARegINTEL read_instr_operands<OpFPGARegINTEL>(OperandIterator it) {
  OpFPGARegINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.result = (Id)it.next_u32();
  out.input = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetRayTMinKHR read_instr_operands<OpRayQueryGetRayTMinKHR>(OperandIterator it) {
  OpRayQueryGetRayTMinKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetRayFlagsKHR read_instr_operands<OpRayQueryGetRayFlagsKHR>(OperandIterator it) {
  OpRayQueryGetRayFlagsKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionTKHR read_instr_operands<OpRayQueryGetIntersectionTKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionTKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionInstanceCustomIndexKHR read_instr_operands<OpRayQueryGetIntersectionInstanceCustomIndexKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionInstanceCustomIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionInstanceIdKHR read_instr_operands<OpRayQueryGetIntersectionInstanceIdKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionInstanceIdKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR read_instr_operands<OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionGeometryIndexKHR read_instr_operands<OpRayQueryGetIntersectionGeometryIndexKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionGeometryIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionPrimitiveIndexKHR read_instr_operands<OpRayQueryGetIntersectionPrimitiveIndexKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionPrimitiveIndexKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionBarycentricsKHR read_instr_operands<OpRayQueryGetIntersectionBarycentricsKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionBarycentricsKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionFrontFaceKHR read_instr_operands<OpRayQueryGetIntersectionFrontFaceKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionFrontFaceKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionCandidateAABBOpaqueKHR read_instr_operands<OpRayQueryGetIntersectionCandidateAABBOpaqueKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionCandidateAABBOpaqueKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionObjectRayDirectionKHR read_instr_operands<OpRayQueryGetIntersectionObjectRayDirectionKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionObjectRayDirectionKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionObjectRayOriginKHR read_instr_operands<OpRayQueryGetIntersectionObjectRayOriginKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionObjectRayOriginKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetWorldRayDirectionKHR read_instr_operands<OpRayQueryGetWorldRayDirectionKHR>(OperandIterator it) {
  OpRayQueryGetWorldRayDirectionKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetWorldRayOriginKHR read_instr_operands<OpRayQueryGetWorldRayOriginKHR>(OperandIterator it) {
  OpRayQueryGetWorldRayOriginKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionObjectToWorldKHR read_instr_operands<OpRayQueryGetIntersectionObjectToWorldKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionObjectToWorldKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
template<>
OpRayQueryGetIntersectionWorldToObjectKHR read_instr_operands<OpRayQueryGetIntersectionWorldToObjectKHR>(OperandIterator it) {
  OpRayQueryGetIntersectionWorldToObjectKHR out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.ray_query = (Id)it.next_u32();
  out.intersection = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
