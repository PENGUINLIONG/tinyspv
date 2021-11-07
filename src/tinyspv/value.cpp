// # Value Registry
// @PENGUINLIONG
#include "tinyspv/value.hpp"
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

Value::~Value() { ty.reset(); }
Variable::~Variable() { Value::~Value(); }
Constant::~Constant() { Value::~Value(); }
CompositeConstant::~CompositeConstant() {
  decltype(constituents)().swap(constituents);
  Value::~Value();
}

} // namespace tinyspv
