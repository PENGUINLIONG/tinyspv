// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
#pragma once
#include <vector>
#include <optional>
#include "spirv/unified1/spirv.hpp"
namespace tinyspv {
typedef uint32_t Id;
// ------ composite type definition begins ------
struct PairLiteralIntegerIdRef {
  uint32_t literal_integer;
  Id id_ref;
};
struct PairIdRefLiteralInteger {
  Id id_ref;
  uint32_t literal_integer;
};
struct PairIdRefIdRef {
  Id id_ref;
  Id id_ref2;
};
// ------ composite type definition ends ------
// ------ operand struct definition begins ------
struct OpNop {
};
struct OpUndef {
  Id id_result_type;
  Id id_result;
};
struct OpSourceContinued {
  uint32_t continued_source;
};
struct OpSource {
  spv::SourceLanguage source_language;
  uint32_t version;
  std::optional<Id> file;
  std::optional<uint32_t> source;
};
struct OpSourceExtension {
  uint32_t extension;
};
struct OpName {
  Id target;
  uint32_t name;
};
struct OpMemberName {
  Id type;
  uint32_t member;
  uint32_t name;
};
struct OpString {
  Id id_result;
  uint32_t string;
};
struct OpLine {
  Id file;
  uint32_t line;
  uint32_t column;
};
struct OpExtension {
  uint32_t name;
};
struct OpExtInstImport {
  Id id_result;
  uint32_t name;
};
struct OpExtInst {
  Id id_result_type;
  Id id_result;
  Id set;
  uint32_t instruction;
  std::vector<Id> operands;
};
struct OpMemoryModel {
  spv::AddressingModel addressing_model;
  spv::MemoryModel memory_model;
};
struct OpEntryPoint {
  spv::ExecutionModel execution_model;
  Id entry_point;
  uint32_t name;
  std::vector<Id> interface;
};
struct OpExecutionMode {
  Id entry_point;
  spv::ExecutionMode mode;
};
struct OpCapability {
  spv::Capability capability;
};
struct OpTypeVoid {
  Id id_result;
};
struct OpTypeBool {
  Id id_result;
};
struct OpTypeInt {
  Id id_result;
  uint32_t width;
  uint32_t signedness;
};
struct OpTypeFloat {
  Id id_result;
  uint32_t width;
};
struct OpTypeVector {
  Id id_result;
  Id component_type;
  uint32_t component_count;
};
struct OpTypeMatrix {
  Id id_result;
  Id column_type;
  uint32_t column_count;
};
struct OpTypeImage {
  Id id_result;
  Id sampled_type;
  spv::Dim dim;
  uint32_t depth;
  uint32_t arrayed;
  uint32_t ms;
  uint32_t sampled;
  spv::ImageFormat image_format;
  std::optional<spv::AccessQualifier> access_qualifier;
};
struct OpTypeSampler {
  Id id_result;
};
struct OpTypeSampledImage {
  Id id_result;
  Id image_type;
};
struct OpTypeArray {
  Id id_result;
  Id element_type;
  Id length;
};
struct OpTypeRuntimeArray {
  Id id_result;
  Id element_type;
};
struct OpTypeStruct {
  Id id_result;
  std::vector<Id> member_types;
};
struct OpTypeOpaque {
  Id id_result;
  uint32_t literal_string;
};
struct OpTypePointer {
  Id id_result;
  spv::StorageClass storage_class;
  Id type;
};
struct OpTypeFunction {
  Id id_result;
  Id return_type;
  std::vector<Id> parameter_types;
};
struct OpTypeEvent {
  Id id_result;
};
struct OpTypeDeviceEvent {
  Id id_result;
};
struct OpTypeReserveId {
  Id id_result;
};
struct OpTypeQueue {
  Id id_result;
};
struct OpTypePipe {
  Id id_result;
  spv::AccessQualifier qualifier;
};
struct OpTypeForwardPointer {
  Id pointer_type;
  spv::StorageClass storage_class;
};
struct OpConstantTrue {
  Id id_result_type;
  Id id_result;
};
struct OpConstantFalse {
  Id id_result_type;
  Id id_result;
};
struct OpConstant {
  Id id_result_type;
  Id id_result;
  uint32_t value;
};
struct OpConstantComposite {
  Id id_result_type;
  Id id_result;
  std::vector<Id> constituents;
};
struct OpConstantSampler {
  Id id_result_type;
  Id id_result;
  spv::SamplerAddressingMode sampler_addressing_mode;
  uint32_t param;
  spv::SamplerFilterMode sampler_filter_mode;
};
struct OpConstantNull {
  Id id_result_type;
  Id id_result;
};
struct OpSpecConstantTrue {
  Id id_result_type;
  Id id_result;
};
struct OpSpecConstantFalse {
  Id id_result_type;
  Id id_result;
};
struct OpSpecConstant {
  Id id_result_type;
  Id id_result;
  uint32_t value;
};
struct OpSpecConstantComposite {
  Id id_result_type;
  Id id_result;
  std::vector<Id> constituents;
};
struct OpSpecConstantOp {
  Id id_result_type;
  Id id_result;
  uint32_t opcode;
};
struct OpFunction {
  Id id_result_type;
  Id id_result;
  spv::FunctionControlMask function_control;
  Id function_type;
};
struct OpFunctionParameter {
  Id id_result_type;
  Id id_result;
};
struct OpFunctionEnd {
};
struct OpFunctionCall {
  Id id_result_type;
  Id id_result;
  Id function;
  std::vector<Id> arguments;
};
struct OpVariable {
  Id id_result_type;
  Id id_result;
  spv::StorageClass storage_class;
  std::optional<Id> initializer;
};
struct OpImageTexelPointer {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  Id sample;
};
struct OpLoad {
  Id id_result_type;
  Id id_result;
  Id pointer;
  std::optional<spv::MemoryAccessMask> memory_access;
};
struct OpStore {
  Id pointer;
  Id object;
  std::optional<spv::MemoryAccessMask> memory_access;
};
struct OpCopyMemory {
  Id target;
  Id source;
  std::optional<spv::MemoryAccessMask> memory_access;
  std::optional<spv::MemoryAccessMask> memory_access2;
};
struct OpCopyMemorySized {
  Id target;
  Id source;
  Id size;
  std::optional<spv::MemoryAccessMask> memory_access;
  std::optional<spv::MemoryAccessMask> memory_access2;
};
struct OpAccessChain {
  Id id_result_type;
  Id id_result;
  Id base;
  std::vector<Id> indexes;
};
struct OpInBoundsAccessChain {
  Id id_result_type;
  Id id_result;
  Id base;
  std::vector<Id> indexes;
};
struct OpPtrAccessChain {
  Id id_result_type;
  Id id_result;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpArrayLength {
  Id id_result_type;
  Id id_result;
  Id structure;
  uint32_t array_member;
};
struct OpGenericPtrMemSemantics {
  Id id_result_type;
  Id id_result;
  Id pointer;
};
struct OpInBoundsPtrAccessChain {
  Id id_result_type;
  Id id_result;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpDecorate {
  Id target;
  spv::Decoration decoration;
};
struct OpMemberDecorate {
  Id structure_type;
  uint32_t member;
  spv::Decoration decoration;
};
struct OpDecorationGroup {
  Id id_result;
};
struct OpGroupDecorate {
  Id decoration_group;
  std::vector<Id> targets;
};
struct OpGroupMemberDecorate {
  Id decoration_group;
  std::vector<PairIdRefLiteralInteger> targets;
};
struct OpVectorExtractDynamic {
  Id id_result_type;
  Id id_result;
  Id vector;
  Id index;
};
struct OpVectorInsertDynamic {
  Id id_result_type;
  Id id_result;
  Id vector;
  Id component;
  Id index;
};
struct OpVectorShuffle {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  std::vector<uint32_t> components;
};
struct OpCompositeConstruct {
  Id id_result_type;
  Id id_result;
  std::vector<Id> constituents;
};
struct OpCompositeExtract {
  Id id_result_type;
  Id id_result;
  Id composite;
  std::vector<uint32_t> indexes;
};
struct OpCompositeInsert {
  Id id_result_type;
  Id id_result;
  Id object;
  Id composite;
  std::vector<uint32_t> indexes;
};
struct OpCopyObject {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpTranspose {
  Id id_result_type;
  Id id_result;
  Id matrix;
};
struct OpSampledImage {
  Id id_result_type;
  Id id_result;
  Id image;
  Id sampler;
};
struct OpImageSampleImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSampleExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSampleDrefImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSampleDrefExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSampleProjImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSampleProjExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSampleProjDrefImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSampleProjDrefExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  spv::ImageOperandsMask image_operands;
};
struct OpImageFetch {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageGather {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id component;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageDrefGather {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageRead {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageWrite {
  Id image;
  Id coordinate;
  Id texel;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImage {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
};
struct OpImageQueryFormat {
  Id id_result_type;
  Id id_result;
  Id image;
};
struct OpImageQueryOrder {
  Id id_result_type;
  Id id_result;
  Id image;
};
struct OpImageQuerySizeLod {
  Id id_result_type;
  Id id_result;
  Id image;
  Id level_of_detail;
};
struct OpImageQuerySize {
  Id id_result_type;
  Id id_result;
  Id image;
};
struct OpImageQueryLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
};
struct OpImageQueryLevels {
  Id id_result_type;
  Id id_result;
  Id image;
};
struct OpImageQuerySamples {
  Id id_result_type;
  Id id_result;
  Id image;
};
struct OpConvertFToU {
  Id id_result_type;
  Id id_result;
  Id float_value;
};
struct OpConvertFToS {
  Id id_result_type;
  Id id_result;
  Id float_value;
};
struct OpConvertSToF {
  Id id_result_type;
  Id id_result;
  Id signed_value;
};
struct OpConvertUToF {
  Id id_result_type;
  Id id_result;
  Id unsigned_value;
};
struct OpUConvert {
  Id id_result_type;
  Id id_result;
  Id unsigned_value;
};
struct OpSConvert {
  Id id_result_type;
  Id id_result;
  Id signed_value;
};
struct OpFConvert {
  Id id_result_type;
  Id id_result;
  Id float_value;
};
struct OpQuantizeToF16 {
  Id id_result_type;
  Id id_result;
  Id value;
};
struct OpConvertPtrToU {
  Id id_result_type;
  Id id_result;
  Id pointer;
};
struct OpSatConvertSToU {
  Id id_result_type;
  Id id_result;
  Id signed_value;
};
struct OpSatConvertUToS {
  Id id_result_type;
  Id id_result;
  Id unsigned_value;
};
struct OpConvertUToPtr {
  Id id_result_type;
  Id id_result;
  Id integer_value;
};
struct OpPtrCastToGeneric {
  Id id_result_type;
  Id id_result;
  Id pointer;
};
struct OpGenericCastToPtr {
  Id id_result_type;
  Id id_result;
  Id pointer;
};
struct OpGenericCastToPtrExplicit {
  Id id_result_type;
  Id id_result;
  Id pointer;
  spv::StorageClass storage;
};
struct OpBitcast {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpSNegate {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpFNegate {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpIAdd {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFAdd {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpISub {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFSub {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpIMul {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFMul {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUDiv {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSDiv {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFDiv {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUMod {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSRem {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSMod {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFRem {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFMod {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpVectorTimesScalar {
  Id id_result_type;
  Id id_result;
  Id vector;
  Id scalar;
};
struct OpMatrixTimesScalar {
  Id id_result_type;
  Id id_result;
  Id matrix;
  Id scalar;
};
struct OpVectorTimesMatrix {
  Id id_result_type;
  Id id_result;
  Id vector;
  Id matrix;
};
struct OpMatrixTimesVector {
  Id id_result_type;
  Id id_result;
  Id matrix;
  Id vector;
};
struct OpMatrixTimesMatrix {
  Id id_result_type;
  Id id_result;
  Id leftmatrix;
  Id rightmatrix;
};
struct OpOuterProduct {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
};
struct OpDot {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
};
struct OpIAddCarry {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpISubBorrow {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUMulExtended {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSMulExtended {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpAny {
  Id id_result_type;
  Id id_result;
  Id vector;
};
struct OpAll {
  Id id_result_type;
  Id id_result;
  Id vector;
};
struct OpIsNan {
  Id id_result_type;
  Id id_result;
  Id x;
};
struct OpIsInf {
  Id id_result_type;
  Id id_result;
  Id x;
};
struct OpIsFinite {
  Id id_result_type;
  Id id_result;
  Id x;
};
struct OpIsNormal {
  Id id_result_type;
  Id id_result;
  Id x;
};
struct OpSignBitSet {
  Id id_result_type;
  Id id_result;
  Id x;
};
struct OpLessOrGreater {
  Id id_result_type;
  Id id_result;
  Id x;
  Id y;
};
struct OpOrdered {
  Id id_result_type;
  Id id_result;
  Id x;
  Id y;
};
struct OpUnordered {
  Id id_result_type;
  Id id_result;
  Id x;
  Id y;
};
struct OpLogicalEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalNotEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalOr {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalAnd {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpLogicalNot {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpSelect {
  Id id_result_type;
  Id id_result;
  Id condition;
  Id object_1;
  Id object_2;
};
struct OpIEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpINotEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUGreaterThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSGreaterThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUGreaterThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSGreaterThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpULessThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSLessThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpULessThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpSLessThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdNotEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordNotEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdLessThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordLessThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdGreaterThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordGreaterThan {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdLessThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordLessThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFOrdGreaterThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpFUnordGreaterThanEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpShiftRightLogical {
  Id id_result_type;
  Id id_result;
  Id base;
  Id shift;
};
struct OpShiftRightArithmetic {
  Id id_result_type;
  Id id_result;
  Id base;
  Id shift;
};
struct OpShiftLeftLogical {
  Id id_result_type;
  Id id_result;
  Id base;
  Id shift;
};
struct OpBitwiseOr {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseXor {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseAnd {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpNot {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpBitFieldInsert {
  Id id_result_type;
  Id id_result;
  Id base;
  Id insert;
  Id offset;
  Id count;
};
struct OpBitFieldSExtract {
  Id id_result_type;
  Id id_result;
  Id base;
  Id offset;
  Id count;
};
struct OpBitFieldUExtract {
  Id id_result_type;
  Id id_result;
  Id base;
  Id offset;
  Id count;
};
struct OpBitReverse {
  Id id_result_type;
  Id id_result;
  Id base;
};
struct OpBitCount {
  Id id_result_type;
  Id id_result;
  Id base;
};
struct OpDPdx {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpDPdy {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpFwidth {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpDPdxFine {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpDPdyFine {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpFwidthFine {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpDPdxCoarse {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpDPdyCoarse {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpFwidthCoarse {
  Id id_result_type;
  Id id_result;
  Id p;
};
struct OpEmitVertex {
};
struct OpEndPrimitive {
};
struct OpEmitStreamVertex {
  Id stream;
};
struct OpEndStreamPrimitive {
  Id stream;
};
struct OpControlBarrier {
  Id execution;
  Id memory;
  Id semantics;
};
struct OpMemoryBarrier {
  Id memory;
  Id semantics;
};
struct OpAtomicLoad {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicStore {
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicExchange {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicCompareExchange {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicCompareExchangeWeak {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicIIncrement {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIDecrement {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIAdd {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicISub {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMin {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMin {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMax {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMax {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicAnd {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicOr {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicXor {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpPhi {
  Id id_result_type;
  Id id_result;
  std::vector<PairIdRefIdRef> variable_parents;
};
struct OpLoopMerge {
  Id merge_block;
  Id continue_target;
  spv::LoopControlMask loop_control;
};
struct OpSelectionMerge {
  Id merge_block;
  spv::SelectionControlMask selection_control;
};
struct OpLabel {
  Id id_result;
};
struct OpBranch {
  Id target_label;
};
struct OpBranchConditional {
  Id condition;
  Id true_label;
  Id false_label;
  std::vector<uint32_t> branch_weights;
};
struct OpSwitch {
  Id selector;
  Id default;
  std::vector<PairLiteralIntegerIdRef> target;
};
struct OpKill {
};
struct OpReturn {
};
struct OpReturnValue {
  Id value;
};
struct OpUnreachable {
};
struct OpLifetimeStart {
  Id pointer;
  uint32_t size;
};
struct OpLifetimeStop {
  Id pointer;
  uint32_t size;
};
struct OpGroupAsyncCopy {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id destination;
  Id source;
  Id num_elements;
  Id stride;
  Id event;
};
struct OpGroupWaitEvents {
  Id execution;
  Id num_events;
  Id events_list;
};
struct OpGroupAll {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id predicate;
};
struct OpGroupAny {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id predicate;
};
struct OpGroupBroadcast {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id localid;
};
struct OpGroupIAdd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFAdd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupUMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupSMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupUMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupSMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpReadPipe {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipe {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedReadPipe {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedWritePipe {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveReadPipePackets {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveWritePipePackets {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpCommitReadPipe {
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpCommitWritePipe {
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpIsValidReserveId {
  Id id_result_type;
  Id id_result;
  Id reserve_id;
};
struct OpGetNumPipePackets {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGetMaxPipePackets {
  Id id_result_type;
  Id id_result;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveReadPipePackets {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveWritePipePackets {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupCommitReadPipe {
  Id execution;
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupCommitWritePipe {
  Id execution;
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpEnqueueMarker {
  Id id_result_type;
  Id id_result;
  Id queue;
  Id num_events;
  Id wait_events;
  Id ret_event;
};
struct OpEnqueueKernel {
  Id id_result_type;
  Id id_result;
  Id queue;
  Id flags;
  Id nd_range;
  Id num_events;
  Id wait_events;
  Id ret_event;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
  std::vector<Id> local_size;
};
struct OpGetKernelNDrangeSubGroupCount {
  Id id_result_type;
  Id id_result;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelNDrangeMaxSubGroupSize {
  Id id_result_type;
  Id id_result;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelWorkGroupSize {
  Id id_result_type;
  Id id_result;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelPreferredWorkGroupSizeMultiple {
  Id id_result_type;
  Id id_result;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpRetainEvent {
  Id event;
};
struct OpReleaseEvent {
  Id event;
};
struct OpCreateUserEvent {
  Id id_result_type;
  Id id_result;
};
struct OpIsValidEvent {
  Id id_result_type;
  Id id_result;
  Id event;
};
struct OpSetUserEventStatus {
  Id event;
  Id status;
};
struct OpCaptureEventProfilingInfo {
  Id event;
  Id profiling_info;
  Id value;
};
struct OpGetDefaultQueue {
  Id id_result_type;
  Id id_result;
};
struct OpBuildNDRange {
  Id id_result_type;
  Id id_result;
  Id globalworksize;
  Id localworksize;
  Id globalworkoffset;
};
struct OpImageSparseSampleImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseSampleExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSparseSampleDrefImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseSampleDrefExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSparseSampleProjImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseSampleProjExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSparseSampleProjDrefImplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseSampleProjDrefExplicitLod {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  spv::ImageOperandsMask image_operands;
};
struct OpImageSparseFetch {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseGather {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id component;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseDrefGather {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id d_ref;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpImageSparseTexelsResident {
  Id id_result_type;
  Id id_result;
  Id resident_code;
};
struct OpNoLine {
};
struct OpAtomicFlagTestAndSet {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicFlagClear {
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpImageSparseRead {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpSizeOf {
  Id id_result_type;
  Id id_result;
  Id pointer;
};
struct OpTypePipeStorage {
  Id id_result;
};
struct OpConstantPipeStorage {
  Id id_result_type;
  Id id_result;
  uint32_t packet_size;
  uint32_t packet_alignment;
  uint32_t capacity;
};
struct OpCreatePipeFromPipeStorage {
  Id id_result_type;
  Id id_result;
  Id pipe_storage;
};
struct OpGetKernelLocalSizeForSubgroupCount {
  Id id_result_type;
  Id id_result;
  Id subgroup_count;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelMaxNumSubgroups {
  Id id_result_type;
  Id id_result;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpTypeNamedBarrier {
  Id id_result;
};
struct OpNamedBarrierInitialize {
  Id id_result_type;
  Id id_result;
  Id subgroup_count;
};
struct OpMemoryNamedBarrier {
  Id named_barrier;
  Id memory;
  Id semantics;
};
struct OpModuleProcessed {
  uint32_t process;
};
struct OpExecutionModeId {
  Id entry_point;
  spv::ExecutionMode mode;
};
struct OpDecorateId {
  Id target;
  spv::Decoration decoration;
};
struct OpGroupNonUniformElect {
  Id id_result_type;
  Id id_result;
  Id execution;
};
struct OpGroupNonUniformAll {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAny {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAllEqual {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBroadcast {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformBroadcastFirst {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallot {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformInverseBallot {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotBitExtract {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformBallotBitCount {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
};
struct OpGroupNonUniformBallotFindLSB {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotFindMSB {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
};
struct OpGroupNonUniformShuffle {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformShuffleXor {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id mask;
};
struct OpGroupNonUniformShuffleUp {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformShuffleDown {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformIAdd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformFAdd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformIMul {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformFMul {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformSMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformUMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformFMin {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformSMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformUMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformFMax {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformBitwiseAnd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformBitwiseOr {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformBitwiseXor {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformLogicalAnd {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformLogicalOr {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformLogicalXor {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id value;
  std::optional<Id> clustersize;
};
struct OpGroupNonUniformQuadBroadcast {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformQuadSwap {
  Id id_result_type;
  Id id_result;
  Id execution;
  Id value;
  Id direction;
};
struct OpCopyLogical {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpPtrEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpPtrNotEqual {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpPtrDiff {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpTerminateInvocation {
};
struct OpSubgroupBallotKHR {
  Id id_result_type;
  Id id_result;
  Id predicate;
};
struct OpSubgroupFirstInvocationKHR {
  Id id_result_type;
  Id id_result;
  Id value;
};
struct OpSubgroupAllKHR {
  Id id_result_type;
  Id id_result;
  Id predicate;
};
struct OpSubgroupAnyKHR {
  Id id_result_type;
  Id id_result;
  Id predicate;
};
struct OpSubgroupAllEqualKHR {
  Id id_result_type;
  Id id_result;
  Id predicate;
};
struct OpSubgroupReadInvocationKHR {
  Id id_result_type;
  Id id_result;
  Id value;
  Id index;
};
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
  Id id_result_type;
  Id id_result;
  Id accel;
};
struct OpIgnoreIntersectionKHR {
};
struct OpTerminateRayKHR {
};
struct OpSDotKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpUDotKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpSUDotKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpSDotAccSatKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  Id accumulator;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpUDotAccSatKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  Id accumulator;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpSUDotAccSatKHR {
  Id id_result_type;
  Id id_result;
  Id vector_1;
  Id vector_2;
  Id accumulator;
  std::optional<spv::PackedVectorFormat> packed_vector_format;
};
struct OpTypeRayQueryKHR {
  Id id_result;
};
struct OpRayQueryInitializeKHR {
  Id rayquery;
  Id accel;
  Id rayflags;
  Id cullmask;
  Id rayorigin;
  Id raytmin;
  Id raydirection;
  Id raytmax;
};
struct OpRayQueryTerminateKHR {
  Id rayquery;
};
struct OpRayQueryGenerateIntersectionKHR {
  Id rayquery;
  Id hitt;
};
struct OpRayQueryConfirmIntersectionKHR {
  Id rayquery;
};
struct OpRayQueryProceedKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetIntersectionTypeKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpGroupIAddNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFAddNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFMinNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupUMinNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupSMinNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupFMaxNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupUMaxNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpGroupSMaxNonUniformAMD {
  Id id_result_type;
  Id id_result;
  Id execution;
  spv::GroupOperation operation;
  Id x;
};
struct OpFragmentMaskFetchAMD {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
};
struct OpFragmentFetchAMD {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  Id fragment_index;
};
struct OpReadClockKHR {
  Id id_result_type;
  Id id_result;
  Id scope;
};
struct OpImageSampleFootprintNV {
  Id id_result_type;
  Id id_result;
  Id sampled_image;
  Id coordinate;
  Id granularity;
  Id coarse;
  std::optional<spv::ImageOperandsMask> image_operands;
};
struct OpGroupNonUniformPartitionNV {
  Id id_result_type;
  Id id_result;
  Id value;
};
struct OpWritePackedPrimitiveIndices4x8NV {
  Id index_offset;
  Id packed_indices;
};
struct OpReportIntersectionNV {
  Id id_result_type;
  Id id_result;
  Id hit;
  Id hitkind;
};
struct OpReportIntersectionKHR {
  Id id_result_type;
  Id id_result;
  Id hit;
  Id hitkind;
};
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
  Id payloadid;
};
struct OpTraceMotionNV {
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
  Id time;
  Id payloadid;
};
struct OpTraceRayMotionNV {
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
  Id time;
  Id payload;
};
struct OpTypeAccelerationStructureNV {
  Id id_result;
};
struct OpTypeAccelerationStructureKHR {
  Id id_result;
};
struct OpExecuteCallableNV {
  Id sbt_index;
  Id callable_dataid;
};
struct OpTypeCooperativeMatrixNV {
  Id id_result;
  Id component_type;
  Id execution;
  Id rows;
  Id columns;
};
struct OpCooperativeMatrixLoadNV {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id stride;
  Id column_major;
  std::optional<spv::MemoryAccessMask> memory_access;
};
struct OpCooperativeMatrixStoreNV {
  Id pointer;
  Id object;
  Id stride;
  Id column_major;
  std::optional<spv::MemoryAccessMask> memory_access;
};
struct OpCooperativeMatrixMulAddNV {
  Id id_result_type;
  Id id_result;
  Id a;
  Id b;
  Id c;
};
struct OpCooperativeMatrixLengthNV {
  Id id_result_type;
  Id id_result;
  Id type;
};
struct OpBeginInvocationInterlockEXT {
};
struct OpEndInvocationInterlockEXT {
};
struct OpDemoteToHelperInvocationEXT {
};
struct OpIsHelperInvocationEXT {
  Id id_result_type;
  Id id_result;
};
struct OpSubgroupShuffleINTEL {
  Id id_result_type;
  Id id_result;
  Id data;
  Id invocationid;
};
struct OpSubgroupShuffleDownINTEL {
  Id id_result_type;
  Id id_result;
  Id current;
  Id next;
  Id delta;
};
struct OpSubgroupShuffleUpINTEL {
  Id id_result_type;
  Id id_result;
  Id previous;
  Id current;
  Id delta;
};
struct OpSubgroupShuffleXorINTEL {
  Id id_result_type;
  Id id_result;
  Id data;
  Id value;
};
struct OpSubgroupBlockReadINTEL {
  Id id_result_type;
  Id id_result;
  Id ptr;
};
struct OpSubgroupBlockWriteINTEL {
  Id ptr;
  Id data;
};
struct OpSubgroupImageBlockReadINTEL {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
};
struct OpSubgroupImageBlockWriteINTEL {
  Id image;
  Id coordinate;
  Id data;
};
struct OpSubgroupImageMediaBlockReadINTEL {
  Id id_result_type;
  Id id_result;
  Id image;
  Id coordinate;
  Id width;
  Id height;
};
struct OpSubgroupImageMediaBlockWriteINTEL {
  Id image;
  Id coordinate;
  Id width;
  Id height;
  Id data;
};
struct OpUCountLeadingZerosINTEL {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpUCountTrailingZerosINTEL {
  Id id_result_type;
  Id id_result;
  Id operand;
};
struct OpAbsISubINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpAbsUSubINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpIAddSatINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUAddSatINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpIAverageINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUAverageINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpIAverageRoundedINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUAverageRoundedINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpISubSatINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUSubSatINTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpIMul32x16INTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpUMul32x16INTEL {
  Id id_result_type;
  Id id_result;
  Id operand_1;
  Id operand_2;
};
struct OpAtomicFMinEXT {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicFMaxEXT {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAssumeTrueKHR {
  Id condition;
};
struct OpExpectKHR {
  Id id_result_type;
  Id id_result;
  Id value;
  Id expectedvalue;
};
struct OpDecorateString {
  Id target;
  spv::Decoration decoration;
};
struct OpDecorateStringGOOGLE {
  Id target;
  spv::Decoration decoration;
};
struct OpMemberDecorateString {
  Id struct_type;
  uint32_t member;
  spv::Decoration decoration;
};
struct OpMemberDecorateStringGOOGLE {
  Id struct_type;
  uint32_t member;
  spv::Decoration decoration;
};
struct OpLoopControlINTEL {
  std::vector<uint32_t> loop_control_parameters;
};
struct OpReadPipeBlockingINTEL {
  Id id_result_type;
  Id id_result;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipeBlockingINTEL {
  Id id_result_type;
  Id id_result;
  Id packet_size;
  Id packet_alignment;
};
struct OpFPGARegINTEL {
  Id id_result_type;
  Id id_result;
  Id result;
  Id input;
};
struct OpRayQueryGetRayTMinKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetRayFlagsKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetIntersectionTKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceCustomIndexKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceIdKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionGeometryIndexKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionPrimitiveIndexKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionBarycentricsKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionFrontFaceKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionCandidateAABBOpaqueKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetIntersectionObjectRayDirectionKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionObjectRayOriginKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetWorldRayDirectionKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetWorldRayOriginKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
};
struct OpRayQueryGetIntersectionObjectToWorldKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpRayQueryGetIntersectionWorldToObjectKHR {
  Id id_result_type;
  Id id_result;
  Id rayquery;
  Id intersection;
};
struct OpAtomicFAddEXT {
  Id id_result_type;
  Id id_result;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpTypeBufferSurfaceINTEL {
  Id id_result;
  spv::AccessQualifier accessqualifier;
};
struct OpTypeStructContinuedINTEL {
  std::vector<Id> member_types;
};
struct OpConstantCompositeContinuedINTEL {
  std::vector<Id> constituents;
};
struct OpSpecConstantCompositeContinuedINTEL {
  std::vector<Id> constituents;
};
// ------ operand struct definition ends ------
} // namespace tinyspv
