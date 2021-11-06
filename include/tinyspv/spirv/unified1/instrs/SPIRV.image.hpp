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
} // namespace instrs
} // namespace tinyspv
