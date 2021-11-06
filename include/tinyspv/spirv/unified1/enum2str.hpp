// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ c43e82bfb70d813a08d7d10bb8a7a702a0798101
#include <cstdlib>
#include "tinyspv/spirv/unified1/SPIRV.hpp"
namespace tinyspv {
template<typename TEnum> const char* enum2str(TEnum);
// Ignored `MagicNumber` because it has no enumeration case.
template<>
const char* enum2str<SourceLanguage>(SourceLanguage v) {
  switch (v) {
  case SourceLanguage::SourceLanguageUnknown: return "Unknown";
  case SourceLanguage::SourceLanguageESSL: return "ESSL";
  case SourceLanguage::SourceLanguageGLSL: return "GLSL";
  case SourceLanguage::SourceLanguageHLSL: return "HLSL";
  default: std::abort();
  }
}
template<>
const char* enum2str<ExecutionModel>(ExecutionModel v) {
  switch (v) {
  case ExecutionModel::ExecutionModelVertex: return "Vertex";
  case ExecutionModel::ExecutionModelTessellationControl: return "TessellationControl";
  case ExecutionModel::ExecutionModelTessellationEvaluation: return "TessellationEvaluation";
  case ExecutionModel::ExecutionModelGeometry: return "Geometry";
  case ExecutionModel::ExecutionModelFragment: return "Fragment";
  case ExecutionModel::ExecutionModelGLCompute: return "GLCompute";
  case ExecutionModel::ExecutionModelKernel: return "Kernel";
  case ExecutionModel::ExecutionModelTaskNV: return "TaskNV";
  case ExecutionModel::ExecutionModelMeshNV: return "MeshNV";
  case ExecutionModel::ExecutionModelRayGenerationNV: return "RayGenerationNV";
  case ExecutionModel::ExecutionModelIntersectionNV: return "IntersectionNV";
  case ExecutionModel::ExecutionModelAnyHitNV: return "AnyHitNV";
  case ExecutionModel::ExecutionModelClosestHitNV: return "ClosestHitNV";
  case ExecutionModel::ExecutionModelMissNV: return "MissNV";
  case ExecutionModel::ExecutionModelCallableNV: return "CallableNV";
  default: std::abort();
  }
}
template<>
const char* enum2str<AddressingModel>(AddressingModel v) {
  switch (v) {
  case AddressingModel::AddressingModelLogical: return "Logical";
  case AddressingModel::AddressingModelPhysical32: return "Physical32";
  case AddressingModel::AddressingModelPhysical64: return "Physical64";
  case AddressingModel::AddressingModelPhysicalStorageBuffer64: return "PhysicalStorageBuffer64";
  default: std::abort();
  }
}
template<>
const char* enum2str<MemoryModel>(MemoryModel v) {
  switch (v) {
  case MemoryModel::MemoryModelSimple: return "Simple";
  case MemoryModel::MemoryModelGLSL450: return "GLSL450";
  case MemoryModel::MemoryModelOpenCL: return "OpenCL";
  case MemoryModel::MemoryModelVulkan: return "Vulkan";
  default: std::abort();
  }
}
template<>
const char* enum2str<ExecutionMode>(ExecutionMode v) {
  switch (v) {
  case ExecutionMode::ExecutionModeInvocations: return "Invocations";
  case ExecutionMode::ExecutionModeSpacingEqual: return "SpacingEqual";
  case ExecutionMode::ExecutionModeSpacingFractionalEven: return "SpacingFractionalEven";
  case ExecutionMode::ExecutionModeSpacingFractionalOdd: return "SpacingFractionalOdd";
  case ExecutionMode::ExecutionModeVertexOrderCw: return "VertexOrderCw";
  case ExecutionMode::ExecutionModeVertexOrderCcw: return "VertexOrderCcw";
  case ExecutionMode::ExecutionModePixelCenterInteger: return "PixelCenterInteger";
  case ExecutionMode::ExecutionModeOriginUpperLeft: return "OriginUpperLeft";
  case ExecutionMode::ExecutionModeOriginLowerLeft: return "OriginLowerLeft";
  case ExecutionMode::ExecutionModeEarlyFragmentTests: return "EarlyFragmentTests";
  case ExecutionMode::ExecutionModePointMode: return "PointMode";
  case ExecutionMode::ExecutionModeXfb: return "Xfb";
  case ExecutionMode::ExecutionModeDepthReplacing: return "DepthReplacing";
  case ExecutionMode::ExecutionModeDepthGreater: return "DepthGreater";
  case ExecutionMode::ExecutionModeDepthLess: return "DepthLess";
  case ExecutionMode::ExecutionModeDepthUnchanged: return "DepthUnchanged";
  case ExecutionMode::ExecutionModeLocalSize: return "LocalSize";
  case ExecutionMode::ExecutionModeLocalSizeHint: return "LocalSizeHint";
  case ExecutionMode::ExecutionModeInputPoints: return "InputPoints";
  case ExecutionMode::ExecutionModeInputLines: return "InputLines";
  case ExecutionMode::ExecutionModeInputLinesAdjacency: return "InputLinesAdjacency";
  case ExecutionMode::ExecutionModeTriangles: return "Triangles";
  case ExecutionMode::ExecutionModeInputTrianglesAdjacency: return "InputTrianglesAdjacency";
  case ExecutionMode::ExecutionModeQuads: return "Quads";
  case ExecutionMode::ExecutionModeIsolines: return "Isolines";
  case ExecutionMode::ExecutionModeOutputVertices: return "OutputVertices";
  case ExecutionMode::ExecutionModeOutputPoints: return "OutputPoints";
  case ExecutionMode::ExecutionModeOutputLineStrip: return "OutputLineStrip";
  case ExecutionMode::ExecutionModeOutputTriangleStrip: return "OutputTriangleStrip";
  case ExecutionMode::ExecutionModeVecTypeHint: return "VecTypeHint";
  case ExecutionMode::ExecutionModeContractionOff: return "ContractionOff";
  case ExecutionMode::ExecutionModeInitializer: return "Initializer";
  case ExecutionMode::ExecutionModeFinalizer: return "Finalizer";
  case ExecutionMode::ExecutionModeSubgroupSize: return "SubgroupSize";
  case ExecutionMode::ExecutionModeSubgroupsPerWorkgroup: return "SubgroupsPerWorkgroup";
  case ExecutionMode::ExecutionModeSubgroupsPerWorkgroupId: return "SubgroupsPerWorkgroupId";
  case ExecutionMode::ExecutionModeLocalSizeId: return "LocalSizeId";
  case ExecutionMode::ExecutionModeLocalSizeHintId: return "LocalSizeHintId";
  case ExecutionMode::ExecutionModePostDepthCoverage: return "PostDepthCoverage";
  case ExecutionMode::ExecutionModeDenormPreserve: return "DenormPreserve";
  case ExecutionMode::ExecutionModeDenormFlushToZero: return "DenormFlushToZero";
  case ExecutionMode::ExecutionModeSignedZeroInfNanPreserve: return "SignedZeroInfNanPreserve";
  case ExecutionMode::ExecutionModeRoundingModeRTE: return "RoundingModeRTE";
  case ExecutionMode::ExecutionModeRoundingModeRTZ: return "RoundingModeRTZ";
  case ExecutionMode::ExecutionModeStencilRefReplacingEXT: return "StencilRefReplacingEXT";
  case ExecutionMode::ExecutionModeOutputLinesNV: return "OutputLinesNV";
  case ExecutionMode::ExecutionModeOutputPrimitivesNV: return "OutputPrimitivesNV";
  case ExecutionMode::ExecutionModeDerivativeGroupQuadsNV: return "DerivativeGroupQuadsNV";
  case ExecutionMode::ExecutionModeDerivativeGroupLinearNV: return "DerivativeGroupLinearNV";
  case ExecutionMode::ExecutionModeOutputTrianglesNV: return "OutputTrianglesNV";
  case ExecutionMode::ExecutionModePixelInterlockOrderedEXT: return "PixelInterlockOrderedEXT";
  case ExecutionMode::ExecutionModePixelInterlockUnorderedEXT: return "PixelInterlockUnorderedEXT";
  case ExecutionMode::ExecutionModeSampleInterlockOrderedEXT: return "SampleInterlockOrderedEXT";
  case ExecutionMode::ExecutionModeSampleInterlockUnorderedEXT: return "SampleInterlockUnorderedEXT";
  case ExecutionMode::ExecutionModeShadingRateInterlockOrderedEXT: return "ShadingRateInterlockOrderedEXT";
  case ExecutionMode::ExecutionModeShadingRateInterlockUnorderedEXT: return "ShadingRateInterlockUnorderedEXT";
  case ExecutionMode::ExecutionModeMaxWorkgroupSizeINTEL: return "MaxWorkgroupSizeINTEL";
  case ExecutionMode::ExecutionModeMaxWorkDimINTEL: return "MaxWorkDimINTEL";
  case ExecutionMode::ExecutionModeNoGlobalOffsetINTEL: return "NoGlobalOffsetINTEL";
  case ExecutionMode::ExecutionModeNumSIMDWorkitemsINTEL: return "NumSIMDWorkitemsINTEL";
  default: std::abort();
  }
}
template<>
const char* enum2str<StorageClass>(StorageClass v) {
  switch (v) {
  case StorageClass::StorageClassUniformConstant: return "UniformConstant";
  case StorageClass::StorageClassInput: return "Input";
  case StorageClass::StorageClassUniform: return "Uniform";
  case StorageClass::StorageClassOutput: return "Output";
  case StorageClass::StorageClassWorkgroup: return "Workgroup";
  case StorageClass::StorageClassCrossWorkgroup: return "CrossWorkgroup";
  case StorageClass::StorageClassPrivate: return "Private";
  case StorageClass::StorageClassFunction: return "Function";
  case StorageClass::StorageClassGeneric: return "Generic";
  case StorageClass::StorageClassPushConstant: return "PushConstant";
  case StorageClass::StorageClassAtomicCounter: return "AtomicCounter";
  case StorageClass::StorageClassImage: return "Image";
  case StorageClass::StorageClassStorageBuffer: return "StorageBuffer";
  case StorageClass::StorageClassCallableDataNV: return "CallableDataNV";
  case StorageClass::StorageClassIncomingCallableDataNV: return "IncomingCallableDataNV";
  case StorageClass::StorageClassRayPayloadNV: return "RayPayloadNV";
  case StorageClass::StorageClassHitAttributeNV: return "HitAttributeNV";
  case StorageClass::StorageClassIncomingRayPayloadNV: return "IncomingRayPayloadNV";
  case StorageClass::StorageClassShaderRecordBufferNV: return "ShaderRecordBufferNV";
  case StorageClass::StorageClassPhysicalStorageBuffer: return "PhysicalStorageBuffer";
  case StorageClass::StorageClassCodeSectionINTEL: return "CodeSectionINTEL";
  default: std::abort();
  }
}
template<>
const char* enum2str<Dim>(Dim v) {
  switch (v) {
  case Dim::Dim1D: return "1D";
  case Dim::Dim2D: return "2D";
  case Dim::Dim3D: return "3D";
  case Dim::DimCube: return "Cube";
  case Dim::DimRect: return "Rect";
  case Dim::DimBuffer: return "Buffer";
  case Dim::DimSubpassData: return "SubpassData";
  default: std::abort();
  }
}
template<>
const char* enum2str<SamplerAddressingMode>(SamplerAddressingMode v) {
  switch (v) {
  case SamplerAddressingMode::SamplerAddressingModeNone: return "None";
  case SamplerAddressingMode::SamplerAddressingModeClampToEdge: return "ClampToEdge";
  case SamplerAddressingMode::SamplerAddressingModeClamp: return "Clamp";
  case SamplerAddressingMode::SamplerAddressingModeRepeat: return "Repeat";
  case SamplerAddressingMode::SamplerAddressingModeRepeatMirrored: return "RepeatMirrored";
  default: std::abort();
  }
}
template<>
const char* enum2str<SamplerFilterMode>(SamplerFilterMode v) {
  switch (v) {
  case SamplerFilterMode::SamplerFilterModeNearest: return "Nearest";
  case SamplerFilterMode::SamplerFilterModeLinear: return "Linear";
  default: std::abort();
  }
}
template<>
const char* enum2str<ImageFormat>(ImageFormat v) {
  switch (v) {
  case ImageFormat::ImageFormatUnknown: return "Unknown";
  case ImageFormat::ImageFormatRgba32f: return "Rgba32f";
  case ImageFormat::ImageFormatRgba16f: return "Rgba16f";
  case ImageFormat::ImageFormatR32f: return "R32f";
  case ImageFormat::ImageFormatRgba8: return "Rgba8";
  case ImageFormat::ImageFormatRgba8Snorm: return "Rgba8Snorm";
  case ImageFormat::ImageFormatRg32f: return "Rg32f";
  case ImageFormat::ImageFormatRg16f: return "Rg16f";
  case ImageFormat::ImageFormatR11fG11fB10f: return "R11fG11fB10f";
  case ImageFormat::ImageFormatR16f: return "R16f";
  case ImageFormat::ImageFormatRgba16: return "Rgba16";
  case ImageFormat::ImageFormatRgb10A2: return "Rgb10A2";
  case ImageFormat::ImageFormatRg16: return "Rg16";
  case ImageFormat::ImageFormatRg8: return "Rg8";
  case ImageFormat::ImageFormatR16: return "R16";
  case ImageFormat::ImageFormatR8: return "R8";
  case ImageFormat::ImageFormatRgba16Snorm: return "Rgba16Snorm";
  case ImageFormat::ImageFormatRg16Snorm: return "Rg16Snorm";
  case ImageFormat::ImageFormatRg8Snorm: return "Rg8Snorm";
  case ImageFormat::ImageFormatR16Snorm: return "R16Snorm";
  case ImageFormat::ImageFormatR8Snorm: return "R8Snorm";
  case ImageFormat::ImageFormatRgba32i: return "Rgba32i";
  case ImageFormat::ImageFormatRgba16i: return "Rgba16i";
  case ImageFormat::ImageFormatRgba8i: return "Rgba8i";
  case ImageFormat::ImageFormatR32i: return "R32i";
  case ImageFormat::ImageFormatRg32i: return "Rg32i";
  case ImageFormat::ImageFormatRg16i: return "Rg16i";
  case ImageFormat::ImageFormatRg8i: return "Rg8i";
  case ImageFormat::ImageFormatR16i: return "R16i";
  case ImageFormat::ImageFormatR8i: return "R8i";
  case ImageFormat::ImageFormatRgba32ui: return "Rgba32ui";
  case ImageFormat::ImageFormatRgba16ui: return "Rgba16ui";
  case ImageFormat::ImageFormatRgba8ui: return "Rgba8ui";
  case ImageFormat::ImageFormatR32ui: return "R32ui";
  case ImageFormat::ImageFormatRgb10a2ui: return "Rgb10a2ui";
  case ImageFormat::ImageFormatRg32ui: return "Rg32ui";
  case ImageFormat::ImageFormatRg16ui: return "Rg16ui";
  case ImageFormat::ImageFormatRg8ui: return "Rg8ui";
  case ImageFormat::ImageFormatR16ui: return "R16ui";
  case ImageFormat::ImageFormatR8ui: return "R8ui";
  case ImageFormat::ImageFormatR64ui: return "R64ui";
  case ImageFormat::ImageFormatR64i: return "R64i";
  default: std::abort();
  }
}
template<>
const char* enum2str<ImageChannelOrder>(ImageChannelOrder v) {
  switch (v) {
  case ImageChannelOrder::ImageChannelOrderR: return "R";
  case ImageChannelOrder::ImageChannelOrderA: return "A";
  case ImageChannelOrder::ImageChannelOrderRG: return "RG";
  case ImageChannelOrder::ImageChannelOrderRA: return "RA";
  case ImageChannelOrder::ImageChannelOrderRGB: return "RGB";
  case ImageChannelOrder::ImageChannelOrderRGBA: return "RGBA";
  case ImageChannelOrder::ImageChannelOrderBGRA: return "BGRA";
  case ImageChannelOrder::ImageChannelOrderARGB: return "ARGB";
  case ImageChannelOrder::ImageChannelOrderIntensity: return "Intensity";
  case ImageChannelOrder::ImageChannelOrderLuminance: return "Luminance";
  case ImageChannelOrder::ImageChannelOrderRx: return "Rx";
  case ImageChannelOrder::ImageChannelOrderRGx: return "RGx";
  case ImageChannelOrder::ImageChannelOrderRGBx: return "RGBx";
  case ImageChannelOrder::ImageChannelOrderDepth: return "Depth";
  case ImageChannelOrder::ImageChannelOrderDepthStencil: return "DepthStencil";
  case ImageChannelOrder::ImageChannelOrdersRGB: return "sRGB";
  case ImageChannelOrder::ImageChannelOrdersRGBx: return "sRGBx";
  case ImageChannelOrder::ImageChannelOrdersRGBA: return "sRGBA";
  case ImageChannelOrder::ImageChannelOrdersBGRA: return "sBGRA";
  case ImageChannelOrder::ImageChannelOrderABGR: return "ABGR";
  default: std::abort();
  }
}
template<>
const char* enum2str<ImageChannelDataType>(ImageChannelDataType v) {
  switch (v) {
  case ImageChannelDataType::ImageChannelDataTypeSnormInt8: return "SnormInt8";
  case ImageChannelDataType::ImageChannelDataTypeSnormInt16: return "SnormInt16";
  case ImageChannelDataType::ImageChannelDataTypeUnormInt8: return "UnormInt8";
  case ImageChannelDataType::ImageChannelDataTypeUnormInt16: return "UnormInt16";
  case ImageChannelDataType::ImageChannelDataTypeUnormShort565: return "UnormShort565";
  case ImageChannelDataType::ImageChannelDataTypeUnormShort555: return "UnormShort555";
  case ImageChannelDataType::ImageChannelDataTypeUnormInt101010: return "UnormInt101010";
  case ImageChannelDataType::ImageChannelDataTypeSignedInt8: return "SignedInt8";
  case ImageChannelDataType::ImageChannelDataTypeSignedInt16: return "SignedInt16";
  case ImageChannelDataType::ImageChannelDataTypeSignedInt32: return "SignedInt32";
  case ImageChannelDataType::ImageChannelDataTypeUnsignedInt8: return "UnsignedInt8";
  case ImageChannelDataType::ImageChannelDataTypeUnsignedInt16: return "UnsignedInt16";
  case ImageChannelDataType::ImageChannelDataTypeUnsignedInt32: return "UnsignedInt32";
  case ImageChannelDataType::ImageChannelDataTypeHalfFloat: return "HalfFloat";
  case ImageChannelDataType::ImageChannelDataTypeFloat: return "Float";
  case ImageChannelDataType::ImageChannelDataTypeUnormInt24: return "UnormInt24";
  default: std::abort();
  }
}
template<>
const char* enum2str<ImageOperands>(ImageOperands v) {
  switch (v) {
  case ImageOperands::ImageOperandsNone: return "None";
  case ImageOperands::ImageOperandsBias: return "Bias";
  case ImageOperands::ImageOperandsLod: return "Lod";
  case ImageOperands::ImageOperandsGrad: return "Grad";
  case ImageOperands::ImageOperandsConstOffset: return "ConstOffset";
  case ImageOperands::ImageOperandsOffset: return "Offset";
  case ImageOperands::ImageOperandsConstOffsets: return "ConstOffsets";
  case ImageOperands::ImageOperandsSample: return "Sample";
  case ImageOperands::ImageOperandsMinLod: return "MinLod";
  case ImageOperands::ImageOperandsMakeTexelAvailable: return "MakeTexelAvailable";
  case ImageOperands::ImageOperandsMakeTexelVisible: return "MakeTexelVisible";
  case ImageOperands::ImageOperandsNonPrivateTexel: return "NonPrivateTexel";
  case ImageOperands::ImageOperandsVolatileTexel: return "VolatileTexel";
  case ImageOperands::ImageOperandsSignExtend: return "SignExtend";
  case ImageOperands::ImageOperandsZeroExtend: return "ZeroExtend";
  default: std::abort();
  }
}
template<>
const char* enum2str<FPFastMathMode>(FPFastMathMode v) {
  switch (v) {
  case FPFastMathMode::FPFastMathModeNone: return "None";
  case FPFastMathMode::FPFastMathModeNotNaN: return "NotNaN";
  case FPFastMathMode::FPFastMathModeNotInf: return "NotInf";
  case FPFastMathMode::FPFastMathModeNSZ: return "NSZ";
  case FPFastMathMode::FPFastMathModeAllowRecip: return "AllowRecip";
  case FPFastMathMode::FPFastMathModeFast: return "Fast";
  default: std::abort();
  }
}
template<>
const char* enum2str<FPRoundingMode>(FPRoundingMode v) {
  switch (v) {
  case FPRoundingMode::FPRoundingModeRTE: return "RTE";
  case FPRoundingMode::FPRoundingModeRTZ: return "RTZ";
  case FPRoundingMode::FPRoundingModeRTP: return "RTP";
  case FPRoundingMode::FPRoundingModeRTN: return "RTN";
  default: std::abort();
  }
}
template<>
const char* enum2str<LinkageType>(LinkageType v) {
  switch (v) {
  case LinkageType::LinkageTypeExport: return "Export";
  case LinkageType::LinkageTypeImport: return "Import";
  default: std::abort();
  }
}
template<>
const char* enum2str<AccessQualifier>(AccessQualifier v) {
  switch (v) {
  case AccessQualifier::AccessQualifierReadOnly: return "ReadOnly";
  case AccessQualifier::AccessQualifierWriteOnly: return "WriteOnly";
  case AccessQualifier::AccessQualifierReadWrite: return "ReadWrite";
  default: std::abort();
  }
}
template<>
const char* enum2str<FunctionParameterAttribute>(FunctionParameterAttribute v) {
  switch (v) {
  case FunctionParameterAttribute::FunctionParameterAttributeZext: return "Zext";
  case FunctionParameterAttribute::FunctionParameterAttributeSext: return "Sext";
  case FunctionParameterAttribute::FunctionParameterAttributeByVal: return "ByVal";
  case FunctionParameterAttribute::FunctionParameterAttributeSret: return "Sret";
  case FunctionParameterAttribute::FunctionParameterAttributeNoAlias: return "NoAlias";
  case FunctionParameterAttribute::FunctionParameterAttributeNoCapture: return "NoCapture";
  case FunctionParameterAttribute::FunctionParameterAttributeNoWrite: return "NoWrite";
  case FunctionParameterAttribute::FunctionParameterAttributeNoReadWrite: return "NoReadWrite";
  default: std::abort();
  }
}
template<>
const char* enum2str<Decoration>(Decoration v) {
  switch (v) {
  case Decoration::DecorationRelaxedPrecision: return "RelaxedPrecision";
  case Decoration::DecorationSpecId: return "SpecId";
  case Decoration::DecorationBlock: return "Block";
  case Decoration::DecorationBufferBlock: return "BufferBlock";
  case Decoration::DecorationRowMajor: return "RowMajor";
  case Decoration::DecorationColMajor: return "ColMajor";
  case Decoration::DecorationArrayStride: return "ArrayStride";
  case Decoration::DecorationMatrixStride: return "MatrixStride";
  case Decoration::DecorationGLSLShared: return "GLSLShared";
  case Decoration::DecorationGLSLPacked: return "GLSLPacked";
  case Decoration::DecorationCPacked: return "CPacked";
  case Decoration::DecorationBuiltIn: return "BuiltIn";
  case Decoration::DecorationNoPerspective: return "NoPerspective";
  case Decoration::DecorationFlat: return "Flat";
  case Decoration::DecorationPatch: return "Patch";
  case Decoration::DecorationCentroid: return "Centroid";
  case Decoration::DecorationSample: return "Sample";
  case Decoration::DecorationInvariant: return "Invariant";
  case Decoration::DecorationRestrict: return "Restrict";
  case Decoration::DecorationAliased: return "Aliased";
  case Decoration::DecorationVolatile: return "Volatile";
  case Decoration::DecorationConstant: return "Constant";
  case Decoration::DecorationCoherent: return "Coherent";
  case Decoration::DecorationNonWritable: return "NonWritable";
  case Decoration::DecorationNonReadable: return "NonReadable";
  case Decoration::DecorationUniform: return "Uniform";
  case Decoration::DecorationUniformId: return "UniformId";
  case Decoration::DecorationSaturatedConversion: return "SaturatedConversion";
  case Decoration::DecorationStream: return "Stream";
  case Decoration::DecorationLocation: return "Location";
  case Decoration::DecorationComponent: return "Component";
  case Decoration::DecorationIndex: return "Index";
  case Decoration::DecorationBinding: return "Binding";
  case Decoration::DecorationDescriptorSet: return "DescriptorSet";
  case Decoration::DecorationOffset: return "Offset";
  case Decoration::DecorationXfbBuffer: return "XfbBuffer";
  case Decoration::DecorationXfbStride: return "XfbStride";
  case Decoration::DecorationFuncParamAttr: return "FuncParamAttr";
  case Decoration::DecorationFPRoundingMode: return "FPRoundingMode";
  case Decoration::DecorationFPFastMathMode: return "FPFastMathMode";
  case Decoration::DecorationLinkageAttributes: return "LinkageAttributes";
  case Decoration::DecorationNoContraction: return "NoContraction";
  case Decoration::DecorationInputAttachmentIndex: return "InputAttachmentIndex";
  case Decoration::DecorationAlignment: return "Alignment";
  case Decoration::DecorationMaxByteOffset: return "MaxByteOffset";
  case Decoration::DecorationAlignmentId: return "AlignmentId";
  case Decoration::DecorationMaxByteOffsetId: return "MaxByteOffsetId";
  case Decoration::DecorationNoSignedWrap: return "NoSignedWrap";
  case Decoration::DecorationNoUnsignedWrap: return "NoUnsignedWrap";
  case Decoration::DecorationExplicitInterpAMD: return "ExplicitInterpAMD";
  case Decoration::DecorationOverrideCoverageNV: return "OverrideCoverageNV";
  case Decoration::DecorationPassthroughNV: return "PassthroughNV";
  case Decoration::DecorationViewportRelativeNV: return "ViewportRelativeNV";
  case Decoration::DecorationSecondaryViewportRelativeNV: return "SecondaryViewportRelativeNV";
  case Decoration::DecorationPerPrimitiveNV: return "PerPrimitiveNV";
  case Decoration::DecorationPerViewNV: return "PerViewNV";
  case Decoration::DecorationPerTaskNV: return "PerTaskNV";
  case Decoration::DecorationPerVertexNV: return "PerVertexNV";
  case Decoration::DecorationNonUniform: return "NonUniform";
  case Decoration::DecorationRestrictPointer: return "RestrictPointer";
  case Decoration::DecorationAliasedPointer: return "AliasedPointer";
  case Decoration::DecorationReferencedIndirectlyINTEL: return "ReferencedIndirectlyINTEL";
  case Decoration::DecorationCounterBuffer: return "CounterBuffer";
  case Decoration::DecorationUserSemantic: return "UserSemantic";
  case Decoration::DecorationUserTypeGOOGLE: return "UserTypeGOOGLE";
  case Decoration::DecorationRegisterINTEL: return "RegisterINTEL";
  case Decoration::DecorationMemoryINTEL: return "MemoryINTEL";
  case Decoration::DecorationNumbanksINTEL: return "NumbanksINTEL";
  case Decoration::DecorationBankwidthINTEL: return "BankwidthINTEL";
  case Decoration::DecorationMaxPrivateCopiesINTEL: return "MaxPrivateCopiesINTEL";
  case Decoration::DecorationSinglepumpINTEL: return "SinglepumpINTEL";
  case Decoration::DecorationDoublepumpINTEL: return "DoublepumpINTEL";
  case Decoration::DecorationMaxReplicatesINTEL: return "MaxReplicatesINTEL";
  case Decoration::DecorationSimpleDualPortINTEL: return "SimpleDualPortINTEL";
  case Decoration::DecorationMergeINTEL: return "MergeINTEL";
  case Decoration::DecorationBankBitsINTEL: return "BankBitsINTEL";
  case Decoration::DecorationForcePow2DepthINTEL: return "ForcePow2DepthINTEL";
  default: std::abort();
  }
}
template<>
const char* enum2str<BuiltIn>(BuiltIn v) {
  switch (v) {
  case BuiltIn::BuiltInPosition: return "Position";
  case BuiltIn::BuiltInPointSize: return "PointSize";
  case BuiltIn::BuiltInClipDistance: return "ClipDistance";
  case BuiltIn::BuiltInCullDistance: return "CullDistance";
  case BuiltIn::BuiltInVertexId: return "VertexId";
  case BuiltIn::BuiltInInstanceId: return "InstanceId";
  case BuiltIn::BuiltInPrimitiveId: return "PrimitiveId";
  case BuiltIn::BuiltInInvocationId: return "InvocationId";
  case BuiltIn::BuiltInLayer: return "Layer";
  case BuiltIn::BuiltInViewportIndex: return "ViewportIndex";
  case BuiltIn::BuiltInTessLevelOuter: return "TessLevelOuter";
  case BuiltIn::BuiltInTessLevelInner: return "TessLevelInner";
  case BuiltIn::BuiltInTessCoord: return "TessCoord";
  case BuiltIn::BuiltInPatchVertices: return "PatchVertices";
  case BuiltIn::BuiltInFragCoord: return "FragCoord";
  case BuiltIn::BuiltInPointCoord: return "PointCoord";
  case BuiltIn::BuiltInFrontFacing: return "FrontFacing";
  case BuiltIn::BuiltInSampleId: return "SampleId";
  case BuiltIn::BuiltInSamplePosition: return "SamplePosition";
  case BuiltIn::BuiltInSampleMask: return "SampleMask";
  case BuiltIn::BuiltInFragDepth: return "FragDepth";
  case BuiltIn::BuiltInHelperInvocation: return "HelperInvocation";
  case BuiltIn::BuiltInNumWorkgroups: return "NumWorkgroups";
  case BuiltIn::BuiltInWorkgroupSize: return "WorkgroupSize";
  case BuiltIn::BuiltInWorkgroupId: return "WorkgroupId";
  case BuiltIn::BuiltInLocalInvocationId: return "LocalInvocationId";
  case BuiltIn::BuiltInGlobalInvocationId: return "GlobalInvocationId";
  case BuiltIn::BuiltInLocalInvocationIndex: return "LocalInvocationIndex";
  case BuiltIn::BuiltInWorkDim: return "WorkDim";
  case BuiltIn::BuiltInGlobalSize: return "GlobalSize";
  case BuiltIn::BuiltInEnqueuedWorkgroupSize: return "EnqueuedWorkgroupSize";
  case BuiltIn::BuiltInGlobalOffset: return "GlobalOffset";
  case BuiltIn::BuiltInGlobalLinearId: return "GlobalLinearId";
  case BuiltIn::BuiltInSubgroupSize: return "SubgroupSize";
  case BuiltIn::BuiltInSubgroupMaxSize: return "SubgroupMaxSize";
  case BuiltIn::BuiltInNumSubgroups: return "NumSubgroups";
  case BuiltIn::BuiltInNumEnqueuedSubgroups: return "NumEnqueuedSubgroups";
  case BuiltIn::BuiltInSubgroupId: return "SubgroupId";
  case BuiltIn::BuiltInSubgroupLocalInvocationId: return "SubgroupLocalInvocationId";
  case BuiltIn::BuiltInVertexIndex: return "VertexIndex";
  case BuiltIn::BuiltInInstanceIndex: return "InstanceIndex";
  case BuiltIn::BuiltInSubgroupEqMask: return "SubgroupEqMask";
  case BuiltIn::BuiltInSubgroupGeMask: return "SubgroupGeMask";
  case BuiltIn::BuiltInSubgroupGtMask: return "SubgroupGtMask";
  case BuiltIn::BuiltInSubgroupLeMask: return "SubgroupLeMask";
  case BuiltIn::BuiltInSubgroupLtMask: return "SubgroupLtMask";
  case BuiltIn::BuiltInBaseVertex: return "BaseVertex";
  case BuiltIn::BuiltInBaseInstance: return "BaseInstance";
  case BuiltIn::BuiltInDrawIndex: return "DrawIndex";
  case BuiltIn::BuiltInPrimitiveShadingRateKHR: return "PrimitiveShadingRateKHR";
  case BuiltIn::BuiltInDeviceIndex: return "DeviceIndex";
  case BuiltIn::BuiltInViewIndex: return "ViewIndex";
  case BuiltIn::BuiltInShadingRateKHR: return "ShadingRateKHR";
  case BuiltIn::BuiltInBaryCoordNoPerspAMD: return "BaryCoordNoPerspAMD";
  case BuiltIn::BuiltInBaryCoordNoPerspCentroidAMD: return "BaryCoordNoPerspCentroidAMD";
  case BuiltIn::BuiltInBaryCoordNoPerspSampleAMD: return "BaryCoordNoPerspSampleAMD";
  case BuiltIn::BuiltInBaryCoordSmoothAMD: return "BaryCoordSmoothAMD";
  case BuiltIn::BuiltInBaryCoordSmoothCentroidAMD: return "BaryCoordSmoothCentroidAMD";
  case BuiltIn::BuiltInBaryCoordSmoothSampleAMD: return "BaryCoordSmoothSampleAMD";
  case BuiltIn::BuiltInBaryCoordPullModelAMD: return "BaryCoordPullModelAMD";
  case BuiltIn::BuiltInFragStencilRefEXT: return "FragStencilRefEXT";
  case BuiltIn::BuiltInViewportMaskNV: return "ViewportMaskNV";
  case BuiltIn::BuiltInSecondaryPositionNV: return "SecondaryPositionNV";
  case BuiltIn::BuiltInSecondaryViewportMaskNV: return "SecondaryViewportMaskNV";
  case BuiltIn::BuiltInPositionPerViewNV: return "PositionPerViewNV";
  case BuiltIn::BuiltInViewportMaskPerViewNV: return "ViewportMaskPerViewNV";
  case BuiltIn::BuiltInFullyCoveredEXT: return "FullyCoveredEXT";
  case BuiltIn::BuiltInTaskCountNV: return "TaskCountNV";
  case BuiltIn::BuiltInPrimitiveCountNV: return "PrimitiveCountNV";
  case BuiltIn::BuiltInPrimitiveIndicesNV: return "PrimitiveIndicesNV";
  case BuiltIn::BuiltInClipDistancePerViewNV: return "ClipDistancePerViewNV";
  case BuiltIn::BuiltInCullDistancePerViewNV: return "CullDistancePerViewNV";
  case BuiltIn::BuiltInLayerPerViewNV: return "LayerPerViewNV";
  case BuiltIn::BuiltInMeshViewCountNV: return "MeshViewCountNV";
  case BuiltIn::BuiltInMeshViewIndicesNV: return "MeshViewIndicesNV";
  case BuiltIn::BuiltInBaryCoordNV: return "BaryCoordNV";
  case BuiltIn::BuiltInBaryCoordNoPerspNV: return "BaryCoordNoPerspNV";
  case BuiltIn::BuiltInFragSizeEXT: return "FragSizeEXT";
  case BuiltIn::BuiltInFragInvocationCountEXT: return "FragInvocationCountEXT";
  case BuiltIn::BuiltInLaunchIdNV: return "LaunchIdNV";
  case BuiltIn::BuiltInLaunchSizeNV: return "LaunchSizeNV";
  case BuiltIn::BuiltInWorldRayOriginNV: return "WorldRayOriginNV";
  case BuiltIn::BuiltInWorldRayDirectionNV: return "WorldRayDirectionNV";
  case BuiltIn::BuiltInObjectRayOriginNV: return "ObjectRayOriginNV";
  case BuiltIn::BuiltInObjectRayDirectionNV: return "ObjectRayDirectionNV";
  case BuiltIn::BuiltInRayTminNV: return "RayTminNV";
  case BuiltIn::BuiltInRayTmaxNV: return "RayTmaxNV";
  case BuiltIn::BuiltInInstanceCustomIndexNV: return "InstanceCustomIndexNV";
  case BuiltIn::BuiltInObjectToWorldNV: return "ObjectToWorldNV";
  case BuiltIn::BuiltInWorldToObjectNV: return "WorldToObjectNV";
  case BuiltIn::BuiltInHitTNV: return "HitTNV";
  case BuiltIn::BuiltInHitKindNV: return "HitKindNV";
  case BuiltIn::BuiltInIncomingRayFlagsNV: return "IncomingRayFlagsNV";
  case BuiltIn::BuiltInRayGeometryIndexKHR: return "RayGeometryIndexKHR";
  case BuiltIn::BuiltInWarpsPerSMNV: return "WarpsPerSMNV";
  case BuiltIn::BuiltInSMCountNV: return "SMCountNV";
  case BuiltIn::BuiltInWarpIDNV: return "WarpIDNV";
  case BuiltIn::BuiltInSMIDNV: return "SMIDNV";
  default: std::abort();
  }
}
template<>
const char* enum2str<SelectionControl>(SelectionControl v) {
  switch (v) {
  case SelectionControl::SelectionControlNone: return "None";
  case SelectionControl::SelectionControlFlatten: return "Flatten";
  case SelectionControl::SelectionControlDontFlatten: return "DontFlatten";
  default: std::abort();
  }
}
template<>
const char* enum2str<LoopControl>(LoopControl v) {
  switch (v) {
  case LoopControl::LoopControlNone: return "None";
  case LoopControl::LoopControlUnroll: return "Unroll";
  case LoopControl::LoopControlDontUnroll: return "DontUnroll";
  case LoopControl::LoopControlDependencyInfinite: return "DependencyInfinite";
  case LoopControl::LoopControlDependencyLength: return "DependencyLength";
  case LoopControl::LoopControlMinIterations: return "MinIterations";
  case LoopControl::LoopControlMaxIterations: return "MaxIterations";
  case LoopControl::LoopControlIterationMultiple: return "IterationMultiple";
  case LoopControl::LoopControlPeelCount: return "PeelCount";
  case LoopControl::LoopControlPartialCount: return "PartialCount";
  case LoopControl::LoopControlInitiationIntervalINTEL: return "InitiationIntervalINTEL";
  case LoopControl::LoopControlMaxConcurrencyINTEL: return "MaxConcurrencyINTEL";
  case LoopControl::LoopControlDependencyArrayINTEL: return "DependencyArrayINTEL";
  case LoopControl::LoopControlPipelineEnableINTEL: return "PipelineEnableINTEL";
  case LoopControl::LoopControlLoopCoalesceINTEL: return "LoopCoalesceINTEL";
  case LoopControl::LoopControlMaxInterleavingINTEL: return "MaxInterleavingINTEL";
  case LoopControl::LoopControlSpeculatedIterationsINTEL: return "SpeculatedIterationsINTEL";
  default: std::abort();
  }
}
template<>
const char* enum2str<FunctionControl>(FunctionControl v) {
  switch (v) {
  case FunctionControl::FunctionControlNone: return "None";
  case FunctionControl::FunctionControlInline: return "Inline";
  case FunctionControl::FunctionControlDontInline: return "DontInline";
  case FunctionControl::FunctionControlPure: return "Pure";
  case FunctionControl::FunctionControlConst: return "Const";
  default: std::abort();
  }
}
template<>
const char* enum2str<MemorySemantics>(MemorySemantics v) {
  switch (v) {
  case MemorySemantics::MemorySemanticsNone: return "None";
  case MemorySemantics::MemorySemanticsAcquire: return "Acquire";
  case MemorySemantics::MemorySemanticsRelease: return "Release";
  case MemorySemantics::MemorySemanticsAcquireRelease: return "AcquireRelease";
  case MemorySemantics::MemorySemanticsSequentiallyConsistent: return "SequentiallyConsistent";
  case MemorySemantics::MemorySemanticsUniformMemory: return "UniformMemory";
  case MemorySemantics::MemorySemanticsSubgroupMemory: return "SubgroupMemory";
  case MemorySemantics::MemorySemanticsWorkgroupMemory: return "WorkgroupMemory";
  case MemorySemantics::MemorySemanticsCrossWorkgroupMemory: return "CrossWorkgroupMemory";
  case MemorySemantics::MemorySemanticsAtomicCounterMemory: return "AtomicCounterMemory";
  case MemorySemantics::MemorySemanticsImageMemory: return "ImageMemory";
  case MemorySemantics::MemorySemanticsOutputMemory: return "OutputMemory";
  case MemorySemantics::MemorySemanticsMakeAvailable: return "MakeAvailable";
  case MemorySemantics::MemorySemanticsMakeVisible: return "MakeVisible";
  case MemorySemantics::MemorySemanticsVolatile: return "Volatile";
  default: std::abort();
  }
}
template<>
const char* enum2str<MemoryOperands>(MemoryOperands v) {
  switch (v) {
  case MemoryOperands::MemoryOperandsNone: return "None";
  case MemoryOperands::MemoryOperandsVolatile: return "Volatile";
  case MemoryOperands::MemoryOperandsAligned: return "Aligned";
  case MemoryOperands::MemoryOperandsNontemporal: return "Nontemporal";
  case MemoryOperands::MemoryOperandsMakePointerAvailable: return "MakePointerAvailable";
  case MemoryOperands::MemoryOperandsMakePointerVisible: return "MakePointerVisible";
  case MemoryOperands::MemoryOperandsNonPrivatePointer: return "NonPrivatePointer";
  default: std::abort();
  }
}
template<>
const char* enum2str<Scope>(Scope v) {
  switch (v) {
  case Scope::ScopeCrossDevice: return "CrossDevice";
  case Scope::ScopeDevice: return "Device";
  case Scope::ScopeWorkgroup: return "Workgroup";
  case Scope::ScopeSubgroup: return "Subgroup";
  case Scope::ScopeInvocation: return "Invocation";
  case Scope::ScopeQueueFamily: return "QueueFamily";
  case Scope::ScopeShaderCallKHR: return "ShaderCallKHR";
  default: std::abort();
  }
}
template<>
const char* enum2str<GroupOperation>(GroupOperation v) {
  switch (v) {
  case GroupOperation::GroupOperationReduce: return "Reduce";
  case GroupOperation::GroupOperationInclusiveScan: return "InclusiveScan";
  case GroupOperation::GroupOperationExclusiveScan: return "ExclusiveScan";
  case GroupOperation::GroupOperationClusteredReduce: return "ClusteredReduce";
  case GroupOperation::GroupOperationPartitionedReduceNV: return "PartitionedReduceNV";
  case GroupOperation::GroupOperationPartitionedInclusiveScanNV: return "PartitionedInclusiveScanNV";
  case GroupOperation::GroupOperationPartitionedExclusiveScanNV: return "PartitionedExclusiveScanNV";
  default: std::abort();
  }
}
template<>
const char* enum2str<KernelEnqueueFlags>(KernelEnqueueFlags v) {
  switch (v) {
  case KernelEnqueueFlags::KernelEnqueueFlagsNoWait: return "NoWait";
  case KernelEnqueueFlags::KernelEnqueueFlagsWaitKernel: return "WaitKernel";
  case KernelEnqueueFlags::KernelEnqueueFlagsWaitWorkGroup: return "WaitWorkGroup";
  default: std::abort();
  }
}
template<>
const char* enum2str<KernelProfilingInfo>(KernelProfilingInfo v) {
  switch (v) {
  case KernelProfilingInfo::KernelProfilingInfoNone: return "None";
  case KernelProfilingInfo::KernelProfilingInfoCmdExecTime: return "CmdExecTime";
  default: std::abort();
  }
}
template<>
const char* enum2str<Capability>(Capability v) {
  switch (v) {
  case Capability::CapabilityMatrix: return "Matrix";
  case Capability::CapabilityShader: return "Shader";
  case Capability::CapabilityGeometry: return "Geometry";
  case Capability::CapabilityTessellation: return "Tessellation";
  case Capability::CapabilityAddresses: return "Addresses";
  case Capability::CapabilityLinkage: return "Linkage";
  case Capability::CapabilityKernel: return "Kernel";
  case Capability::CapabilityVector16: return "Vector16";
  case Capability::CapabilityFloat16Buffer: return "Float16Buffer";
  case Capability::CapabilityFloat16: return "Float16";
  case Capability::CapabilityFloat64: return "Float64";
  case Capability::CapabilityInt64: return "Int64";
  case Capability::CapabilityInt64Atomics: return "Int64Atomics";
  case Capability::CapabilityImageBasic: return "ImageBasic";
  case Capability::CapabilityImageReadWrite: return "ImageReadWrite";
  case Capability::CapabilityImageMipmap: return "ImageMipmap";
  case Capability::CapabilityPipes: return "Pipes";
  case Capability::CapabilityGroups: return "Groups";
  case Capability::CapabilityDeviceEnqueue: return "DeviceEnqueue";
  case Capability::CapabilityLiteralSampler: return "LiteralSampler";
  case Capability::CapabilityAtomicStorage: return "AtomicStorage";
  case Capability::CapabilityInt16: return "Int16";
  case Capability::CapabilityTessellationPointSize: return "TessellationPointSize";
  case Capability::CapabilityGeometryPointSize: return "GeometryPointSize";
  case Capability::CapabilityImageGatherExtended: return "ImageGatherExtended";
  case Capability::CapabilityStorageImageMultisample: return "StorageImageMultisample";
  case Capability::CapabilityUniformBufferArrayDynamicIndexing: return "UniformBufferArrayDynamicIndexing";
  case Capability::CapabilitySampledImageArrayDynamicIndexing: return "SampledImageArrayDynamicIndexing";
  case Capability::CapabilityStorageBufferArrayDynamicIndexing: return "StorageBufferArrayDynamicIndexing";
  case Capability::CapabilityStorageImageArrayDynamicIndexing: return "StorageImageArrayDynamicIndexing";
  case Capability::CapabilityClipDistance: return "ClipDistance";
  case Capability::CapabilityCullDistance: return "CullDistance";
  case Capability::CapabilityImageCubeArray: return "ImageCubeArray";
  case Capability::CapabilitySampleRateShading: return "SampleRateShading";
  case Capability::CapabilityImageRect: return "ImageRect";
  case Capability::CapabilitySampledRect: return "SampledRect";
  case Capability::CapabilityGenericPointer: return "GenericPointer";
  case Capability::CapabilityInt8: return "Int8";
  case Capability::CapabilityInputAttachment: return "InputAttachment";
  case Capability::CapabilitySparseResidency: return "SparseResidency";
  case Capability::CapabilityMinLod: return "MinLod";
  case Capability::CapabilitySampled1D: return "Sampled1D";
  case Capability::CapabilityImage1D: return "Image1D";
  case Capability::CapabilitySampledCubeArray: return "SampledCubeArray";
  case Capability::CapabilitySampledBuffer: return "SampledBuffer";
  case Capability::CapabilityImageBuffer: return "ImageBuffer";
  case Capability::CapabilityImageMSArray: return "ImageMSArray";
  case Capability::CapabilityStorageImageExtendedFormats: return "StorageImageExtendedFormats";
  case Capability::CapabilityImageQuery: return "ImageQuery";
  case Capability::CapabilityDerivativeControl: return "DerivativeControl";
  case Capability::CapabilityInterpolationFunction: return "InterpolationFunction";
  case Capability::CapabilityTransformFeedback: return "TransformFeedback";
  case Capability::CapabilityGeometryStreams: return "GeometryStreams";
  case Capability::CapabilityStorageImageReadWithoutFormat: return "StorageImageReadWithoutFormat";
  case Capability::CapabilityStorageImageWriteWithoutFormat: return "StorageImageWriteWithoutFormat";
  case Capability::CapabilityMultiViewport: return "MultiViewport";
  case Capability::CapabilitySubgroupDispatch: return "SubgroupDispatch";
  case Capability::CapabilityNamedBarrier: return "NamedBarrier";
  case Capability::CapabilityPipeStorage: return "PipeStorage";
  case Capability::CapabilityGroupNonUniform: return "GroupNonUniform";
  case Capability::CapabilityGroupNonUniformVote: return "GroupNonUniformVote";
  case Capability::CapabilityGroupNonUniformArithmetic: return "GroupNonUniformArithmetic";
  case Capability::CapabilityGroupNonUniformBallot: return "GroupNonUniformBallot";
  case Capability::CapabilityGroupNonUniformShuffle: return "GroupNonUniformShuffle";
  case Capability::CapabilityGroupNonUniformShuffleRelative: return "GroupNonUniformShuffleRelative";
  case Capability::CapabilityGroupNonUniformClustered: return "GroupNonUniformClustered";
  case Capability::CapabilityGroupNonUniformQuad: return "GroupNonUniformQuad";
  case Capability::CapabilityShaderLayer: return "ShaderLayer";
  case Capability::CapabilityShaderViewportIndex: return "ShaderViewportIndex";
  case Capability::CapabilityFragmentShadingRateKHR: return "FragmentShadingRateKHR";
  case Capability::CapabilitySubgroupBallotKHR: return "SubgroupBallotKHR";
  case Capability::CapabilityDrawParameters: return "DrawParameters";
  case Capability::CapabilitySubgroupVoteKHR: return "SubgroupVoteKHR";
  case Capability::CapabilityStorageBuffer16BitAccess: return "StorageBuffer16BitAccess";
  case Capability::CapabilityUniformAndStorageBuffer16BitAccess: return "UniformAndStorageBuffer16BitAccess";
  case Capability::CapabilityStoragePushConstant16: return "StoragePushConstant16";
  case Capability::CapabilityStorageInputOutput16: return "StorageInputOutput16";
  case Capability::CapabilityDeviceGroup: return "DeviceGroup";
  case Capability::CapabilityMultiView: return "MultiView";
  case Capability::CapabilityVariablePointersStorageBuffer: return "VariablePointersStorageBuffer";
  case Capability::CapabilityVariablePointers: return "VariablePointers";
  case Capability::CapabilityAtomicStorageOps: return "AtomicStorageOps";
  case Capability::CapabilitySampleMaskPostDepthCoverage: return "SampleMaskPostDepthCoverage";
  case Capability::CapabilityStorageBuffer8BitAccess: return "StorageBuffer8BitAccess";
  case Capability::CapabilityUniformAndStorageBuffer8BitAccess: return "UniformAndStorageBuffer8BitAccess";
  case Capability::CapabilityStoragePushConstant8: return "StoragePushConstant8";
  case Capability::CapabilityDenormPreserve: return "DenormPreserve";
  case Capability::CapabilityDenormFlushToZero: return "DenormFlushToZero";
  case Capability::CapabilitySignedZeroInfNanPreserve: return "SignedZeroInfNanPreserve";
  case Capability::CapabilityRoundingModeRTE: return "RoundingModeRTE";
  case Capability::CapabilityRoundingModeRTZ: return "RoundingModeRTZ";
  case Capability::CapabilityRayQueryProvisionalKHR: return "RayQueryProvisionalKHR";
  case Capability::CapabilityRayQueryKHR: return "RayQueryKHR";
  case Capability::CapabilityRayTraversalPrimitiveCullingKHR: return "RayTraversalPrimitiveCullingKHR";
  case Capability::CapabilityRayTracingKHR: return "RayTracingKHR";
  case Capability::CapabilityFloat16ImageAMD: return "Float16ImageAMD";
  case Capability::CapabilityImageGatherBiasLodAMD: return "ImageGatherBiasLodAMD";
  case Capability::CapabilityFragmentMaskAMD: return "FragmentMaskAMD";
  case Capability::CapabilityStencilExportEXT: return "StencilExportEXT";
  case Capability::CapabilityImageReadWriteLodAMD: return "ImageReadWriteLodAMD";
  case Capability::CapabilityInt64ImageEXT: return "Int64ImageEXT";
  case Capability::CapabilityShaderClockKHR: return "ShaderClockKHR";
  case Capability::CapabilitySampleMaskOverrideCoverageNV: return "SampleMaskOverrideCoverageNV";
  case Capability::CapabilityGeometryShaderPassthroughNV: return "GeometryShaderPassthroughNV";
  case Capability::CapabilityShaderViewportIndexLayerEXT: return "ShaderViewportIndexLayerEXT";
  case Capability::CapabilityShaderViewportMaskNV: return "ShaderViewportMaskNV";
  case Capability::CapabilityShaderStereoViewNV: return "ShaderStereoViewNV";
  case Capability::CapabilityPerViewAttributesNV: return "PerViewAttributesNV";
  case Capability::CapabilityFragmentFullyCoveredEXT: return "FragmentFullyCoveredEXT";
  case Capability::CapabilityMeshShadingNV: return "MeshShadingNV";
  case Capability::CapabilityImageFootprintNV: return "ImageFootprintNV";
  case Capability::CapabilityFragmentBarycentricNV: return "FragmentBarycentricNV";
  case Capability::CapabilityComputeDerivativeGroupQuadsNV: return "ComputeDerivativeGroupQuadsNV";
  case Capability::CapabilityFragmentDensityEXT: return "FragmentDensityEXT";
  case Capability::CapabilityGroupNonUniformPartitionedNV: return "GroupNonUniformPartitionedNV";
  case Capability::CapabilityShaderNonUniform: return "ShaderNonUniform";
  case Capability::CapabilityRuntimeDescriptorArray: return "RuntimeDescriptorArray";
  case Capability::CapabilityInputAttachmentArrayDynamicIndexing: return "InputAttachmentArrayDynamicIndexing";
  case Capability::CapabilityUniformTexelBufferArrayDynamicIndexing: return "UniformTexelBufferArrayDynamicIndexing";
  case Capability::CapabilityStorageTexelBufferArrayDynamicIndexing: return "StorageTexelBufferArrayDynamicIndexing";
  case Capability::CapabilityUniformBufferArrayNonUniformIndexing: return "UniformBufferArrayNonUniformIndexing";
  case Capability::CapabilitySampledImageArrayNonUniformIndexing: return "SampledImageArrayNonUniformIndexing";
  case Capability::CapabilityStorageBufferArrayNonUniformIndexing: return "StorageBufferArrayNonUniformIndexing";
  case Capability::CapabilityStorageImageArrayNonUniformIndexing: return "StorageImageArrayNonUniformIndexing";
  case Capability::CapabilityInputAttachmentArrayNonUniformIndexing: return "InputAttachmentArrayNonUniformIndexing";
  case Capability::CapabilityUniformTexelBufferArrayNonUniformIndexing: return "UniformTexelBufferArrayNonUniformIndexing";
  case Capability::CapabilityStorageTexelBufferArrayNonUniformIndexing: return "StorageTexelBufferArrayNonUniformIndexing";
  case Capability::CapabilityRayTracingNV: return "RayTracingNV";
  case Capability::CapabilityVulkanMemoryModel: return "VulkanMemoryModel";
  case Capability::CapabilityVulkanMemoryModelDeviceScope: return "VulkanMemoryModelDeviceScope";
  case Capability::CapabilityPhysicalStorageBufferAddresses: return "PhysicalStorageBufferAddresses";
  case Capability::CapabilityComputeDerivativeGroupLinearNV: return "ComputeDerivativeGroupLinearNV";
  case Capability::CapabilityRayTracingProvisionalKHR: return "RayTracingProvisionalKHR";
  case Capability::CapabilityCooperativeMatrixNV: return "CooperativeMatrixNV";
  case Capability::CapabilityFragmentShaderSampleInterlockEXT: return "FragmentShaderSampleInterlockEXT";
  case Capability::CapabilityFragmentShaderShadingRateInterlockEXT: return "FragmentShaderShadingRateInterlockEXT";
  case Capability::CapabilityShaderSMBuiltinsNV: return "ShaderSMBuiltinsNV";
  case Capability::CapabilityFragmentShaderPixelInterlockEXT: return "FragmentShaderPixelInterlockEXT";
  case Capability::CapabilityDemoteToHelperInvocationEXT: return "DemoteToHelperInvocationEXT";
  case Capability::CapabilitySubgroupShuffleINTEL: return "SubgroupShuffleINTEL";
  case Capability::CapabilitySubgroupBufferBlockIOINTEL: return "SubgroupBufferBlockIOINTEL";
  case Capability::CapabilitySubgroupImageBlockIOINTEL: return "SubgroupImageBlockIOINTEL";
  case Capability::CapabilitySubgroupImageMediaBlockIOINTEL: return "SubgroupImageMediaBlockIOINTEL";
  case Capability::CapabilityIntegerFunctions2INTEL: return "IntegerFunctions2INTEL";
  case Capability::CapabilityFunctionPointersINTEL: return "FunctionPointersINTEL";
  case Capability::CapabilityIndirectReferencesINTEL: return "IndirectReferencesINTEL";
  case Capability::CapabilitySubgroupAvcMotionEstimationINTEL: return "SubgroupAvcMotionEstimationINTEL";
  case Capability::CapabilitySubgroupAvcMotionEstimationIntraINTEL: return "SubgroupAvcMotionEstimationIntraINTEL";
  case Capability::CapabilitySubgroupAvcMotionEstimationChromaINTEL: return "SubgroupAvcMotionEstimationChromaINTEL";
  case Capability::CapabilityFPGAMemoryAttributesINTEL: return "FPGAMemoryAttributesINTEL";
  case Capability::CapabilityUnstructuredLoopControlsINTEL: return "UnstructuredLoopControlsINTEL";
  case Capability::CapabilityFPGALoopControlsINTEL: return "FPGALoopControlsINTEL";
  case Capability::CapabilityKernelAttributesINTEL: return "KernelAttributesINTEL";
  case Capability::CapabilityFPGAKernelAttributesINTEL: return "FPGAKernelAttributesINTEL";
  case Capability::CapabilityBlockingPipesINTEL: return "BlockingPipesINTEL";
  case Capability::CapabilityFPGARegINTEL: return "FPGARegINTEL";
  case Capability::CapabilityAtomicFloat32AddEXT: return "AtomicFloat32AddEXT";
  case Capability::CapabilityAtomicFloat64AddEXT: return "AtomicFloat64AddEXT";
  default: std::abort();
  }
}
template<>
const char* enum2str<ReservedRayFlags>(ReservedRayFlags v) {
  switch (v) {
  case ReservedRayFlags::ReservedRayFlagsNone: return "None";
  case ReservedRayFlags::ReservedRayFlagsOpaqueKHR: return "OpaqueKHR";
  case ReservedRayFlags::ReservedRayFlagsNoOpaqueKHR: return "NoOpaqueKHR";
  case ReservedRayFlags::ReservedRayFlagsTerminateOnFirstHitKHR: return "TerminateOnFirstHitKHR";
  case ReservedRayFlags::ReservedRayFlagsSkipClosestHitShaderKHR: return "SkipClosestHitShaderKHR";
  case ReservedRayFlags::ReservedRayFlagsCullBackFacingTrianglesKHR: return "CullBackFacingTrianglesKHR";
  case ReservedRayFlags::ReservedRayFlagsCullFrontFacingTrianglesKHR: return "CullFrontFacingTrianglesKHR";
  case ReservedRayFlags::ReservedRayFlagsCullOpaqueKHR: return "CullOpaqueKHR";
  case ReservedRayFlags::ReservedRayFlagsCullNoOpaqueKHR: return "CullNoOpaqueKHR";
  case ReservedRayFlags::ReservedRayFlagsSkipTrianglesKHR: return "SkipTrianglesKHR";
  case ReservedRayFlags::ReservedRayFlagsSkipAABBsKHR: return "SkipAABBsKHR";
  default: std::abort();
  }
}
template<>
const char* enum2str<ReservedRayQueryIntersection>(ReservedRayQueryIntersection v) {
  switch (v) {
  case ReservedRayQueryIntersection::ReservedRayQueryIntersectionRayQueryCandidateIntersectionKHR: return "RayQueryCandidateIntersectionKHR";
  case ReservedRayQueryIntersection::ReservedRayQueryIntersectionRayQueryCommittedIntersectionKHR: return "RayQueryCommittedIntersectionKHR";
  default: std::abort();
  }
}
template<>
const char* enum2str<ReservedRayQueryCommittedType>(ReservedRayQueryCommittedType v) {
  switch (v) {
  case ReservedRayQueryCommittedType::ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionNoneKHR: return "RayQueryCommittedIntersectionNoneKHR";
  case ReservedRayQueryCommittedType::ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionTriangleKHR: return "RayQueryCommittedIntersectionTriangleKHR";
  case ReservedRayQueryCommittedType::ReservedRayQueryCommittedTypeRayQueryCommittedIntersectionGeneratedKHR: return "RayQueryCommittedIntersectionGeneratedKHR";
  default: std::abort();
  }
}
template<>
const char* enum2str<ReservedRayQueryCandidateType>(ReservedRayQueryCandidateType v) {
  switch (v) {
  case ReservedRayQueryCandidateType::ReservedRayQueryCandidateTypeRayQueryCandidateIntersectionTriangleKHR: return "RayQueryCandidateIntersectionTriangleKHR";
  case ReservedRayQueryCandidateType::ReservedRayQueryCandidateTypeRayQueryCandidateIntersectionAABBKHR: return "RayQueryCandidateIntersectionAABBKHR";
  default: std::abort();
  }
}
template<>
const char* enum2str<ReservedFragmentShadingRate>(ReservedFragmentShadingRate v) {
  switch (v) {
  case ReservedFragmentShadingRate::ReservedFragmentShadingRateNone: return "None";
  case ReservedFragmentShadingRate::ReservedFragmentShadingRateVertical2Pixels: return "Vertical2Pixels";
  case ReservedFragmentShadingRate::ReservedFragmentShadingRateVertical4Pixels: return "Vertical4Pixels";
  case ReservedFragmentShadingRate::ReservedFragmentShadingRateHorizontal2Pixels: return "Horizontal2Pixels";
  case ReservedFragmentShadingRate::ReservedFragmentShadingRateHorizontal4Pixels: return "Horizontal4Pixels";
  default: std::abort();
  }
}
template<>
const char* enum2str<Op>(Op v) {
  switch (v) {
  case Op::OpNop: return "Nop";
  case Op::OpUndef: return "Undef";
  case Op::OpSizeOf: return "SizeOf";
  case Op::OpSourceContinued: return "SourceContinued";
  case Op::OpSource: return "Source";
  case Op::OpSourceExtension: return "SourceExtension";
  case Op::OpName: return "Name";
  case Op::OpMemberName: return "MemberName";
  case Op::OpString: return "String";
  case Op::OpLine: return "Line";
  case Op::OpNoLine: return "NoLine";
  case Op::OpModuleProcessed: return "ModuleProcessed";
  case Op::OpDecorate: return "Decorate";
  case Op::OpMemberDecorate: return "MemberDecorate";
  case Op::OpDecorationGroup: return "DecorationGroup";
  case Op::OpGroupDecorate: return "GroupDecorate";
  case Op::OpGroupMemberDecorate: return "GroupMemberDecorate";
  case Op::OpDecorateId: return "DecorateId";
  case Op::OpDecorateString: return "DecorateString";
  case Op::OpMemberDecorateString: return "MemberDecorateString";
  case Op::OpExtension: return "Extension";
  case Op::OpExtInstImport: return "ExtInstImport";
  case Op::OpExtInst: return "ExtInst";
  case Op::OpMemoryModel: return "MemoryModel";
  case Op::OpEntryPoint: return "EntryPoint";
  case Op::OpExecutionMode: return "ExecutionMode";
  case Op::OpCapability: return "Capability";
  case Op::OpExecutionModeId: return "ExecutionModeId";
  case Op::OpTypeVoid: return "TypeVoid";
  case Op::OpTypeBool: return "TypeBool";
  case Op::OpTypeInt: return "TypeInt";
  case Op::OpTypeFloat: return "TypeFloat";
  case Op::OpTypeVector: return "TypeVector";
  case Op::OpTypeMatrix: return "TypeMatrix";
  case Op::OpTypeImage: return "TypeImage";
  case Op::OpTypeSampler: return "TypeSampler";
  case Op::OpTypeSampledImage: return "TypeSampledImage";
  case Op::OpTypeArray: return "TypeArray";
  case Op::OpTypeRuntimeArray: return "TypeRuntimeArray";
  case Op::OpTypeStruct: return "TypeStruct";
  case Op::OpTypeOpaque: return "TypeOpaque";
  case Op::OpTypePointer: return "TypePointer";
  case Op::OpTypeFunction: return "TypeFunction";
  case Op::OpTypeEvent: return "TypeEvent";
  case Op::OpTypeDeviceEvent: return "TypeDeviceEvent";
  case Op::OpTypeReserveId: return "TypeReserveId";
  case Op::OpTypeQueue: return "TypeQueue";
  case Op::OpTypePipe: return "TypePipe";
  case Op::OpTypeForwardPointer: return "TypeForwardPointer";
  case Op::OpTypePipeStorage: return "TypePipeStorage";
  case Op::OpTypeNamedBarrier: return "TypeNamedBarrier";
  case Op::OpConstantTrue: return "ConstantTrue";
  case Op::OpConstantFalse: return "ConstantFalse";
  case Op::OpConstant: return "Constant";
  case Op::OpConstantComposite: return "ConstantComposite";
  case Op::OpConstantSampler: return "ConstantSampler";
  case Op::OpConstantNull: return "ConstantNull";
  case Op::OpSpecConstantTrue: return "SpecConstantTrue";
  case Op::OpSpecConstantFalse: return "SpecConstantFalse";
  case Op::OpSpecConstant: return "SpecConstant";
  case Op::OpSpecConstantComposite: return "SpecConstantComposite";
  case Op::OpSpecConstantOp: return "SpecConstantOp";
  case Op::OpVariable: return "Variable";
  case Op::OpImageTexelPointer: return "ImageTexelPointer";
  case Op::OpLoad: return "Load";
  case Op::OpStore: return "Store";
  case Op::OpCopyMemory: return "CopyMemory";
  case Op::OpCopyMemorySized: return "CopyMemorySized";
  case Op::OpAccessChain: return "AccessChain";
  case Op::OpInBoundsAccessChain: return "InBoundsAccessChain";
  case Op::OpPtrAccessChain: return "PtrAccessChain";
  case Op::OpArrayLength: return "ArrayLength";
  case Op::OpGenericPtrMemSemantics: return "GenericPtrMemSemantics";
  case Op::OpInBoundsPtrAccessChain: return "InBoundsPtrAccessChain";
  case Op::OpPtrEqual: return "PtrEqual";
  case Op::OpPtrNotEqual: return "PtrNotEqual";
  case Op::OpPtrDiff: return "PtrDiff";
  case Op::OpFunction: return "Function";
  case Op::OpFunctionParameter: return "FunctionParameter";
  case Op::OpFunctionEnd: return "FunctionEnd";
  case Op::OpFunctionCall: return "FunctionCall";
  case Op::OpSampledImage: return "SampledImage";
  case Op::OpImageSampleImplicitLod: return "ImageSampleImplicitLod";
  case Op::OpImageSampleExplicitLod: return "ImageSampleExplicitLod";
  case Op::OpImageSampleDrefImplicitLod: return "ImageSampleDrefImplicitLod";
  case Op::OpImageSampleDrefExplicitLod: return "ImageSampleDrefExplicitLod";
  case Op::OpImageSampleProjImplicitLod: return "ImageSampleProjImplicitLod";
  case Op::OpImageSampleProjExplicitLod: return "ImageSampleProjExplicitLod";
  case Op::OpImageSampleProjDrefImplicitLod: return "ImageSampleProjDrefImplicitLod";
  case Op::OpImageSampleProjDrefExplicitLod: return "ImageSampleProjDrefExplicitLod";
  case Op::OpImageFetch: return "ImageFetch";
  case Op::OpImageGather: return "ImageGather";
  case Op::OpImageDrefGather: return "ImageDrefGather";
  case Op::OpImageRead: return "ImageRead";
  case Op::OpImageWrite: return "ImageWrite";
  case Op::OpImage: return "Image";
  case Op::OpImageQueryFormat: return "ImageQueryFormat";
  case Op::OpImageQueryOrder: return "ImageQueryOrder";
  case Op::OpImageQuerySizeLod: return "ImageQuerySizeLod";
  case Op::OpImageQuerySize: return "ImageQuerySize";
  case Op::OpImageQueryLod: return "ImageQueryLod";
  case Op::OpImageQueryLevels: return "ImageQueryLevels";
  case Op::OpImageQuerySamples: return "ImageQuerySamples";
  case Op::OpImageSparseSampleImplicitLod: return "ImageSparseSampleImplicitLod";
  case Op::OpImageSparseSampleExplicitLod: return "ImageSparseSampleExplicitLod";
  case Op::OpImageSparseSampleDrefImplicitLod: return "ImageSparseSampleDrefImplicitLod";
  case Op::OpImageSparseSampleDrefExplicitLod: return "ImageSparseSampleDrefExplicitLod";
  case Op::OpImageSparseSampleProjImplicitLod: return "ImageSparseSampleProjImplicitLod";
  case Op::OpImageSparseSampleProjExplicitLod: return "ImageSparseSampleProjExplicitLod";
  case Op::OpImageSparseSampleProjDrefImplicitLod: return "ImageSparseSampleProjDrefImplicitLod";
  case Op::OpImageSparseSampleProjDrefExplicitLod: return "ImageSparseSampleProjDrefExplicitLod";
  case Op::OpImageSparseFetch: return "ImageSparseFetch";
  case Op::OpImageSparseGather: return "ImageSparseGather";
  case Op::OpImageSparseDrefGather: return "ImageSparseDrefGather";
  case Op::OpImageSparseTexelsResident: return "ImageSparseTexelsResident";
  case Op::OpImageSparseRead: return "ImageSparseRead";
  case Op::OpImageSampleFootprintNV: return "ImageSampleFootprintNV";
  case Op::OpConvertFToU: return "ConvertFToU";
  case Op::OpConvertFToS: return "ConvertFToS";
  case Op::OpConvertSToF: return "ConvertSToF";
  case Op::OpConvertUToF: return "ConvertUToF";
  case Op::OpUConvert: return "UConvert";
  case Op::OpSConvert: return "SConvert";
  case Op::OpFConvert: return "FConvert";
  case Op::OpQuantizeToF16: return "QuantizeToF16";
  case Op::OpConvertPtrToU: return "ConvertPtrToU";
  case Op::OpSatConvertSToU: return "SatConvertSToU";
  case Op::OpSatConvertUToS: return "SatConvertUToS";
  case Op::OpConvertUToPtr: return "ConvertUToPtr";
  case Op::OpPtrCastToGeneric: return "PtrCastToGeneric";
  case Op::OpGenericCastToPtr: return "GenericCastToPtr";
  case Op::OpGenericCastToPtrExplicit: return "GenericCastToPtrExplicit";
  case Op::OpBitcast: return "Bitcast";
  case Op::OpVectorExtractDynamic: return "VectorExtractDynamic";
  case Op::OpVectorInsertDynamic: return "VectorInsertDynamic";
  case Op::OpVectorShuffle: return "VectorShuffle";
  case Op::OpCompositeConstruct: return "CompositeConstruct";
  case Op::OpCompositeExtract: return "CompositeExtract";
  case Op::OpCompositeInsert: return "CompositeInsert";
  case Op::OpCopyObject: return "CopyObject";
  case Op::OpTranspose: return "Transpose";
  case Op::OpCopyLogical: return "CopyLogical";
  case Op::OpSNegate: return "SNegate";
  case Op::OpFNegate: return "FNegate";
  case Op::OpIAdd: return "IAdd";
  case Op::OpFAdd: return "FAdd";
  case Op::OpISub: return "ISub";
  case Op::OpFSub: return "FSub";
  case Op::OpIMul: return "IMul";
  case Op::OpFMul: return "FMul";
  case Op::OpUDiv: return "UDiv";
  case Op::OpSDiv: return "SDiv";
  case Op::OpFDiv: return "FDiv";
  case Op::OpUMod: return "UMod";
  case Op::OpSRem: return "SRem";
  case Op::OpSMod: return "SMod";
  case Op::OpFRem: return "FRem";
  case Op::OpFMod: return "FMod";
  case Op::OpVectorTimesScalar: return "VectorTimesScalar";
  case Op::OpMatrixTimesScalar: return "MatrixTimesScalar";
  case Op::OpVectorTimesMatrix: return "VectorTimesMatrix";
  case Op::OpMatrixTimesVector: return "MatrixTimesVector";
  case Op::OpMatrixTimesMatrix: return "MatrixTimesMatrix";
  case Op::OpOuterProduct: return "OuterProduct";
  case Op::OpDot: return "Dot";
  case Op::OpIAddCarry: return "IAddCarry";
  case Op::OpISubBorrow: return "ISubBorrow";
  case Op::OpUMulExtended: return "UMulExtended";
  case Op::OpSMulExtended: return "SMulExtended";
  case Op::OpShiftRightLogical: return "ShiftRightLogical";
  case Op::OpShiftRightArithmetic: return "ShiftRightArithmetic";
  case Op::OpShiftLeftLogical: return "ShiftLeftLogical";
  case Op::OpBitwiseOr: return "BitwiseOr";
  case Op::OpBitwiseXor: return "BitwiseXor";
  case Op::OpBitwiseAnd: return "BitwiseAnd";
  case Op::OpNot: return "Not";
  case Op::OpBitFieldInsert: return "BitFieldInsert";
  case Op::OpBitFieldSExtract: return "BitFieldSExtract";
  case Op::OpBitFieldUExtract: return "BitFieldUExtract";
  case Op::OpBitReverse: return "BitReverse";
  case Op::OpBitCount: return "BitCount";
  case Op::OpAny: return "Any";
  case Op::OpAll: return "All";
  case Op::OpIsNan: return "IsNan";
  case Op::OpIsInf: return "IsInf";
  case Op::OpIsFinite: return "IsFinite";
  case Op::OpIsNormal: return "IsNormal";
  case Op::OpSignBitSet: return "SignBitSet";
  case Op::OpLessOrGreater: return "LessOrGreater";
  case Op::OpOrdered: return "Ordered";
  case Op::OpUnordered: return "Unordered";
  case Op::OpLogicalEqual: return "LogicalEqual";
  case Op::OpLogicalNotEqual: return "LogicalNotEqual";
  case Op::OpLogicalOr: return "LogicalOr";
  case Op::OpLogicalAnd: return "LogicalAnd";
  case Op::OpLogicalNot: return "LogicalNot";
  case Op::OpSelect: return "Select";
  case Op::OpIEqual: return "IEqual";
  case Op::OpINotEqual: return "INotEqual";
  case Op::OpUGreaterThan: return "UGreaterThan";
  case Op::OpSGreaterThan: return "SGreaterThan";
  case Op::OpUGreaterThanEqual: return "UGreaterThanEqual";
  case Op::OpSGreaterThanEqual: return "SGreaterThanEqual";
  case Op::OpULessThan: return "ULessThan";
  case Op::OpSLessThan: return "SLessThan";
  case Op::OpULessThanEqual: return "ULessThanEqual";
  case Op::OpSLessThanEqual: return "SLessThanEqual";
  case Op::OpFOrdEqual: return "FOrdEqual";
  case Op::OpFUnordEqual: return "FUnordEqual";
  case Op::OpFOrdNotEqual: return "FOrdNotEqual";
  case Op::OpFUnordNotEqual: return "FUnordNotEqual";
  case Op::OpFOrdLessThan: return "FOrdLessThan";
  case Op::OpFUnordLessThan: return "FUnordLessThan";
  case Op::OpFOrdGreaterThan: return "FOrdGreaterThan";
  case Op::OpFUnordGreaterThan: return "FUnordGreaterThan";
  case Op::OpFOrdLessThanEqual: return "FOrdLessThanEqual";
  case Op::OpFUnordLessThanEqual: return "FUnordLessThanEqual";
  case Op::OpFOrdGreaterThanEqual: return "FOrdGreaterThanEqual";
  case Op::OpFUnordGreaterThanEqual: return "FUnordGreaterThanEqual";
  case Op::OpDPdx: return "DPdx";
  case Op::OpDPdy: return "DPdy";
  case Op::OpFwidth: return "Fwidth";
  case Op::OpDPdxFine: return "DPdxFine";
  case Op::OpDPdyFine: return "DPdyFine";
  case Op::OpFwidthFine: return "FwidthFine";
  case Op::OpDPdxCoarse: return "DPdxCoarse";
  case Op::OpDPdyCoarse: return "DPdyCoarse";
  case Op::OpFwidthCoarse: return "FwidthCoarse";
  case Op::OpPhi: return "Phi";
  case Op::OpLoopMerge: return "LoopMerge";
  case Op::OpSelectionMerge: return "SelectionMerge";
  case Op::OpLabel: return "Label";
  case Op::OpBranch: return "Branch";
  case Op::OpBranchConditional: return "BranchConditional";
  case Op::OpSwitch: return "Switch";
  case Op::OpKill: return "Kill";
  case Op::OpReturn: return "Return";
  case Op::OpReturnValue: return "ReturnValue";
  case Op::OpUnreachable: return "Unreachable";
  case Op::OpLifetimeStart: return "LifetimeStart";
  case Op::OpLifetimeStop: return "LifetimeStop";
  case Op::OpTerminateInvocation: return "TerminateInvocation";
  case Op::OpAtomicLoad: return "AtomicLoad";
  case Op::OpAtomicStore: return "AtomicStore";
  case Op::OpAtomicExchange: return "AtomicExchange";
  case Op::OpAtomicCompareExchange: return "AtomicCompareExchange";
  case Op::OpAtomicCompareExchangeWeak: return "AtomicCompareExchangeWeak";
  case Op::OpAtomicIIncrement: return "AtomicIIncrement";
  case Op::OpAtomicIDecrement: return "AtomicIDecrement";
  case Op::OpAtomicIAdd: return "AtomicIAdd";
  case Op::OpAtomicISub: return "AtomicISub";
  case Op::OpAtomicSMin: return "AtomicSMin";
  case Op::OpAtomicUMin: return "AtomicUMin";
  case Op::OpAtomicSMax: return "AtomicSMax";
  case Op::OpAtomicUMax: return "AtomicUMax";
  case Op::OpAtomicAnd: return "AtomicAnd";
  case Op::OpAtomicOr: return "AtomicOr";
  case Op::OpAtomicXor: return "AtomicXor";
  case Op::OpAtomicFlagTestAndSet: return "AtomicFlagTestAndSet";
  case Op::OpAtomicFlagClear: return "AtomicFlagClear";
  case Op::OpAtomicFAddEXT: return "AtomicFAddEXT";
  case Op::OpEmitVertex: return "EmitVertex";
  case Op::OpEndPrimitive: return "EndPrimitive";
  case Op::OpEmitStreamVertex: return "EmitStreamVertex";
  case Op::OpEndStreamPrimitive: return "EndStreamPrimitive";
  case Op::OpControlBarrier: return "ControlBarrier";
  case Op::OpMemoryBarrier: return "MemoryBarrier";
  case Op::OpNamedBarrierInitialize: return "NamedBarrierInitialize";
  case Op::OpMemoryNamedBarrier: return "MemoryNamedBarrier";
  case Op::OpGroupAsyncCopy: return "GroupAsyncCopy";
  case Op::OpGroupWaitEvents: return "GroupWaitEvents";
  case Op::OpGroupAll: return "GroupAll";
  case Op::OpGroupAny: return "GroupAny";
  case Op::OpGroupBroadcast: return "GroupBroadcast";
  case Op::OpGroupIAdd: return "GroupIAdd";
  case Op::OpGroupFAdd: return "GroupFAdd";
  case Op::OpGroupFMin: return "GroupFMin";
  case Op::OpGroupUMin: return "GroupUMin";
  case Op::OpGroupSMin: return "GroupSMin";
  case Op::OpGroupFMax: return "GroupFMax";
  case Op::OpGroupUMax: return "GroupUMax";
  case Op::OpGroupSMax: return "GroupSMax";
  case Op::OpSubgroupBallotKHR: return "SubgroupBallotKHR";
  case Op::OpSubgroupFirstInvocationKHR: return "SubgroupFirstInvocationKHR";
  case Op::OpSubgroupAllKHR: return "SubgroupAllKHR";
  case Op::OpSubgroupAnyKHR: return "SubgroupAnyKHR";
  case Op::OpSubgroupAllEqualKHR: return "SubgroupAllEqualKHR";
  case Op::OpSubgroupReadInvocationKHR: return "SubgroupReadInvocationKHR";
  case Op::OpGroupIAddNonUniformAMD: return "GroupIAddNonUniformAMD";
  case Op::OpGroupFAddNonUniformAMD: return "GroupFAddNonUniformAMD";
  case Op::OpGroupFMinNonUniformAMD: return "GroupFMinNonUniformAMD";
  case Op::OpGroupUMinNonUniformAMD: return "GroupUMinNonUniformAMD";
  case Op::OpGroupSMinNonUniformAMD: return "GroupSMinNonUniformAMD";
  case Op::OpGroupFMaxNonUniformAMD: return "GroupFMaxNonUniformAMD";
  case Op::OpGroupUMaxNonUniformAMD: return "GroupUMaxNonUniformAMD";
  case Op::OpGroupSMaxNonUniformAMD: return "GroupSMaxNonUniformAMD";
  case Op::OpSubgroupShuffleINTEL: return "SubgroupShuffleINTEL";
  case Op::OpSubgroupShuffleDownINTEL: return "SubgroupShuffleDownINTEL";
  case Op::OpSubgroupShuffleUpINTEL: return "SubgroupShuffleUpINTEL";
  case Op::OpSubgroupShuffleXorINTEL: return "SubgroupShuffleXorINTEL";
  case Op::OpSubgroupBlockReadINTEL: return "SubgroupBlockReadINTEL";
  case Op::OpSubgroupBlockWriteINTEL: return "SubgroupBlockWriteINTEL";
  case Op::OpSubgroupImageBlockReadINTEL: return "SubgroupImageBlockReadINTEL";
  case Op::OpSubgroupImageBlockWriteINTEL: return "SubgroupImageBlockWriteINTEL";
  case Op::OpSubgroupImageMediaBlockReadINTEL: return "SubgroupImageMediaBlockReadINTEL";
  case Op::OpSubgroupImageMediaBlockWriteINTEL: return "SubgroupImageMediaBlockWriteINTEL";
  case Op::OpEnqueueMarker: return "EnqueueMarker";
  case Op::OpEnqueueKernel: return "EnqueueKernel";
  case Op::OpGetKernelNDrangeSubGroupCount: return "GetKernelNDrangeSubGroupCount";
  case Op::OpGetKernelNDrangeMaxSubGroupSize: return "GetKernelNDrangeMaxSubGroupSize";
  case Op::OpGetKernelWorkGroupSize: return "GetKernelWorkGroupSize";
  case Op::OpGetKernelPreferredWorkGroupSizeMultiple: return "GetKernelPreferredWorkGroupSizeMultiple";
  case Op::OpRetainEvent: return "RetainEvent";
  case Op::OpReleaseEvent: return "ReleaseEvent";
  case Op::OpCreateUserEvent: return "CreateUserEvent";
  case Op::OpIsValidEvent: return "IsValidEvent";
  case Op::OpSetUserEventStatus: return "SetUserEventStatus";
  case Op::OpCaptureEventProfilingInfo: return "CaptureEventProfilingInfo";
  case Op::OpGetDefaultQueue: return "GetDefaultQueue";
  case Op::OpBuildNDRange: return "BuildNDRange";
  case Op::OpGetKernelLocalSizeForSubgroupCount: return "GetKernelLocalSizeForSubgroupCount";
  case Op::OpGetKernelMaxNumSubgroups: return "GetKernelMaxNumSubgroups";
  case Op::OpReadPipe: return "ReadPipe";
  case Op::OpWritePipe: return "WritePipe";
  case Op::OpReservedReadPipe: return "ReservedReadPipe";
  case Op::OpReservedWritePipe: return "ReservedWritePipe";
  case Op::OpReserveReadPipePackets: return "ReserveReadPipePackets";
  case Op::OpReserveWritePipePackets: return "ReserveWritePipePackets";
  case Op::OpCommitReadPipe: return "CommitReadPipe";
  case Op::OpCommitWritePipe: return "CommitWritePipe";
  case Op::OpIsValidReserveId: return "IsValidReserveId";
  case Op::OpGetNumPipePackets: return "GetNumPipePackets";
  case Op::OpGetMaxPipePackets: return "GetMaxPipePackets";
  case Op::OpGroupReserveReadPipePackets: return "GroupReserveReadPipePackets";
  case Op::OpGroupReserveWritePipePackets: return "GroupReserveWritePipePackets";
  case Op::OpGroupCommitReadPipe: return "GroupCommitReadPipe";
  case Op::OpGroupCommitWritePipe: return "GroupCommitWritePipe";
  case Op::OpConstantPipeStorage: return "ConstantPipeStorage";
  case Op::OpCreatePipeFromPipeStorage: return "CreatePipeFromPipeStorage";
  case Op::OpReadPipeBlockingINTEL: return "ReadPipeBlockingINTEL";
  case Op::OpWritePipeBlockingINTEL: return "WritePipeBlockingINTEL";
  case Op::OpGroupNonUniformElect: return "GroupNonUniformElect";
  case Op::OpGroupNonUniformAll: return "GroupNonUniformAll";
  case Op::OpGroupNonUniformAny: return "GroupNonUniformAny";
  case Op::OpGroupNonUniformAllEqual: return "GroupNonUniformAllEqual";
  case Op::OpGroupNonUniformBroadcast: return "GroupNonUniformBroadcast";
  case Op::OpGroupNonUniformBroadcastFirst: return "GroupNonUniformBroadcastFirst";
  case Op::OpGroupNonUniformBallot: return "GroupNonUniformBallot";
  case Op::OpGroupNonUniformInverseBallot: return "GroupNonUniformInverseBallot";
  case Op::OpGroupNonUniformBallotBitExtract: return "GroupNonUniformBallotBitExtract";
  case Op::OpGroupNonUniformBallotBitCount: return "GroupNonUniformBallotBitCount";
  case Op::OpGroupNonUniformBallotFindLSB: return "GroupNonUniformBallotFindLSB";
  case Op::OpGroupNonUniformBallotFindMSB: return "GroupNonUniformBallotFindMSB";
  case Op::OpGroupNonUniformShuffle: return "GroupNonUniformShuffle";
  case Op::OpGroupNonUniformShuffleXor: return "GroupNonUniformShuffleXor";
  case Op::OpGroupNonUniformShuffleUp: return "GroupNonUniformShuffleUp";
  case Op::OpGroupNonUniformShuffleDown: return "GroupNonUniformShuffleDown";
  case Op::OpGroupNonUniformIAdd: return "GroupNonUniformIAdd";
  case Op::OpGroupNonUniformFAdd: return "GroupNonUniformFAdd";
  case Op::OpGroupNonUniformIMul: return "GroupNonUniformIMul";
  case Op::OpGroupNonUniformFMul: return "GroupNonUniformFMul";
  case Op::OpGroupNonUniformSMin: return "GroupNonUniformSMin";
  case Op::OpGroupNonUniformUMin: return "GroupNonUniformUMin";
  case Op::OpGroupNonUniformFMin: return "GroupNonUniformFMin";
  case Op::OpGroupNonUniformSMax: return "GroupNonUniformSMax";
  case Op::OpGroupNonUniformUMax: return "GroupNonUniformUMax";
  case Op::OpGroupNonUniformFMax: return "GroupNonUniformFMax";
  case Op::OpGroupNonUniformBitwiseAnd: return "GroupNonUniformBitwiseAnd";
  case Op::OpGroupNonUniformBitwiseOr: return "GroupNonUniformBitwiseOr";
  case Op::OpGroupNonUniformBitwiseXor: return "GroupNonUniformBitwiseXor";
  case Op::OpGroupNonUniformLogicalAnd: return "GroupNonUniformLogicalAnd";
  case Op::OpGroupNonUniformLogicalOr: return "GroupNonUniformLogicalOr";
  case Op::OpGroupNonUniformLogicalXor: return "GroupNonUniformLogicalXor";
  case Op::OpGroupNonUniformQuadBroadcast: return "GroupNonUniformQuadBroadcast";
  case Op::OpGroupNonUniformQuadSwap: return "GroupNonUniformQuadSwap";
  case Op::OpGroupNonUniformPartitionNV: return "GroupNonUniformPartitionNV";
  case Op::OpTraceRayKHR: return "TraceRayKHR";
  case Op::OpExecuteCallableKHR: return "ExecuteCallableKHR";
  case Op::OpConvertUToAccelerationStructureKHR: return "ConvertUToAccelerationStructureKHR";
  case Op::OpIgnoreIntersectionKHR: return "IgnoreIntersectionKHR";
  case Op::OpTerminateRayKHR: return "TerminateRayKHR";
  case Op::OpTypeRayQueryKHR: return "TypeRayQueryKHR";
  case Op::OpRayQueryInitializeKHR: return "RayQueryInitializeKHR";
  case Op::OpRayQueryTerminateKHR: return "RayQueryTerminateKHR";
  case Op::OpRayQueryGenerateIntersectionKHR: return "RayQueryGenerateIntersectionKHR";
  case Op::OpRayQueryConfirmIntersectionKHR: return "RayQueryConfirmIntersectionKHR";
  case Op::OpRayQueryProceedKHR: return "RayQueryProceedKHR";
  case Op::OpRayQueryGetIntersectionTypeKHR: return "RayQueryGetIntersectionTypeKHR";
  case Op::OpFragmentMaskFetchAMD: return "FragmentMaskFetchAMD";
  case Op::OpFragmentFetchAMD: return "FragmentFetchAMD";
  case Op::OpReadClockKHR: return "ReadClockKHR";
  case Op::OpWritePackedPrimitiveIndices4x8NV: return "WritePackedPrimitiveIndices4x8NV";
  case Op::OpReportIntersectionNV: return "ReportIntersectionNV";
  case Op::OpIgnoreIntersectionNV: return "IgnoreIntersectionNV";
  case Op::OpTerminateRayNV: return "TerminateRayNV";
  case Op::OpTraceNV: return "TraceNV";
  case Op::OpTypeAccelerationStructureNV: return "TypeAccelerationStructureNV";
  case Op::OpExecuteCallableNV: return "ExecuteCallableNV";
  case Op::OpTypeCooperativeMatrixNV: return "TypeCooperativeMatrixNV";
  case Op::OpCooperativeMatrixLoadNV: return "CooperativeMatrixLoadNV";
  case Op::OpCooperativeMatrixStoreNV: return "CooperativeMatrixStoreNV";
  case Op::OpCooperativeMatrixMulAddNV: return "CooperativeMatrixMulAddNV";
  case Op::OpCooperativeMatrixLengthNV: return "CooperativeMatrixLengthNV";
  case Op::OpBeginInvocationInterlockEXT: return "BeginInvocationInterlockEXT";
  case Op::OpEndInvocationInterlockEXT: return "EndInvocationInterlockEXT";
  case Op::OpDemoteToHelperInvocationEXT: return "DemoteToHelperInvocationEXT";
  case Op::OpIsHelperInvocationEXT: return "IsHelperInvocationEXT";
  case Op::OpUCountLeadingZerosINTEL: return "UCountLeadingZerosINTEL";
  case Op::OpUCountTrailingZerosINTEL: return "UCountTrailingZerosINTEL";
  case Op::OpAbsISubINTEL: return "AbsISubINTEL";
  case Op::OpAbsUSubINTEL: return "AbsUSubINTEL";
  case Op::OpIAddSatINTEL: return "IAddSatINTEL";
  case Op::OpUAddSatINTEL: return "UAddSatINTEL";
  case Op::OpIAverageINTEL: return "IAverageINTEL";
  case Op::OpUAverageINTEL: return "UAverageINTEL";
  case Op::OpIAverageRoundedINTEL: return "IAverageRoundedINTEL";
  case Op::OpUAverageRoundedINTEL: return "UAverageRoundedINTEL";
  case Op::OpISubSatINTEL: return "ISubSatINTEL";
  case Op::OpUSubSatINTEL: return "USubSatINTEL";
  case Op::OpIMul32x16INTEL: return "IMul32x16INTEL";
  case Op::OpUMul32x16INTEL: return "UMul32x16INTEL";
  case Op::OpLoopControlINTEL: return "LoopControlINTEL";
  case Op::OpFPGARegINTEL: return "FPGARegINTEL";
  case Op::OpRayQueryGetRayTMinKHR: return "RayQueryGetRayTMinKHR";
  case Op::OpRayQueryGetRayFlagsKHR: return "RayQueryGetRayFlagsKHR";
  case Op::OpRayQueryGetIntersectionTKHR: return "RayQueryGetIntersectionTKHR";
  case Op::OpRayQueryGetIntersectionInstanceCustomIndexKHR: return "RayQueryGetIntersectionInstanceCustomIndexKHR";
  case Op::OpRayQueryGetIntersectionInstanceIdKHR: return "RayQueryGetIntersectionInstanceIdKHR";
  case Op::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR: return "RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR";
  case Op::OpRayQueryGetIntersectionGeometryIndexKHR: return "RayQueryGetIntersectionGeometryIndexKHR";
  case Op::OpRayQueryGetIntersectionPrimitiveIndexKHR: return "RayQueryGetIntersectionPrimitiveIndexKHR";
  case Op::OpRayQueryGetIntersectionBarycentricsKHR: return "RayQueryGetIntersectionBarycentricsKHR";
  case Op::OpRayQueryGetIntersectionFrontFaceKHR: return "RayQueryGetIntersectionFrontFaceKHR";
  case Op::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR: return "RayQueryGetIntersectionCandidateAABBOpaqueKHR";
  case Op::OpRayQueryGetIntersectionObjectRayDirectionKHR: return "RayQueryGetIntersectionObjectRayDirectionKHR";
  case Op::OpRayQueryGetIntersectionObjectRayOriginKHR: return "RayQueryGetIntersectionObjectRayOriginKHR";
  case Op::OpRayQueryGetWorldRayDirectionKHR: return "RayQueryGetWorldRayDirectionKHR";
  case Op::OpRayQueryGetWorldRayOriginKHR: return "RayQueryGetWorldRayOriginKHR";
  case Op::OpRayQueryGetIntersectionObjectToWorldKHR: return "RayQueryGetIntersectionObjectToWorldKHR";
  case Op::OpRayQueryGetIntersectionWorldToObjectKHR: return "RayQueryGetIntersectionWorldToObjectKHR";
  default: std::abort();
  }
}
} // namespace tinyspv
