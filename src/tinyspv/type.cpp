// # Type Registry.
// @PENGUINLIONG
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "tinyspv/type.hpp"
#include "tinyspv/expr.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

Type::~Type() {}
PrimType::~PrimType() { std::string().swap(component_name); }
MatrixType::~MatrixType() { column_ty.reset(); }
ImageType::~ImageType() { sampled_ty.reset(); }
SampledImageType::~SampledImageType() { image_ty.reset(); }

ArrayType::ArrayType(
  const std::shared_ptr<Type>& elem_ty,
  const std::shared_ptr<Expr>& length
) :
  elem_ty(elem_ty),
  length(length),
  Type(CODE, elem_ty->name + "[" +
    (length == 0 ? std::string() : length->dbg_str(false)) + "]") {}
ArrayType::~ArrayType() { elem_ty.reset(); }

StructType::~StructType() { decltype(member_tys)().swap(member_tys); }
PointerType::~PointerType() { ty.reset(); }
FunctionType::~FunctionType() {
  return_ty.reset();
  decltype(param_tys)().swap(param_tys);
}

} // namespace tinyspv
