// # Type Registry.
// @PENGUINLIONG
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "tinyspv/type.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

Type::~Type() {}
VectorType::~VectorType() { scalar_ty.reset(); }
MatrixType::~MatrixType() { column_ty.reset(); }
ImageType::~ImageType() { sampled_ty.reset(); }
SampledImageType::~SampledImageType() { image_ty.reset(); }
ArrayType::~ArrayType() { elem_ty.reset(); }
StructType::~StructType() { decltype(member_tys)().swap(member_tys); }
PointerType::~PointerType() { ty.reset(); }
FunctionType::~FunctionType() {
  return_ty.reset();
  decltype(param_tys)().swap(param_tys);
}

} // namespace tinyspv
