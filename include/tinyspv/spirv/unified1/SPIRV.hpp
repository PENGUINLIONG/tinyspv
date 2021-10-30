// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ c43e82bfb70d813a08d7d10bb8a7a702a0798101
#pragma once

namespace tinyspv {

enum MagicNumber {
  MagicNumber = 0x07230203,
}; // enum MagicNumber

enum SourceLanguage {
  SourceLanguageUnknown = 0,
  SourceLanguageESSL = 1,
  SourceLanguageGLSL = 2,
  SourceLanguageOpenCL_C = 3,
  SourceLanguageOpenCL_CPP = 4,
  SourceLanguageHLSL = 5,
}; // enum SourceLanguage

enum ExecutionModel {
  ExecutionModelVertex = 0,
  ExecutionModelTessellationControl = 1,
  ExecutionModelTessellationEvaluation = 2,
  ExecutionModelGeometry = 3,
  ExecutionModelFragment = 4,
  ExecutionModelGLCompute = 5,
  ExecutionModelKernel = 6,
  ExecutionModelTaskNV = 5267, // Reserved.
  ExecutionModelMeshNV = 5268, // Reserved.
  ExecutionModelRayGenerationNV = 5313, // Reserved.
  ExecutionModelRayGenerationKHR = 5313, // Reserved.
  ExecutionModelIntersectionNV = 5314, // Reserved.
  ExecutionModelIntersectionKHR = 5314, // Reserved.
  ExecutionModelAnyHitNV = 5315, // Reserved.
  ExecutionModelAnyHitKHR = 5315, // Reserved.
  ExecutionModelClosestHitNV = 5316, // Reserved.
  ExecutionModelClosestHitKHR = 5316, // Reserved.
  ExecutionModelMissNV = 5317, // Reserved.
  ExecutionModelMissKHR = 5317, // Reserved.
  ExecutionModelCallableNV = 5318, // Reserved.
  ExecutionModelCallableKHR = 5318, // Reserved.
}; // enum ExecutionModel

enum AddressingModel {
  AddressingModelLogical = 0,
  AddressingModelPhysical32 = 1,
  AddressingModelPhysical64 = 2,
  AddressingModelPhysicalStorageBuffer64 = 5348,
  AddressingModelPhysicalStorageBuffer64EXT = 5348,
}; // enum AddressingModel

enum MemoryModel {
  MemoryModelSimple = 0,
  MemoryModelGLSL450 = 1,
  MemoryModelOpenCL = 2,
  MemoryModelVulkan = 3,
  MemoryModelVulkanKHR = 3,
}; // enum MemoryModel

enum ExecutionMode {
  ExecutionModeInvocations = 0,
  ExecutionModeSpacingEqual = 1,
  ExecutionModeSpacingFractionalEven = 2,
  ExecutionModeSpacingFractionalOdd = 3,
  ExecutionModeVertexOrderCw = 4,
  ExecutionModeVertexOrderCcw = 5,
  ExecutionModePixelCenterInteger = 6,
  ExecutionModeOriginUpperLeft = 7,
  ExecutionModeOriginLowerLeft = 8,
  ExecutionModeEarlyFragmentTests = 9,
  ExecutionModePointMode = 10,
  ExecutionModeXfb = 11,
  ExecutionModeDepthReplacing = 12,
  ExecutionModeDepthGreater = 14,
  ExecutionModeDepthLess = 15,
  ExecutionModeDepthUnchanged = 16,
  ExecutionModeLocalSize = 17,
  ExecutionModeLocalSizeHint = 18,
  ExecutionModeInputPoints = 19,
  ExecutionModeInputLines = 20,
  ExecutionModeInputLinesAdjacency = 21,
  ExecutionModeTriangles = 22,
  ExecutionModeInputTrianglesAdjacency = 23,
  ExecutionModeQuads = 24,
  ExecutionModeIsolines = 25,
  ExecutionModeOutputVertices = 26,
  ExecutionModeOutputPoints = 27,
  ExecutionModeOutputLineStrip = 28,
  ExecutionModeOutputTriangleStrip = 29,
  ExecutionModeVecTypeHint = 30,
  ExecutionModeContractionOff = 31,
  ExecutionModeInitializer = 33,
  ExecutionModeFinalizer = 34,
  ExecutionModeSubgroupSize = 35,
  ExecutionModeSubgroupsPerWorkgroup = 36,
  ExecutionModeSubgroupsPerWorkgroupId = 37,
  ExecutionModeLocalSizeId = 38,
  ExecutionModeLocalSizeHintId = 39,
  ExecutionModePostDepthCoverage = 4446, // Reserved.
  ExecutionModeDenormPreserve = 4459,
  ExecutionModeDenormFlushToZero = 4460,
  ExecutionModeSignedZeroInfNanPreserve = 4461,
  ExecutionModeRoundingModeRTE = 4462,
  ExecutionModeRoundingModeRTZ = 4463,
  ExecutionModeStencilRefReplacingEXT = 5027, // Reserved.
  ExecutionModeOutputLinesNV = 5269, // Reserved.
  ExecutionModeOutputPrimitivesNV = 5270, // Reserved.
  ExecutionModeDerivativeGroupQuadsNV = 5289, // Reserved.
  ExecutionModeDerivativeGroupLinearNV = 5290, // Reserved.
  ExecutionModeOutputTrianglesNV = 5298, // Reserved.
  ExecutionModePixelInterlockOrderedEXT = 5366, // Reserved.
  ExecutionModePixelInterlockUnorderedEXT = 5367, // Reserved.
  ExecutionModeSampleInterlockOrderedEXT = 5368, // Reserved.
  ExecutionModeSampleInterlockUnorderedEXT = 5369, // Reserved.
  ExecutionModeShadingRateInterlockOrderedEXT = 5370, // Reserved.
  ExecutionModeShadingRateInterlockUnorderedEXT = 5371, // Reserved.
  ExecutionModeMaxWorkgroupSizeINTEL = 5893, // Reserved.
  ExecutionModeMaxWorkDimINTEL = 5894, // Reserved.
  ExecutionModeNoGlobalOffsetINTEL = 5895, // Reserved.
  ExecutionModeNumSIMDWorkitemsINTEL = 5896, // Reserved.
}; // enum ExecutionMode

enum StorageClass {
  StorageClassUniformConstant = 0,
  StorageClassInput = 1,
  StorageClassUniform = 2,
  StorageClassOutput = 3,
  StorageClassWorkgroup = 4,
  StorageClassCrossWorkgroup = 5,
  StorageClassPrivate = 6,
  StorageClassFunction = 7,
  StorageClassGeneric = 8,
  StorageClassPushConstant = 9,
  StorageClassAtomicCounter = 10,
  StorageClassImage = 11,
  StorageClassStorageBuffer = 12,
  StorageClassCallableDataNV = 5328, // Reserved.
  StorageClassCallableDataKHR = 5328, // Reserved.
  StorageClassIncomingCallableDataNV = 5329, // Reserved.
  StorageClassIncomingCallableDataKHR = 5329, // Reserved.
  StorageClassRayPayloadNV = 5338, // Reserved.
  StorageClassRayPayloadKHR = 5338, // Reserved.
  StorageClassHitAttributeNV = 5339, // Reserved.
  StorageClassHitAttributeKHR = 5339, // Reserved.
  StorageClassIncomingRayPayloadNV = 5342, // Reserved.
  StorageClassIncomingRayPayloadKHR = 5342, // Reserved.
  StorageClassShaderRecordBufferNV = 5343, // Reserved.
  StorageClassShaderRecordBufferKHR = 5343, // Reserved.
  StorageClassPhysicalStorageBuffer = 5349,
  StorageClassPhysicalStorageBufferEXT = 5349,
  StorageClassCodeSectionINTEL = 5605, // Reserved.
}; // enum StorageClass

enum Dim {
  Dim1D = 0,
  Dim2D = 1,
  Dim3D = 2,
  DimCube = 3,
  DimRect = 4,
  DimBuffer = 5,
  DimSubpassData = 6,
}; // enum Dim

enum SamplerAddressingMode {
  SamplerAddressingModeNone = 0,
  SamplerAddressingModeClampToEdge = 1,
  SamplerAddressingModeClamp = 2,
  SamplerAddressingModeRepeat = 3,
  SamplerAddressingModeRepeatMirrored = 4,
}; // enum SamplerAddressingMode

enum SamplerFilterMode {
  SamplerFilterModeNearest = 0,
  SamplerFilterModeLinear = 1,
}; // enum SamplerFilterMode

enum ImageFormat {
  ImageFormatUnknown = 0,
  ImageFormatRgba32f = 1,
  ImageFormatRgba16f = 2,
  ImageFormatR32f = 3,
  ImageFormatRgba8 = 4,
  ImageFormatRgba8Snorm = 5,
  ImageFormatRg32f = 6,
  ImageFormatRg16f = 7,
  ImageFormatR11fG11fB10f = 8,
  ImageFormatR16f = 9,
  ImageFormatRgba16 = 10,
  ImageFormatRgb10A2 = 11,
  ImageFormatRg16 = 12,
  ImageFormatRg8 = 13,
  ImageFormatR16 = 14,
  ImageFormatR8 = 15,
  ImageFormatRgba16Snorm = 16,
  ImageFormatRg16Snorm = 17,
  ImageFormatRg8Snorm = 18,
  ImageFormatR16Snorm = 19,
  ImageFormatR8Snorm = 20,
  ImageFormatRgba32i = 21,
  ImageFormatRgba16i = 22,
  ImageFormatRgba8i = 23,
  ImageFormatR32i = 24,
  ImageFormatRg32i = 25,
  ImageFormatRg16i = 26,
  ImageFormatRg8i = 27,
  ImageFormatR16i = 28,
  ImageFormatR8i = 29,
  ImageFormatRgba32ui = 30,
  ImageFormatRgba16ui = 31,
  ImageFormatRgba8ui = 32,
  ImageFormatR32ui = 33,
  ImageFormatRgb10a2ui = 34,
  ImageFormatRg32ui = 35,
  ImageFormatRg16ui = 36,
  ImageFormatRg8ui = 37,
  ImageFormatR16ui = 38,
  ImageFormatR8ui = 39,
  ImageFormatR64ui = 40,
  ImageFormatR64i = 41,
}; // enum ImageFormat

enum ImageChannelOrder {
  ImageChannelOrderR = 0,
  ImageChannelOrderA = 1,
  ImageChannelOrderRG = 2,
  ImageChannelOrderRA = 3,
  ImageChannelOrderRGB = 4,
  ImageChannelOrderRGBA = 5,
  ImageChannelOrderBGRA = 6,
  ImageChannelOrderARGB = 7,
  ImageChannelOrderIntensity = 8,
  ImageChannelOrderLuminance = 9,
  ImageChannelOrderRx = 10,
  ImageChannelOrderRGx = 11,
  ImageChannelOrderRGBx = 12,
  ImageChannelOrderDepth = 13,
  ImageChannelOrderDepthStencil = 14,
  ImageChannelOrdersRGB = 15,
  ImageChannelOrdersRGBx = 16,
  ImageChannelOrdersRGBA = 17,
  ImageChannelOrdersBGRA = 18,
  ImageChannelOrderABGR = 19,
}; // enum ImageChannelOrder

enum ImageChannelDataType {
  ImageChannelDataTypeSnormInt8 = 0,
  ImageChannelDataTypeSnormInt16 = 1,
  ImageChannelDataTypeUnormInt8 = 2,
  ImageChannelDataTypeUnormInt16 = 3,
  ImageChannelDataTypeUnormShort565 = 4,
  ImageChannelDataTypeUnormShort555 = 5,
  ImageChannelDataTypeUnormInt101010 = 6,
  ImageChannelDataTypeSignedInt8 = 7,
  ImageChannelDataTypeSignedInt16 = 8,
  ImageChannelDataTypeSignedInt32 = 9,
  ImageChannelDataTypeUnsignedInt8 = 10,
  ImageChannelDataTypeUnsignedInt16 = 11,
  ImageChannelDataTypeUnsignedInt32 = 12,
  ImageChannelDataTypeHalfFloat = 13,
  ImageChannelDataTypeFloat = 14,
  ImageChannelDataTypeUnormInt24 = 15,
  ImageChannelDataTypeUnormInt101010_2 = 16,
}; // enum ImageChannelDataType

enum ImageOperands {
  ImageOperandsNone = 0x0,
  ImageOperandsBias = 0x1,
  ImageOperandsLod = 0x2,
  ImageOperandsGrad = 0x4,
  ImageOperandsConstOffset = 0x8,
  ImageOperandsOffset = 0x10,
  ImageOperandsConstOffsets = 0x20,
  ImageOperandsSample = 0x40,
  ImageOperandsMinLod = 0x80,
  ImageOperandsMakeTexelAvailable = 0x100,
  ImageOperandsMakeTexelAvailableKHR = 0x100,
  ImageOperandsMakeTexelVisible = 0x200,
  ImageOperandsMakeTexelVisibleKHR = 0x200,
  ImageOperandsNonPrivateTexel = 0x400,
  ImageOperandsNonPrivateTexelKHR = 0x400,
  ImageOperandsVolatileTexel = 0x800,
  ImageOperandsVolatileTexelKHR = 0x800,
  ImageOperandsSignExtend = 0x1000,
  ImageOperandsZeroExtend = 0x2000,
}; // enum ImageOperands

enum FPFastMathMode {
  FPFastMathModeNone = 0x0,
  FPFastMathModeNotNaN = 0x1,
  FPFastMathModeNotInf = 0x2,
  FPFastMathModeNSZ = 0x4,
  FPFastMathModeAllowRecip = 0x8,
  FPFastMathModeFast = 0x10,
}; // enum FPFastMathMode

enum FPRoundingMode {
  FPRoundingModeRTE = 0,
  FPRoundingModeRTZ = 1,
  FPRoundingModeRTP = 2,
  FPRoundingModeRTN = 3,
}; // enum FPRoundingMode

enum LinkageType {
  LinkageTypeExport = 0,
  LinkageTypeImport = 1,
}; // enum LinkageType

enum AccessQualifier {
  AccessQualifierReadOnly = 0,
  AccessQualifierWriteOnly = 1,
  AccessQualifierReadWrite = 2,
}; // enum AccessQualifier

enum FunctionParameterAttribute {
  FunctionParameterAttributeZext = 0,
  FunctionParameterAttributeSext = 1,
  FunctionParameterAttributeByVal = 2,
  FunctionParameterAttributeSret = 3,
  FunctionParameterAttributeNoAlias = 4,
  FunctionParameterAttributeNoCapture = 5,
  FunctionParameterAttributeNoWrite = 6,
  FunctionParameterAttributeNoReadWrite = 7,
}; // enum FunctionParameterAttribute

enum Decoration {
  DecorationRelaxedPrecision = 0,
  DecorationSpecId = 1,
  DecorationBlock = 2,
  DecorationBufferBlock = 3,
  DecorationRowMajor = 4,
  DecorationColMajor = 5,
  DecorationArrayStride = 6,
  DecorationMatrixStride = 7,
  DecorationGLSLShared = 8,
  DecorationGLSLPacked = 9,
  DecorationCPacked = 10,
  DecorationBuiltIn = 11,
  DecorationNoPerspective = 13,
  DecorationFlat = 14,
  DecorationPatch = 15,
  DecorationCentroid = 16,
  DecorationSample = 17,
  DecorationInvariant = 18,
  DecorationRestrict = 19,
  DecorationAliased = 20,
  DecorationVolatile = 21,
  DecorationConstant = 22,
  DecorationCoherent = 23,
  DecorationNonWritable = 24,
  DecorationNonReadable = 25,
  DecorationUniform = 26,
  DecorationUniformId = 27,
  DecorationSaturatedConversion = 28,
  DecorationStream = 29,
  DecorationLocation = 30,
  DecorationComponent = 31,
  DecorationIndex = 32,
  DecorationBinding = 33,
  DecorationDescriptorSet = 34,
  DecorationOffset = 35,
  DecorationXfbBuffer = 36,
  DecorationXfbStride = 37,
  DecorationFuncParamAttr = 38,
  DecorationFPRoundingMode = 39,
  DecorationFPFastMathMode = 40,
  DecorationLinkageAttributes = 41,
  DecorationNoContraction = 42,
  DecorationInputAttachmentIndex = 43,
  DecorationAlignment = 44,
  DecorationMaxByteOffset = 45,
  DecorationAlignmentId = 46,
  DecorationMaxByteOffsetId = 47,
  DecorationNoSignedWrap = 4469,
  DecorationNoUnsignedWrap = 4470,
  DecorationExplicitInterpAMD = 4999, // Reserved.
  DecorationOverrideCoverageNV = 5248, // Reserved.
  DecorationPassthroughNV = 5250, // Reserved.
  DecorationViewportRelativeNV = 5252, // Reserved.
  DecorationSecondaryViewportRelativeNV = 5256, // Reserved.
  DecorationPerPrimitiveNV = 5271, // Reserved.
  DecorationPerViewNV = 5272, // Reserved.
  DecorationPerTaskNV = 5273, // Reserved.
  DecorationPerVertexNV = 5285, // Reserved.
  DecorationNonUniform = 5300,
  DecorationNonUniformEXT = 5300,
  DecorationRestrictPointer = 5355,
  DecorationRestrictPointerEXT = 5355,
  DecorationAliasedPointer = 5356,
  DecorationAliasedPointerEXT = 5356,
  DecorationReferencedIndirectlyINTEL = 5602, // Reserved.
  DecorationCounterBuffer = 5634,
  DecorationHlslCounterBufferGOOGLE = 5634, // Reserved.
  DecorationUserSemantic = 5635,
  DecorationHlslSemanticGOOGLE = 5635, // Reserved.
  DecorationUserTypeGOOGLE = 5636, // Reserved.
  DecorationRegisterINTEL = 5825, // Reserved.
  DecorationMemoryINTEL = 5826, // Reserved.
  DecorationNumbanksINTEL = 5827, // Reserved.
  DecorationBankwidthINTEL = 5828, // Reserved.
  DecorationMaxPrivateCopiesINTEL = 5829, // Reserved.
  DecorationSinglepumpINTEL = 5830, // Reserved.
  DecorationDoublepumpINTEL = 5831, // Reserved.
  DecorationMaxReplicatesINTEL = 5832, // Reserved.
  DecorationSimpleDualPortINTEL = 5833, // Reserved.
  DecorationMergeINTEL = 5834, // Reserved.
  DecorationBankBitsINTEL = 5835, // Reserved.
  DecorationForcePow2DepthINTEL = 5836, // Reserved.
}; // enum Decoration

enum BuiltIn {
  BuiltInPosition = 0,
  BuiltInPointSize = 1,
  BuiltInClipDistance = 3,
  BuiltInCullDistance = 4,
  BuiltInVertexId = 5,
  BuiltInInstanceId = 6,
  BuiltInPrimitiveId = 7,
  BuiltInInvocationId = 8,
  BuiltInLayer = 9,
  BuiltInViewportIndex = 10,
  BuiltInTessLevelOuter = 11,
  BuiltInTessLevelInner = 12,
  BuiltInTessCoord = 13,
  BuiltInPatchVertices = 14,
  BuiltInFragCoord = 15,
  BuiltInPointCoord = 16,
  BuiltInFrontFacing = 17,
  BuiltInSampleId = 18,
  BuiltInSamplePosition = 19,
  BuiltInSampleMask = 20,
  BuiltInFragDepth = 22,
  BuiltInHelperInvocation = 23,
  BuiltInNumWorkgroups = 24,
  BuiltInWorkgroupSize = 25,
  BuiltInWorkgroupId = 26,
  BuiltInLocalInvocationId = 27,
  BuiltInGlobalInvocationId = 28,
  BuiltInLocalInvocationIndex = 29,
  BuiltInWorkDim = 30,
  BuiltInGlobalSize = 31,
  BuiltInEnqueuedWorkgroupSize = 32,
  BuiltInGlobalOffset = 33,
  BuiltInGlobalLinearId = 34,
  BuiltInSubgroupSize = 36,
  BuiltInSubgroupMaxSize = 37,
  BuiltInNumSubgroups = 38,
  BuiltInNumEnqueuedSubgroups = 39,
  BuiltInSubgroupId = 40,
  BuiltInSubgroupLocalInvocationId = 41,
  BuiltInVertexIndex = 42,
  BuiltInInstanceIndex = 43,
  BuiltInSubgroupEqMask = 4416,
  BuiltInSubgroupGeMask = 4417,
  BuiltInSubgroupGtMask = 4418,
  BuiltInSubgroupLeMask = 4419,
  BuiltInSubgroupLtMask = 4420,
  BuiltInSubgroupEqMaskKHR = 4416,
  BuiltInSubgroupGeMaskKHR = 4417,
  BuiltInSubgroupGtMaskKHR = 4418,
  BuiltInSubgroupLeMaskKHR = 4419,
  BuiltInSubgroupLtMaskKHR = 4420,
  BuiltInBaseVertex = 4424,
  BuiltInBaseInstance = 4425,
  BuiltInDrawIndex = 4426,
  BuiltInPrimitiveShadingRateKHR = 4432, // Reserved.
  BuiltInDeviceIndex = 4438,
  BuiltInViewIndex = 4440,
  BuiltInShadingRateKHR = 4444, // Reserved.
  BuiltInBaryCoordNoPerspAMD = 4992, // Reserved.
  BuiltInBaryCoordNoPerspCentroidAMD = 4993, // Reserved.
  BuiltInBaryCoordNoPerspSampleAMD = 4994, // Reserved.
  BuiltInBaryCoordSmoothAMD = 4995, // Reserved.
  BuiltInBaryCoordSmoothCentroidAMD = 4996, // Reserved.
  BuiltInBaryCoordSmoothSampleAMD = 4997, // Reserved.
  BuiltInBaryCoordPullModelAMD = 4998, // Reserved.
  BuiltInFragStencilRefEXT = 5014, // Reserved.
  BuiltInViewportMaskNV = 5253, // Reserved.
  BuiltInSecondaryPositionNV = 5257, // Reserved.
  BuiltInSecondaryViewportMaskNV = 5258, // Reserved.
  BuiltInPositionPerViewNV = 5261, // Reserved.
  BuiltInViewportMaskPerViewNV = 5262, // Reserved.
  BuiltInFullyCoveredEXT = 5264, // Reserved.
  BuiltInTaskCountNV = 5274, // Reserved.
  BuiltInPrimitiveCountNV = 5275, // Reserved.
  BuiltInPrimitiveIndicesNV = 5276, // Reserved.
  BuiltInClipDistancePerViewNV = 5277, // Reserved.
  BuiltInCullDistancePerViewNV = 5278, // Reserved.
  BuiltInLayerPerViewNV = 5279, // Reserved.
  BuiltInMeshViewCountNV = 5280, // Reserved.
  BuiltInMeshViewIndicesNV = 5281, // Reserved.
  BuiltInBaryCoordNV = 5286, // Reserved.
  BuiltInBaryCoordNoPerspNV = 5287, // Reserved.
  BuiltInFragSizeEXT = 5292, // Reserved.
  BuiltInFragmentSizeNV = 5292, // Reserved.
  BuiltInFragInvocationCountEXT = 5293, // Reserved.
  BuiltInInvocationsPerPixelNV = 5293, // Reserved.
  BuiltInLaunchIdNV = 5319, // Reserved.
  BuiltInLaunchIdKHR = 5319, // Reserved.
  BuiltInLaunchSizeNV = 5320, // Reserved.
  BuiltInLaunchSizeKHR = 5320, // Reserved.
  BuiltInWorldRayOriginNV = 5321, // Reserved.
  BuiltInWorldRayOriginKHR = 5321, // Reserved.
  BuiltInWorldRayDirectionNV = 5322, // Reserved.
  BuiltInWorldRayDirectionKHR = 5322, // Reserved.
  BuiltInObjectRayOriginNV = 5323, // Reserved.
  BuiltInObjectRayOriginKHR = 5323, // Reserved.
  BuiltInObjectRayDirectionNV = 5324, // Reserved.
  BuiltInObjectRayDirectionKHR = 5324, // Reserved.
  BuiltInRayTminNV = 5325, // Reserved.
  BuiltInRayTminKHR = 5325, // Reserved.
  BuiltInRayTmaxNV = 5326, // Reserved.
  BuiltInRayTmaxKHR = 5326, // Reserved.
  BuiltInInstanceCustomIndexNV = 5327, // Reserved.
  BuiltInInstanceCustomIndexKHR = 5327, // Reserved.
  BuiltInObjectToWorldNV = 5330, // Reserved.
  BuiltInObjectToWorldKHR = 5330, // Reserved.
  BuiltInWorldToObjectNV = 5331, // Reserved.
  BuiltInWorldToObjectKHR = 5331, // Reserved.
  BuiltInHitTNV = 5332, // Reserved.
  BuiltInHitKindNV = 5333, // Reserved.
  BuiltInHitKindKHR = 5333, // Reserved.
  BuiltInIncomingRayFlagsNV = 5351, // Reserved.
  BuiltInIncomingRayFlagsKHR = 5351, // Reserved.
  BuiltInRayGeometryIndexKHR = 5352, // Reserved.
  BuiltInWarpsPerSMNV = 5374, // Reserved.
  BuiltInSMCountNV = 5375, // Reserved.
  BuiltInWarpIDNV = 5376, // Reserved.
  BuiltInSMIDNV = 5377, // Reserved.
}; // enum BuiltIn

enum SelectionControl {
  SelectionControlNone = 0x0,
  SelectionControlFlatten = 0x1,
  SelectionControlDontFlatten = 0x2,
}; // enum SelectionControl

enum LoopControl {
  LoopControlNone = 0x0,
  LoopControlUnroll = 0x1,
  LoopControlDontUnroll = 0x2,
  LoopControlDependencyInfinite = 0x4,
  LoopControlDependencyLength = 0x8,
  LoopControlMinIterations = 0x10,
  LoopControlMaxIterations = 0x20,
  LoopControlIterationMultiple = 0x40,
  LoopControlPeelCount = 0x80,
  LoopControlPartialCount = 0x100,
  LoopControlInitiationIntervalINTEL = 0x10000, // Reserved.
  LoopControlMaxConcurrencyINTEL = 0x20000, // Reserved.
  LoopControlDependencyArrayINTEL = 0x40000, // Reserved.
  LoopControlPipelineEnableINTEL = 0x80000, // Reserved.
  LoopControlLoopCoalesceINTEL = 0x100000, // Reserved.
  LoopControlMaxInterleavingINTEL = 0x200000, // Reserved.
  LoopControlSpeculatedIterationsINTEL = 0x400000, // Reserved.
}; // enum LoopControl

enum FunctionControl {
  FunctionControlNone = 0x0,
  FunctionControlInline = 0x1,
  FunctionControlDontInline = 0x2,
  FunctionControlPure = 0x4,
  FunctionControlConst = 0x8,
}; // enum FunctionControl

enum MemorySemantics /* <id> */ {
  MemorySemanticsNone = 0x0,
  MemorySemanticsAcquire = 0x2,
  MemorySemanticsRelease = 0x4,
  MemorySemanticsAcquireRelease = 0x8,
  MemorySemanticsSequentiallyConsistent = 0x10,
  MemorySemanticsUniformMemory = 0x40,
  MemorySemanticsSubgroupMemory = 0x80,
  MemorySemanticsWorkgroupMemory = 0x100,
  MemorySemanticsCrossWorkgroupMemory = 0x200,
  MemorySemanticsAtomicCounterMemory = 0x400,
  MemorySemanticsImageMemory = 0x800,
  MemorySemanticsOutputMemory = 0x1000,
  MemorySemanticsOutputMemoryKHR = 0x1000,
  MemorySemanticsMakeAvailable = 0x2000,
  MemorySemanticsMakeAvailableKHR = 0x2000,
  MemorySemanticsMakeVisible = 0x4000,
  MemorySemanticsMakeVisibleKHR = 0x4000,
  MemorySemanticsVolatile = 0x8000,
}; // enum MemorySemantics

enum MemoryOperands {
  MemoryOperandsNone = 0x0,
  MemoryOperandsVolatile = 0x1,
  MemoryOperandsAligned = 0x2,
  MemoryOperandsNontemporal = 0x4,
  MemoryOperandsMakePointerAvailable = 0x8,
  MemoryOperandsMakePointerAvailableKHR = 0x8,
  MemoryOperandsMakePointerVisible = 0x10,
  MemoryOperandsMakePointerVisibleKHR = 0x10,
  MemoryOperandsNonPrivatePointer = 0x20,
  MemoryOperandsNonPrivatePointerKHR = 0x20,
}; // enum MemoryOperands

enum Scope /* <id> */ {
  ScopeCrossDevice = 0,
  ScopeDevice = 1,
  ScopeWorkgroup = 2,
  ScopeSubgroup = 3,
  ScopeInvocation = 4,
  ScopeQueueFamily = 5,
  ScopeQueueFamilyKHR = 5,
  ScopeShaderCallKHR = 6, // Reserved.
}; // enum Scope

enum GroupOperation {
  GroupOperationReduce = 0,
  GroupOperationInclusiveScan = 1,
  GroupOperationExclusiveScan = 2,
  GroupOperationClusteredReduce = 3,
  GroupOperationPartitionedReduceNV = 6, // Reserved.
  GroupOperationPartitionedInclusiveScanNV = 7, // Reserved.
  GroupOperationPartitionedExclusiveScanNV = 8, // Reserved.
}; // enum GroupOperation

enum KernelEnqueueFlags {
  KernelEnqueueFlagsNoWait = 0,
  KernelEnqueueFlagsWaitKernel = 1,
  KernelEnqueueFlagsWaitWorkGroup = 2,
}; // enum KernelEnqueueFlags

enum KernelProfilingInfo {
  KernelProfilingInfoNone = 0x0,
  KernelProfilingInfoCmdExecTime = 0x1,
}; // enum KernelProfilingInfo

enum Capability {
  CapabilityMatrix = 0,
  CapabilityShader = 1,
  CapabilityGeometry = 2,
  CapabilityTessellation = 3,
  CapabilityAddresses = 4,
  CapabilityLinkage = 5,
  CapabilityKernel = 6,
  CapabilityVector16 = 7,
  CapabilityFloat16Buffer = 8,
  CapabilityFloat16 = 9,
  CapabilityFloat64 = 10,
  CapabilityInt64 = 11,
  CapabilityInt64Atomics = 12,
  CapabilityImageBasic = 13,
  CapabilityImageReadWrite = 14,
  CapabilityImageMipmap = 15,
  CapabilityPipes = 17,
  CapabilityGroups = 18,
  CapabilityDeviceEnqueue = 19,
  CapabilityLiteralSampler = 20,
  CapabilityAtomicStorage = 21,
  CapabilityInt16 = 22,
  CapabilityTessellationPointSize = 23,
  CapabilityGeometryPointSize = 24,
  CapabilityImageGatherExtended = 25,
  CapabilityStorageImageMultisample = 27,
  CapabilityUniformBufferArrayDynamicIndexing = 28,
  CapabilitySampledImageArrayDynamicIndexing = 29,
  CapabilityStorageBufferArrayDynamicIndexing = 30,
  CapabilityStorageImageArrayDynamicIndexing = 31,
  CapabilityClipDistance = 32,
  CapabilityCullDistance = 33,
  CapabilityImageCubeArray = 34,
  CapabilitySampleRateShading = 35,
  CapabilityImageRect = 36,
  CapabilitySampledRect = 37,
  CapabilityGenericPointer = 38,
  CapabilityInt8 = 39,
  CapabilityInputAttachment = 40,
  CapabilitySparseResidency = 41,
  CapabilityMinLod = 42,
  CapabilitySampled1D = 43,
  CapabilityImage1D = 44,
  CapabilitySampledCubeArray = 45,
  CapabilitySampledBuffer = 46,
  CapabilityImageBuffer = 47,
  CapabilityImageMSArray = 48,
  CapabilityStorageImageExtendedFormats = 49,
  CapabilityImageQuery = 50,
  CapabilityDerivativeControl = 51,
  CapabilityInterpolationFunction = 52,
  CapabilityTransformFeedback = 53,
  CapabilityGeometryStreams = 54,
  CapabilityStorageImageReadWithoutFormat = 55,
  CapabilityStorageImageWriteWithoutFormat = 56,
  CapabilityMultiViewport = 57,
  CapabilitySubgroupDispatch = 58,
  CapabilityNamedBarrier = 59,
  CapabilityPipeStorage = 60,
  CapabilityGroupNonUniform = 61,
  CapabilityGroupNonUniformVote = 62,
  CapabilityGroupNonUniformArithmetic = 63,
  CapabilityGroupNonUniformBallot = 64,
  CapabilityGroupNonUniformShuffle = 65,
  CapabilityGroupNonUniformShuffleRelative = 66,
  CapabilityGroupNonUniformClustered = 67,
  CapabilityGroupNonUniformQuad = 68,
  CapabilityShaderLayer = 69,
  CapabilityShaderViewportIndex = 70,
  CapabilityFragmentShadingRateKHR = 4422, // Reserved.
  CapabilitySubgroupBallotKHR = 4423, // Reserved.
  CapabilityDrawParameters = 4427,
  CapabilitySubgroupVoteKHR = 4431, // Reserved.
  CapabilityStorageBuffer16BitAccess = 4433,
  CapabilityStorageUniformBufferBlock16 = 4433,
  CapabilityUniformAndStorageBuffer16BitAccess = 4434,
  CapabilityStorageUniform16 = 4434,
  CapabilityStoragePushConstant16 = 4435,
  CapabilityStorageInputOutput16 = 4436,
  CapabilityDeviceGroup = 4437,
  CapabilityMultiView = 4439,
  CapabilityVariablePointersStorageBuffer = 4441,
  CapabilityVariablePointers = 4442,
  CapabilityAtomicStorageOps = 4445, // Reserved.
  CapabilitySampleMaskPostDepthCoverage = 4447, // Reserved.
  CapabilityStorageBuffer8BitAccess = 4448,
  CapabilityUniformAndStorageBuffer8BitAccess = 4449,
  CapabilityStoragePushConstant8 = 4450,
  CapabilityDenormPreserve = 4464,
  CapabilityDenormFlushToZero = 4465,
  CapabilitySignedZeroInfNanPreserve = 4466,
  CapabilityRoundingModeRTE = 4467,
  CapabilityRoundingModeRTZ = 4468,
  CapabilityRayQueryProvisionalKHR = 4471, // Reserved.
  CapabilityRayQueryKHR = 4472, // Reserved.
  CapabilityRayTraversalPrimitiveCullingKHR = 4478, // Reserved.
  CapabilityRayTracingKHR = 4479, // Reserved.
  CapabilityFloat16ImageAMD = 5008, // Reserved.
  CapabilityImageGatherBiasLodAMD = 5009, // Reserved.
  CapabilityFragmentMaskAMD = 5010, // Reserved.
  CapabilityStencilExportEXT = 5013, // Reserved.
  CapabilityImageReadWriteLodAMD = 5015, // Reserved.
  CapabilityInt64ImageEXT = 5016, // Reserved.
  CapabilityShaderClockKHR = 5055, // Reserved.
  CapabilitySampleMaskOverrideCoverageNV = 5249, // Reserved.
  CapabilityGeometryShaderPassthroughNV = 5251, // Reserved.
  CapabilityShaderViewportIndexLayerEXT = 5254, // Reserved.
  CapabilityShaderViewportIndexLayerNV = 5254, // Reserved.
  CapabilityShaderViewportMaskNV = 5255, // Reserved.
  CapabilityShaderStereoViewNV = 5259, // Reserved.
  CapabilityPerViewAttributesNV = 5260, // Reserved.
  CapabilityFragmentFullyCoveredEXT = 5265, // Reserved.
  CapabilityMeshShadingNV = 5266, // Reserved.
  CapabilityImageFootprintNV = 5282, // Reserved.
  CapabilityFragmentBarycentricNV = 5284, // Reserved.
  CapabilityComputeDerivativeGroupQuadsNV = 5288, // Reserved.
  CapabilityFragmentDensityEXT = 5291, // Reserved.
  CapabilityShadingRateNV = 5291, // Reserved.
  CapabilityGroupNonUniformPartitionedNV = 5297, // Reserved.
  CapabilityShaderNonUniform = 5301,
  CapabilityShaderNonUniformEXT = 5301,
  CapabilityRuntimeDescriptorArray = 5302,
  CapabilityRuntimeDescriptorArrayEXT = 5302,
  CapabilityInputAttachmentArrayDynamicIndexing = 5303,
  CapabilityInputAttachmentArrayDynamicIndexingEXT = 5303,
  CapabilityUniformTexelBufferArrayDynamicIndexing = 5304,
  CapabilityUniformTexelBufferArrayDynamicIndexingEXT = 5304,
  CapabilityStorageTexelBufferArrayDynamicIndexing = 5305,
  CapabilityStorageTexelBufferArrayDynamicIndexingEXT = 5305,
  CapabilityUniformBufferArrayNonUniformIndexing = 5306,
  CapabilityUniformBufferArrayNonUniformIndexingEXT = 5306,
  CapabilitySampledImageArrayNonUniformIndexing = 5307,
  CapabilitySampledImageArrayNonUniformIndexingEXT = 5307,
  CapabilityStorageBufferArrayNonUniformIndexing = 5308,
  CapabilityStorageBufferArrayNonUniformIndexingEXT = 5308,
  CapabilityStorageImageArrayNonUniformIndexing = 5309,
  CapabilityStorageImageArrayNonUniformIndexingEXT = 5309,
  CapabilityInputAttachmentArrayNonUniformIndexing = 5310,
  CapabilityInputAttachmentArrayNonUniformIndexingEXT = 5310,
  CapabilityUniformTexelBufferArrayNonUniformIndexing = 5311,
  CapabilityUniformTexelBufferArrayNonUniformIndexingEXT = 5311,
  CapabilityStorageTexelBufferArrayNonUniformIndexing = 5312,
  CapabilityStorageTexelBufferArrayNonUniformIndexingEXT = 5312,
  CapabilityRayTracingNV = 5340, // Reserved.
  CapabilityVulkanMemoryModel = 5345,
  CapabilityVulkanMemoryModelKHR = 5345,
  CapabilityVulkanMemoryModelDeviceScope = 5346,
  CapabilityVulkanMemoryModelDeviceScopeKHR = 5346,
  CapabilityPhysicalStorageBufferAddresses = 5347,
  CapabilityPhysicalStorageBufferAddressesEXT = 5347,
  CapabilityComputeDerivativeGroupLinearNV = 5350, // Reserved.
  CapabilityRayTracingProvisionalKHR = 5353, // Reserved.
  CapabilityCooperativeMatrixNV = 5357, // Reserved.
  CapabilityFragmentShaderSampleInterlockEXT = 5363, // Reserved.
  CapabilityFragmentShaderShadingRateInterlockEXT = 5372, // Reserved.
  CapabilityShaderSMBuiltinsNV = 5373, // Reserved.
  CapabilityFragmentShaderPixelInterlockEXT = 5378, // Reserved.
  CapabilityDemoteToHelperInvocationEXT = 5379, // Reserved.
  CapabilitySubgroupShuffleINTEL = 5568, // Reserved.
  CapabilitySubgroupBufferBlockIOINTEL = 5569, // Reserved.
  CapabilitySubgroupImageBlockIOINTEL = 5570, // Reserved.
  CapabilitySubgroupImageMediaBlockIOINTEL = 5579, // Reserved.
  CapabilityIntegerFunctions2INTEL = 5584, // Reserved.
  CapabilityFunctionPointersINTEL = 5603, // Reserved.
  CapabilityIndirectReferencesINTEL = 5604, // Reserved.
  CapabilitySubgroupAvcMotionEstimationINTEL = 5696, // Reserved.
  CapabilitySubgroupAvcMotionEstimationIntraINTEL = 5697, // Reserved.
  CapabilitySubgroupAvcMotionEstimationChromaINTEL = 5698, // Reserved.
  CapabilityFPGAMemoryAttributesINTEL = 5824, // Reserved.
  CapabilityUnstructuredLoopControlsINTEL = 5886, // Reserved.
  CapabilityFPGALoopControlsINTEL = 5888, // Reserved.
  CapabilityKernelAttributesINTEL = 5892, // Reserved.
  CapabilityFPGAKernelAttributesINTEL = 5897, // Reserved.
  CapabilityBlockingPipesINTEL = 5945, // Reserved.
  CapabilityFPGARegINTEL = 5948, // Reserved.
  CapabilityAtomicFloat32AddEXT = 6033, // Reserved.
  CapabilityAtomicFloat64AddEXT = 6034, // Reserved.
}; // enum Capability

enum ReservedRayFlags {
  ReservedRayFlagsNone = 0x0,
  ReservedRayFlagsOpaqueKHR = 0x1, // Reserved.
  ReservedRayFlagsNoOpaqueKHR = 0x2, // Reserved.
  ReservedRayFlagsTerminateOnFirstHitKHR = 0x4, // Reserved.
  ReservedRayFlagsSkipClosestHitShaderKHR = 0x8, // Reserved.
  ReservedRayFlagsCullBackFacingTrianglesKHR = 0x10, // Reserved.
  ReservedRayFlagsCullFrontFacingTrianglesKHR = 0x20, // Reserved.
  ReservedRayFlagsCullOpaqueKHR = 0x40, // Reserved.
  ReservedRayFlagsCullNoOpaqueKHR = 0x80, // Reserved.
  ReservedRayFlagsSkipTrianglesKHR = 0x100, // Reserved.
  ReservedRayFlagsSkipAABBsKHR = 0x200, // Reserved.
}; // enum ReservedRayFlags

enum ReservedRayQueryIntersection {
  ReservedRayQueryIntersectionRayQueryCandidateIntersectionKHR = 0, // Reserved.
  ReservedRayQueryIntersectionRayQueryCommittedIntersectionKHR = 1, // Reserved.
}; // enum ReservedRayQueryIntersection

enum ReservedRayQueryCommittedType {
  ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionNoneKHR = 0, // Reserved.
  ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionTriangleKHR = 1, // Reserved.
  ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionGeneratedKHR = 2, // Reserved.
}; // enum ReservedRayQueryCommittedType

enum ReservedRayQueryCandidateType {
  ReservedRayQueryCandidateTypeRayQueryCandidateIntersectionTriangleKHR = 0, // Reserved.
  ReservedRayQueryCandidateTypeRayQueryCandidateIntersectionAABBKHR = 1, // Reserved.
}; // enum ReservedRayQueryCandidateType

enum ReservedFragmentShadingRate {
  ReservedFragmentShadingRateNone = 0x0,
  ReservedFragmentShadingRateVertical2Pixels = 0x1, // Reserved.
  ReservedFragmentShadingRateVertical4Pixels = 0x2, // Reserved.
  ReservedFragmentShadingRateHorizontal2Pixels = 0x4, // Reserved.
  ReservedFragmentShadingRateHorizontal4Pixels = 0x8, // Reserved.
}; // enum ReservedFragmentShadingRate

enum Op {
  // Miscellaneous Instructions.
  OpNop = 0,
  OpUndef = 1,
  OpSizeOf = 321,
  // Debug Instructions.
  OpSourceContinued = 2,
  OpSource = 3,
  OpSourceExtension = 4,
  OpName = 5,
  OpMemberName = 6,
  OpString = 7,
  OpLine = 8,
  OpNoLine = 317,
  OpModuleProcessed = 330,
  // Annotation Instructions.
  OpDecorate = 71,
  OpMemberDecorate = 72,
  OpDecorationGroup = 73,
  OpGroupDecorate = 74,
  OpGroupMemberDecorate = 75,
  OpDecorateId = 332,
  OpDecorateString = 5632,
  OpDecorateStringGOOGLE = 5632, // Alias of OpDecorateString.
  OpMemberDecorateString = 5633,
  OpMemberDecorateStringGOOGLE = 5633, // Alias of OpMemberDecorateString.
  // Extension Instructions.
  OpExtension = 10,
  OpExtInstImport = 11,
  OpExtInst = 12,
  // Mode-Setting Instructions.
  OpMemoryModel = 14,
  OpEntryPoint = 15,
  OpExecutionMode = 16,
  OpCapability = 17,
  OpExecutionModeId = 331,
  // Type-Declaration Instructions.
  OpTypeVoid = 19,
  OpTypeBool = 20,
  OpTypeInt = 21,
  OpTypeFloat = 22,
  OpTypeVector = 23,
  OpTypeMatrix = 24,
  OpTypeImage = 25,
  OpTypeSampler = 26,
  OpTypeSampledImage = 27,
  OpTypeArray = 28,
  OpTypeRuntimeArray = 29,
  OpTypeStruct = 30,
  OpTypeOpaque = 31,
  OpTypePointer = 32,
  OpTypeFunction = 33,
  OpTypeEvent = 34,
  OpTypeDeviceEvent = 35,
  OpTypeReserveId = 36,
  OpTypeQueue = 37,
  OpTypePipe = 38,
  OpTypeForwardPointer = 39,
  OpTypePipeStorage = 322,
  OpTypeNamedBarrier = 327,
  // Constant-Creation Instructions.
  OpConstantTrue = 41,
  OpConstantFalse = 42,
  OpConstant = 43,
  OpConstantComposite = 44,
  OpConstantSampler = 45,
  OpConstantNull = 46,
  OpSpecConstantTrue = 48,
  OpSpecConstantFalse = 49,
  OpSpecConstant = 50,
  OpSpecConstantComposite = 51,
  OpSpecConstantOp = 52,
  // Memory Instructions.
  OpVariable = 59,
  OpImageTexelPointer = 60,
  OpLoad = 61,
  OpStore = 62,
  OpCopyMemory = 63,
  OpCopyMemorySized = 64,
  OpAccessChain = 65,
  OpInBoundsAccessChain = 66,
  OpPtrAccessChain = 67,
  OpArrayLength = 68,
  OpGenericPtrMemSemantics = 69,
  OpInBoundsPtrAccessChain = 70,
  OpPtrEqual = 401,
  OpPtrNotEqual = 402,
  OpPtrDiff = 403,
  // Function Instructions.
  OpFunction = 54,
  OpFunctionParameter = 55,
  OpFunctionEnd = 56,
  OpFunctionCall = 57,
  // Image Instructions.
  OpSampledImage = 86,
  OpImageSampleImplicitLod = 87,
  OpImageSampleExplicitLod = 88,
  OpImageSampleDrefImplicitLod = 89,
  OpImageSampleDrefExplicitLod = 90,
  OpImageSampleProjImplicitLod = 91,
  OpImageSampleProjExplicitLod = 92,
  OpImageSampleProjDrefImplicitLod = 93,
  OpImageSampleProjDrefExplicitLod = 94,
  OpImageFetch = 95,
  OpImageGather = 96,
  OpImageDrefGather = 97,
  OpImageRead = 98,
  OpImageWrite = 99,
  OpImage = 100,
  OpImageQueryFormat = 101,
  OpImageQueryOrder = 102,
  OpImageQuerySizeLod = 103,
  OpImageQuerySize = 104,
  OpImageQueryLod = 105,
  OpImageQueryLevels = 106,
  OpImageQuerySamples = 107,
  OpImageSparseSampleImplicitLod = 305,
  OpImageSparseSampleExplicitLod = 306,
  OpImageSparseSampleDrefImplicitLod = 307,
  OpImageSparseSampleDrefExplicitLod = 308,
  OpImageSparseSampleProjImplicitLod = 309,
  OpImageSparseSampleProjExplicitLod = 310,
  OpImageSparseSampleProjDrefImplicitLod = 311,
  OpImageSparseSampleProjDrefExplicitLod = 312,
  OpImageSparseFetch = 313,
  OpImageSparseGather = 314,
  OpImageSparseDrefGather = 315,
  OpImageSparseTexelsResident = 316,
  OpImageSparseRead = 320,
  OpImageSampleFootprintNV = 5283,
  // Conversion Instructions.
  OpConvertFToU = 109,
  OpConvertFToS = 110,
  OpConvertSToF = 111,
  OpConvertUToF = 112,
  OpUConvert = 113,
  OpSConvert = 114,
  OpFConvert = 115,
  OpQuantizeToF16 = 116,
  OpConvertPtrToU = 117,
  OpSatConvertSToU = 118,
  OpSatConvertUToS = 119,
  OpConvertUToPtr = 120,
  OpPtrCastToGeneric = 121,
  OpGenericCastToPtr = 122,
  OpGenericCastToPtrExplicit = 123,
  OpBitcast = 124,
  // Composite Instructions.
  OpVectorExtractDynamic = 77,
  OpVectorInsertDynamic = 78,
  OpVectorShuffle = 79,
  OpCompositeConstruct = 80,
  OpCompositeExtract = 81,
  OpCompositeInsert = 82,
  OpCopyObject = 83,
  OpTranspose = 84,
  OpCopyLogical = 400,
  // Arithmetic Instructions.
  OpSNegate = 126,
  OpFNegate = 127,
  OpIAdd = 128,
  OpFAdd = 129,
  OpISub = 130,
  OpFSub = 131,
  OpIMul = 132,
  OpFMul = 133,
  OpUDiv = 134,
  OpSDiv = 135,
  OpFDiv = 136,
  OpUMod = 137,
  OpSRem = 138,
  OpSMod = 139,
  OpFRem = 140,
  OpFMod = 141,
  OpVectorTimesScalar = 142,
  OpMatrixTimesScalar = 143,
  OpVectorTimesMatrix = 144,
  OpMatrixTimesVector = 145,
  OpMatrixTimesMatrix = 146,
  OpOuterProduct = 147,
  OpDot = 148,
  OpIAddCarry = 149,
  OpISubBorrow = 150,
  OpUMulExtended = 151,
  OpSMulExtended = 152,
  // Bit Instructions.
  OpShiftRightLogical = 194,
  OpShiftRightArithmetic = 195,
  OpShiftLeftLogical = 196,
  OpBitwiseOr = 197,
  OpBitwiseXor = 198,
  OpBitwiseAnd = 199,
  OpNot = 200,
  OpBitFieldInsert = 201,
  OpBitFieldSExtract = 202,
  OpBitFieldUExtract = 203,
  OpBitReverse = 204,
  OpBitCount = 205,
  // Relational and Logical Instructions.
  OpAny = 154,
  OpAll = 155,
  OpIsNan = 156,
  OpIsInf = 157,
  OpIsFinite = 158,
  OpIsNormal = 159,
  OpSignBitSet = 160,
  OpLessOrGreater = 161,
  OpOrdered = 162,
  OpUnordered = 163,
  OpLogicalEqual = 164,
  OpLogicalNotEqual = 165,
  OpLogicalOr = 166,
  OpLogicalAnd = 167,
  OpLogicalNot = 168,
  OpSelect = 169,
  OpIEqual = 170,
  OpINotEqual = 171,
  OpUGreaterThan = 172,
  OpSGreaterThan = 173,
  OpUGreaterThanEqual = 174,
  OpSGreaterThanEqual = 175,
  OpULessThan = 176,
  OpSLessThan = 177,
  OpULessThanEqual = 178,
  OpSLessThanEqual = 179,
  OpFOrdEqual = 180,
  OpFUnordEqual = 181,
  OpFOrdNotEqual = 182,
  OpFUnordNotEqual = 183,
  OpFOrdLessThan = 184,
  OpFUnordLessThan = 185,
  OpFOrdGreaterThan = 186,
  OpFUnordGreaterThan = 187,
  OpFOrdLessThanEqual = 188,
  OpFUnordLessThanEqual = 189,
  OpFOrdGreaterThanEqual = 190,
  OpFUnordGreaterThanEqual = 191,
  // Derivative Instructions.
  OpDPdx = 207,
  OpDPdy = 208,
  OpFwidth = 209,
  OpDPdxFine = 210,
  OpDPdyFine = 211,
  OpFwidthFine = 212,
  OpDPdxCoarse = 213,
  OpDPdyCoarse = 214,
  OpFwidthCoarse = 215,
  // Control-Flow Instructions.
  OpPhi = 245,
  OpLoopMerge = 246,
  OpSelectionMerge = 247,
  OpLabel = 248,
  OpBranch = 249,
  OpBranchConditional = 250,
  OpSwitch = 251,
  OpKill = 252,
  OpReturn = 253,
  OpReturnValue = 254,
  OpUnreachable = 255,
  OpLifetimeStart = 256,
  OpLifetimeStop = 257,
  OpTerminateInvocation = 4416,
  // Atomic Instructions.
  OpAtomicLoad = 227,
  OpAtomicStore = 228,
  OpAtomicExchange = 229,
  OpAtomicCompareExchange = 230,
  OpAtomicCompareExchangeWeak = 231,
  OpAtomicIIncrement = 232,
  OpAtomicIDecrement = 233,
  OpAtomicIAdd = 234,
  OpAtomicISub = 235,
  OpAtomicSMin = 236,
  OpAtomicUMin = 237,
  OpAtomicSMax = 238,
  OpAtomicUMax = 239,
  OpAtomicAnd = 240,
  OpAtomicOr = 241,
  OpAtomicXor = 242,
  OpAtomicFlagTestAndSet = 318,
  OpAtomicFlagClear = 319,
  OpAtomicFAddEXT = 6035,
  // Primitive Instructions.
  OpEmitVertex = 218,
  OpEndPrimitive = 219,
  OpEmitStreamVertex = 220,
  OpEndStreamPrimitive = 221,
  // Barrier Instructions.
  OpControlBarrier = 224,
  OpMemoryBarrier = 225,
  OpNamedBarrierInitialize = 328,
  OpMemoryNamedBarrier = 329,
  // Group and Subgroup Instructions.
  OpGroupAsyncCopy = 259,
  OpGroupWaitEvents = 260,
  OpGroupAll = 261,
  OpGroupAny = 262,
  OpGroupBroadcast = 263,
  OpGroupIAdd = 264,
  OpGroupFAdd = 265,
  OpGroupFMin = 266,
  OpGroupUMin = 267,
  OpGroupSMin = 268,
  OpGroupFMax = 269,
  OpGroupUMax = 270,
  OpGroupSMax = 271,
  OpSubgroupBallotKHR = 4421,
  OpSubgroupFirstInvocationKHR = 4422,
  OpSubgroupAllKHR = 4428,
  OpSubgroupAnyKHR = 4429,
  OpSubgroupAllEqualKHR = 4430,
  OpSubgroupReadInvocationKHR = 4432,
  OpGroupIAddNonUniformAMD = 5000,
  OpGroupFAddNonUniformAMD = 5001,
  OpGroupFMinNonUniformAMD = 5002,
  OpGroupUMinNonUniformAMD = 5003,
  OpGroupSMinNonUniformAMD = 5004,
  OpGroupFMaxNonUniformAMD = 5005,
  OpGroupUMaxNonUniformAMD = 5006,
  OpGroupSMaxNonUniformAMD = 5007,
  OpSubgroupShuffleINTEL = 5571,
  OpSubgroupShuffleDownINTEL = 5572,
  OpSubgroupShuffleUpINTEL = 5573,
  OpSubgroupShuffleXorINTEL = 5574,
  OpSubgroupBlockReadINTEL = 5575,
  OpSubgroupBlockWriteINTEL = 5576,
  OpSubgroupImageBlockReadINTEL = 5577,
  OpSubgroupImageBlockWriteINTEL = 5578,
  OpSubgroupImageMediaBlockReadINTEL = 5580,
  OpSubgroupImageMediaBlockWriteINTEL = 5581,
  // Device-Side Enqueue Instructions.
  OpEnqueueMarker = 291,
  OpEnqueueKernel = 292,
  OpGetKernelNDrangeSubGroupCount = 293,
  OpGetKernelNDrangeMaxSubGroupSize = 294,
  OpGetKernelWorkGroupSize = 295,
  OpGetKernelPreferredWorkGroupSizeMultiple = 296,
  OpRetainEvent = 297,
  OpReleaseEvent = 298,
  OpCreateUserEvent = 299,
  OpIsValidEvent = 300,
  OpSetUserEventStatus = 301,
  OpCaptureEventProfilingInfo = 302,
  OpGetDefaultQueue = 303,
  OpBuildNDRange = 304,
  OpGetKernelLocalSizeForSubgroupCount = 325,
  OpGetKernelMaxNumSubgroups = 326,
  // Pipe Instructions.
  OpReadPipe = 274,
  OpWritePipe = 275,
  OpReservedReadPipe = 276,
  OpReservedWritePipe = 277,
  OpReserveReadPipePackets = 278,
  OpReserveWritePipePackets = 279,
  OpCommitReadPipe = 280,
  OpCommitWritePipe = 281,
  OpIsValidReserveId = 282,
  OpGetNumPipePackets = 283,
  OpGetMaxPipePackets = 284,
  OpGroupReserveReadPipePackets = 285,
  OpGroupReserveWritePipePackets = 286,
  OpGroupCommitReadPipe = 287,
  OpGroupCommitWritePipe = 288,
  OpConstantPipeStorage = 323,
  OpCreatePipeFromPipeStorage = 324,
  OpReadPipeBlockingINTEL = 5946,
  OpWritePipeBlockingINTEL = 5947,
  // Non-Uniform Instructions.
  OpGroupNonUniformElect = 333,
  OpGroupNonUniformAll = 334,
  OpGroupNonUniformAny = 335,
  OpGroupNonUniformAllEqual = 336,
  OpGroupNonUniformBroadcast = 337,
  OpGroupNonUniformBroadcastFirst = 338,
  OpGroupNonUniformBallot = 339,
  OpGroupNonUniformInverseBallot = 340,
  OpGroupNonUniformBallotBitExtract = 341,
  OpGroupNonUniformBallotBitCount = 342,
  OpGroupNonUniformBallotFindLSB = 343,
  OpGroupNonUniformBallotFindMSB = 344,
  OpGroupNonUniformShuffle = 345,
  OpGroupNonUniformShuffleXor = 346,
  OpGroupNonUniformShuffleUp = 347,
  OpGroupNonUniformShuffleDown = 348,
  OpGroupNonUniformIAdd = 349,
  OpGroupNonUniformFAdd = 350,
  OpGroupNonUniformIMul = 351,
  OpGroupNonUniformFMul = 352,
  OpGroupNonUniformSMin = 353,
  OpGroupNonUniformUMin = 354,
  OpGroupNonUniformFMin = 355,
  OpGroupNonUniformSMax = 356,
  OpGroupNonUniformUMax = 357,
  OpGroupNonUniformFMax = 358,
  OpGroupNonUniformBitwiseAnd = 359,
  OpGroupNonUniformBitwiseOr = 360,
  OpGroupNonUniformBitwiseXor = 361,
  OpGroupNonUniformLogicalAnd = 362,
  OpGroupNonUniformLogicalOr = 363,
  OpGroupNonUniformLogicalXor = 364,
  OpGroupNonUniformQuadBroadcast = 365,
  OpGroupNonUniformQuadSwap = 366,
  OpGroupNonUniformPartitionNV = 5296,
  // Reserved Instructions.
  OpTraceRayKHR = 4445,
  OpExecuteCallableKHR = 4446,
  OpConvertUToAccelerationStructureKHR = 4447,
  OpIgnoreIntersectionKHR = 4448,
  OpTerminateRayKHR = 4449,
  OpTypeRayQueryKHR = 4472,
  OpRayQueryInitializeKHR = 4473,
  OpRayQueryTerminateKHR = 4474,
  OpRayQueryGenerateIntersectionKHR = 4475,
  OpRayQueryConfirmIntersectionKHR = 4476,
  OpRayQueryProceedKHR = 4477,
  OpRayQueryGetIntersectionTypeKHR = 4479,
  OpFragmentMaskFetchAMD = 5011,
  OpFragmentFetchAMD = 5012,
  OpReadClockKHR = 5056,
  OpWritePackedPrimitiveIndices4x8NV = 5299,
  OpReportIntersectionNV = 5334,
  OpReportIntersectionKHR = 5334, // Alias of OpReportIntersectionNV.
  OpIgnoreIntersectionNV = 5335,
  OpTerminateRayNV = 5336,
  OpTraceNV = 5337,
  OpTypeAccelerationStructureNV = 5341,
  OpTypeAccelerationStructureKHR = 5341, // Alias of OpTypeAccelerationStructureNV.
  OpExecuteCallableNV = 5344,
  OpTypeCooperativeMatrixNV = 5358,
  OpCooperativeMatrixLoadNV = 5359,
  OpCooperativeMatrixStoreNV = 5360,
  OpCooperativeMatrixMulAddNV = 5361,
  OpCooperativeMatrixLengthNV = 5362,
  OpBeginInvocationInterlockEXT = 5364,
  OpEndInvocationInterlockEXT = 5365,
  OpDemoteToHelperInvocationEXT = 5380,
  OpIsHelperInvocationEXT = 5381,
  OpUCountLeadingZerosINTEL = 5585,
  OpUCountTrailingZerosINTEL = 5586,
  OpAbsISubINTEL = 5587,
  OpAbsUSubINTEL = 5588,
  OpIAddSatINTEL = 5589,
  OpUAddSatINTEL = 5590,
  OpIAverageINTEL = 5591,
  OpUAverageINTEL = 5592,
  OpIAverageRoundedINTEL = 5593,
  OpUAverageRoundedINTEL = 5594,
  OpISubSatINTEL = 5595,
  OpUSubSatINTEL = 5596,
  OpIMul32x16INTEL = 5597,
  OpUMul32x16INTEL = 5598,
  OpLoopControlINTEL = 5887,
  OpFPGARegINTEL = 5949,
  OpRayQueryGetRayTMinKHR = 6016,
  OpRayQueryGetRayFlagsKHR = 6017,
  OpRayQueryGetIntersectionTKHR = 6018,
  OpRayQueryGetIntersectionInstanceCustomIndexKHR = 6019,
  OpRayQueryGetIntersectionInstanceIdKHR = 6020,
  OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR = 6021,
  OpRayQueryGetIntersectionGeometryIndexKHR = 6022,
  OpRayQueryGetIntersectionPrimitiveIndexKHR = 6023,
  OpRayQueryGetIntersectionBarycentricsKHR = 6024,
  OpRayQueryGetIntersectionFrontFaceKHR = 6025,
  OpRayQueryGetIntersectionCandidateAABBOpaqueKHR = 6026,
  OpRayQueryGetIntersectionObjectRayDirectionKHR = 6027,
  OpRayQueryGetIntersectionObjectRayOriginKHR = 6028,
  OpRayQueryGetWorldRayDirectionKHR = 6029,
  OpRayQueryGetWorldRayOriginKHR = 6030,
  OpRayQueryGetIntersectionObjectToWorldKHR = 6031,
  OpRayQueryGetIntersectionWorldToObjectKHR = 6032,
}; // enum Opcode

} // namespace tinyspv
