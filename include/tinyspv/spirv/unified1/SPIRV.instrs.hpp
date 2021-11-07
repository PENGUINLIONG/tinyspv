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
// Miscellaneous Instructions
struct OpNop {
};
struct OpUndef {
  Id result_type;
  Id result_id;
};
struct OpSizeOf {
  Id result_type;
  Id result_id;
  Id pointer;
};
// Debug Instructions
struct OpSourceContinued {
  Literal continued_source;
};
struct OpSource {
  SourceLanguage source_language;
  uint32_t version;
  std::optional<Id> file;
  std::optional<Literal> source;
};
struct OpSourceExtension {
  Literal extension;
};
struct OpName {
  Id target;
  std::string name;
};
struct OpMemberName {
  Id type;
  uint32_t member;
  std::string name;
};
struct OpString {
  Id result_id;
  std::string string;
};
struct OpLine {
  Id file;
  uint32_t line;
  uint32_t column;
};
struct OpNoLine {
};
struct OpModuleProcessed {
  Literal process;
};
// Annotation Instructions
struct OpDecorate {
  Id target;
  Decoration decoration;
  LiteralList see_decoration;
};
struct OpMemberDecorate {
  Id structure_type;
  uint32_t member;
  Decoration decoration;
  LiteralList see_decoration;
};
struct OpDecorationGroup {
  Id result_id;
};
struct OpGroupDecorate {
  Id decoration_group;
  std::vector<Id> targets;
};
struct OpGroupMemberDecorate {
  Id decoration_group;
  std::vector<Id> targets;
  LiteralList targets2;
};
struct OpDecorateId {
  Id target;
  Decoration decoration;
  std::vector<Id> see_decoration;
};
struct OpDecorateString {
  Id target;
  Decoration decoration;
  uint32_t see_decoration;
  LiteralList see_decoration2;
};
typedef OpDecorateString OpDecorateStringGOOGLE;
struct OpMemberDecorateString {
  Id struct_type;
  uint32_t member;
  Decoration decoration;
  uint32_t see_decoration;
  LiteralList see_decoration2;
};
typedef OpMemberDecorateString OpMemberDecorateStringGOOGLE;
// Extension Instructions
struct OpExtension {
  std::string name;
};
struct OpExtInstImport {
  Id result_id;
  std::string name;
};
struct OpExtInst {
  Id result_type;
  Id result_id;
  Id set;
  uint32_t instruction;
  std::vector<Id> operand;
};
// Mode-Setting Instructions
struct OpMemoryModel {
  AddressingModel addressing_model;
  MemoryModel memory_model;
};
struct OpEntryPoint {
  ExecutionModel execution_model;
  Id entry_point;
  std::string name;
  std::vector<Id> interface;
};
struct OpExecutionMode {
  Id entry_point;
  ExecutionMode mode;
  LiteralList see_execution_mode;
};
struct OpCapability {
  Capability capability;
};
struct OpExecutionModeId {
  Id entry_point;
  ExecutionMode mode;
  std::vector<Id> see_execution_mode;
};
// Type-Declaration Instructions
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
// Constant-Creation Instructions
struct OpConstantTrue {
  Id result_type;
  Id result_id;
};
struct OpConstantFalse {
  Id result_type;
  Id result_id;
};
struct OpConstant {
  Id result_type;
  Id result_id;
  Literal value;
};
struct OpConstantComposite {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpConstantSampler {
  Id result_type;
  Id result_id;
  SamplerAddressingMode sampler_addressing_mode;
  uint32_t param;
  SamplerFilterMode sampler_filter_mode;
};
struct OpConstantNull {
  Id result_type;
  Id result_id;
};
struct OpSpecConstantTrue {
  Id result_type;
  Id result_id;
};
struct OpSpecConstantFalse {
  Id result_type;
  Id result_id;
};
struct OpSpecConstant {
  Id result_type;
  Id result_id;
  Literal value;
};
struct OpSpecConstantComposite {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpSpecConstantOp {
  Id result_type;
  Id result_id;
  uint32_t opcode;
  std::vector<Id> operands;
};
// Memory Instructions
struct OpVariable {
  Id result_type;
  Id result_id;
  StorageClass storage_class;
  std::optional<Id> initializer;
};
struct OpImageTexelPointer {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  Id sample;
};
struct OpLoad {
  Id result_type;
  Id result_id;
  Id pointer;
  std::optional<MemoryOperands> memory_operands;
};
struct OpStore {
  Id pointer;
  Id object;
  std::optional<MemoryOperands> memory_operands;
};
struct OpCopyMemory {
  Id target;
  Id source;
  std::optional<MemoryOperands> memory_operands;
  std::optional<MemoryOperands> memory_operands2;
};
struct OpCopyMemorySized {
  Id target;
  Id source;
  Id size;
  std::optional<MemoryOperands> memory_operands;
  std::optional<MemoryOperands> memory_operands2;
};
struct OpAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  std::vector<Id> indexes;
};
struct OpInBoundsAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  std::vector<Id> indexes;
};
struct OpPtrAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpArrayLength {
  Id result_type;
  Id result_id;
  Id structure;
  uint32_t array_member;
};
struct OpGenericPtrMemSemantics {
  Id result_type;
  Id result_id;
  Id pointer;
};
struct OpInBoundsPtrAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpPtrEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpPtrNotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpPtrDiff {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
// Function Instructions
struct OpFunction {
  Id result_type;
  Id result_id;
  FunctionControl function_control;
  Id function_type;
};
struct OpFunctionParameter {
  Id result_type;
  Id result_id;
};
struct OpFunctionEnd {
};
struct OpFunctionCall {
  Id result_type;
  Id result_id;
  Id function;
  std::vector<Id> argument;
};
// Image Instructions
struct OpSampledImage {
  Id result_type;
  Id result_id;
  Id image;
  Id sampler;
};
struct OpImageSampleImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSampleExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSampleDrefImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSampleDrefExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSampleProjImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSampleProjExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSampleProjDrefImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSampleProjDrefExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageFetch {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageGather {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id component;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageDrefGather {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageRead {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageWrite {
  Id image;
  Id coordinate;
  Id texel;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImage {
  Id result_type;
  Id result_id;
  Id sampled_image;
};
struct OpImageQueryFormat {
  Id result_type;
  Id result_id;
  Id image;
};
struct OpImageQueryOrder {
  Id result_type;
  Id result_id;
  Id image;
};
struct OpImageQuerySizeLod {
  Id result_type;
  Id result_id;
  Id image;
  Id level_of_detail;
};
struct OpImageQuerySize {
  Id result_type;
  Id result_id;
  Id image;
};
struct OpImageQueryLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
};
struct OpImageQueryLevels {
  Id result_type;
  Id result_id;
  Id image;
};
struct OpImageQuerySamples {
  Id result_type;
  Id result_id;
  Id image;
};
struct OpImageSparseSampleImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseSampleExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSparseSampleDrefImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseSampleDrefExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSparseSampleProjImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseSampleProjExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSparseSampleProjDrefImplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseSampleProjDrefExplicitLod {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  ImageOperands image_operands;
  Id id;
  std::vector<Id> id2;
};
struct OpImageSparseFetch {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseGather {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id component;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseDrefGather {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id dref;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSparseTexelsResident {
  Id result_type;
  Id result_id;
  Id resident_code;
};
struct OpImageSparseRead {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
struct OpImageSampleFootprintNV {
  Id result_type;
  Id result_id;
  Id sampled_image;
  Id coordinate;
  Id granularity;
  Id coarse;
  std::optional<ImageOperands> image_operands;
  std::vector<Id> id;
};
// Conversion Instructions
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
// Composite Instructions
struct OpVectorExtractDynamic {
  Id result_type;
  Id result_id;
  Id vector;
  Id index;
};
struct OpVectorInsertDynamic {
  Id result_type;
  Id result_id;
  Id vector;
  Id component;
  Id index;
};
struct OpVectorShuffle {
  Id result_type;
  Id result_id;
  Id vector_1;
  Id vector_2;
  LiteralList components;
};
struct OpCompositeConstruct {
  Id result_type;
  Id result_id;
  std::vector<Id> constituents;
};
struct OpCompositeExtract {
  Id result_type;
  Id result_id;
  Id composite;
  LiteralList indexes;
};
struct OpCompositeInsert {
  Id result_type;
  Id result_id;
  Id object;
  Id composite;
  LiteralList indexes;
};
struct OpCopyObject {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpTranspose {
  Id result_type;
  Id result_id;
  Id matrix;
};
struct OpCopyLogical {
  Id result_type;
  Id result_id;
  Id operand;
};
// Arithmetic Instructions
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
// Bit Instructions
struct OpShiftRightLogical {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpShiftRightArithmetic {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpShiftLeftLogical {
  Id result_type;
  Id result_id;
  Id base;
  Id shift;
};
struct OpBitwiseOr {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseXor {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpBitwiseAnd {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpNot {
  Id result_type;
  Id result_id;
  Id operand;
};
struct OpBitFieldInsert {
  Id result_type;
  Id result_id;
  Id base;
  Id insert;
  Id offset;
  Id count;
};
struct OpBitFieldSExtract {
  Id result_type;
  Id result_id;
  Id base;
  Id offset;
  Id count;
};
struct OpBitFieldUExtract {
  Id result_type;
  Id result_id;
  Id base;
  Id offset;
  Id count;
};
struct OpBitReverse {
  Id result_type;
  Id result_id;
  Id base;
};
struct OpBitCount {
  Id result_type;
  Id result_id;
  Id base;
};
// Relational and Logical Instructions
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
// Derivative Instructions
struct OpDPdx {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdy {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidth {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdxFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdyFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidthFine {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdxCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpDPdyCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
struct OpFwidthCoarse {
  Id result_type;
  Id result_id;
  Id p;
};
// Control-Flow Instructions
struct OpPhi {
  Id result_type;
  Id result_id;
  std::vector<Id> variable;
};
struct OpLoopMerge {
  Id merge_block;
  Id continue_target;
  LoopControl loop_control;
  LiteralList loop_control_parameters;
};
struct OpSelectionMerge {
  Id merge_block;
  SelectionControl selection_control;
};
struct OpLabel {
  Id result_id;
};
struct OpBranch {
  Id target_label;
};
struct OpBranchConditional {
  Id condition;
  Id true_label;
  Id false_label;
  LiteralList branch_weights;
};
struct OpSwitch {
  Id selector;
  Id default;
  LiteralList target;
  std::vector<Id> target2;
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
struct OpTerminateInvocation {
};
// Atomic Instructions
struct OpAtomicLoad {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicCompareExchange {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicCompareExchangeWeak {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicIIncrement {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIDecrement {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIAdd {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicISub {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMin {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMin {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMax {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMax {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicAnd {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicOr {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicXor {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicFlagTestAndSet {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicFlagClear {
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicFAddEXT {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
// Primitive Instructions
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
// Barrier Instructions
struct OpControlBarrier {
  Id execution;
  Id memory;
  Id semantics;
};
struct OpMemoryBarrier {
  Id memory;
  Id semantics;
};
struct OpNamedBarrierInitialize {
  Id result_type;
  Id result_id;
  Id subgroup_count;
};
struct OpMemoryNamedBarrier {
  Id named_barrier;
  Id memory;
  Id semantics;
};
// Group and Subgroup Instructions
struct OpGroupAsyncCopy {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupAny {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id local_id;
};
struct OpGroupIAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpSubgroupBallotKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupFirstInvocationKHR {
  Id result_type;
  Id result_id;
  Id value;
};
struct OpSubgroupAllKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupAnyKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupAllEqualKHR {
  Id result_type;
  Id result_id;
  Id predicate;
};
struct OpSubgroupReadInvocationKHR {
  Id result_type;
  Id result_id;
  Id value;
  Id index;
};
struct OpGroupIAddNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFAddNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMinNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupFMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupUMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpGroupSMaxNonUniformAMD {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id x;
};
struct OpSubgroupShuffleINTEL {
  Id result_type;
  Id result_id;
  Id data;
  Id invocation_id;
};
struct OpSubgroupShuffleDownINTEL {
  Id result_type;
  Id result_id;
  Id current;
  Id next;
  Id delta;
};
struct OpSubgroupShuffleUpINTEL {
  Id result_type;
  Id result_id;
  Id previous;
  Id current;
  Id delta;
};
struct OpSubgroupShuffleXorINTEL {
  Id result_type;
  Id result_id;
  Id data;
  Id value;
};
struct OpSubgroupBlockReadINTEL {
  Id result_type;
  Id result_id;
  Id ptr;
};
struct OpSubgroupBlockWriteINTEL {
  Id ptr;
  Id data;
};
struct OpSubgroupImageBlockReadINTEL {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
};
struct OpSubgroupImageBlockWriteINTEL {
  Id image;
  Id coordinate;
  Id data;
};
struct OpSubgroupImageMediaBlockReadINTEL {
  Id result_type;
  Id result_id;
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
// Device-Side Enqueue Instructions
struct OpEnqueueMarker {
  Id result_type;
  Id result_id;
  Id queue;
  Id num_events;
  Id wait_events;
  Id ret_event;
};
struct OpEnqueueKernel {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelNDrangeMaxSubGroupSize {
  Id result_type;
  Id result_id;
  Id nd_range;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelWorkGroupSize {
  Id result_type;
  Id result_id;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelPreferredWorkGroupSizeMultiple {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
};
struct OpIsValidEvent {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
};
struct OpBuildNDRange {
  Id result_type;
  Id result_id;
  Id global_work_size;
  Id local_work_size;
  Id global_work_offset;
};
struct OpGetKernelLocalSizeForSubgroupCount {
  Id result_type;
  Id result_id;
  Id subgroup_count;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
struct OpGetKernelMaxNumSubgroups {
  Id result_type;
  Id result_id;
  Id invoke;
  Id param;
  Id param_size;
  Id param_align;
};
// Pipe Instructions
struct OpReadPipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedReadPipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedWritePipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveReadPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveWritePipePackets {
  Id result_type;
  Id result_id;
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
  Id result_type;
  Id result_id;
  Id reserve_id;
};
struct OpGetNumPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGetMaxPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveReadPipePackets {
  Id result_type;
  Id result_id;
  Id execution;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveWritePipePackets {
  Id result_type;
  Id result_id;
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
struct OpConstantPipeStorage {
  Id result_type;
  Id result_id;
  uint32_t packet_size;
  uint32_t packet_alignment;
  uint32_t capacity;
};
struct OpCreatePipeFromPipeStorage {
  Id result_type;
  Id result_id;
  Id pipe_storage;
};
struct OpReadPipeBlockingINTEL {
  Id result_type;
  Id result_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipeBlockingINTEL {
  Id result_type;
  Id result_id;
  Id packet_size;
  Id packet_alignment;
};
// Non-Uniform Instructions
struct OpGroupNonUniformElect {
  Id result_type;
  Id result_id;
  Id execution;
};
struct OpGroupNonUniformAll {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAny {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformAllEqual {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformBroadcastFirst {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallot {
  Id result_type;
  Id result_id;
  Id execution;
  Id predicate;
};
struct OpGroupNonUniformInverseBallot {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotBitExtract {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformBallotBitCount {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
};
struct OpGroupNonUniformBallotFindLSB {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformBallotFindMSB {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
};
struct OpGroupNonUniformShuffle {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id id;
};
struct OpGroupNonUniformShuffleXor {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id mask;
};
struct OpGroupNonUniformShuffleUp {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformShuffleDown {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id delta;
};
struct OpGroupNonUniformIAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFAdd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformIMul {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMul {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformSMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformUMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMin {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformSMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformUMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformFMax {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseAnd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseOr {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformBitwiseXor {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalAnd {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalOr {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformLogicalXor {
  Id result_type;
  Id result_id;
  Id execution;
  GroupOperation operation;
  Id value;
  std::optional<Id> cluster_size;
};
struct OpGroupNonUniformQuadBroadcast {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id index;
};
struct OpGroupNonUniformQuadSwap {
  Id result_type;
  Id result_id;
  Id execution;
  Id value;
  Id direction;
};
struct OpGroupNonUniformPartitionNV {
  Id result_type;
  Id result_id;
  Id value;
};
// Reserved Instructions
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
