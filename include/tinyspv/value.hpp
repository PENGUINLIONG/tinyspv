// # Value Registry
// @PENGUINLIONG
#pragma once
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spirv/unified1/enum2str.hpp"
#include "tinyspv/spirv/unified1/SPIRV.instrs.hpp"
#include "tinyspv/type.hpp"

namespace tinyspv {

struct Value {
  enum Code {
    VARIABLE,
    CONSTANT,
    COMPOSITE_CONSTANT,
  };
  const Code code;
  std::shared_ptr<Type> ty;
  inline Value(Code code, const std::shared_ptr<Type>& ty) :
    code(code), ty(ty) {
    assert(ty != nullptr);
  }
  virtual ~Value();
};
struct Variable : public Value {
  static constexpr Code CODE = VARIABLE;
  inline Variable(const std::shared_ptr<Type>& ty) : Value(CODE, ty) {}
  virtual ~Variable() override final;
};
struct Constant : public Value {
  static constexpr Code CODE = CONSTANT;
  // Accepting constant values of 64b at most. Values shorter than 64b is stored
  // in the lower bits.
  uint64_t value;
  inline Constant(
    const std::shared_ptr<Type>& ty,
    uint64_t value
  ) : value(value), Value(CODE, ty) {}
  virtual ~Constant() override final;
};
struct CompositeConstant : public Value {
  static constexpr Code CODE = COMPOSITE_CONSTANT;
  std::vector<std::shared_ptr<Value>> constituents;
  inline CompositeConstant(
    const std::shared_ptr<Type>& ty,
    std::vector<std::shared_ptr<Value>>&& constituents
  ) :
    constituents(std::forward<decltype(constituents)>(constituents)),
    Value(CODE, ty)
  {
    for (auto& constituent : constituents) {
      assert(constituent != nullptr);
      assert(constituent->code == CONSTANT ||
        constituent->code == COMPOSITE_CONSTANT);
    }
  }
  virtual ~CompositeConstant() override final;
};

} // namespace tinyspv
