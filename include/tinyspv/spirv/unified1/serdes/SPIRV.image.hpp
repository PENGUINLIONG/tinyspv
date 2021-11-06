// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.image.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

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
} // namespace instrs
} // namespace tinyspv
