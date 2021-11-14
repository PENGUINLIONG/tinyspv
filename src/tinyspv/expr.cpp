// # Value Registry
// @PENGUINLIONG
#include "tinyspv/expr.hpp"
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

Expr::~Expr() { ty.reset(); }
Composite::~Composite() {
  decltype(constituents)().swap(constituents);
  Expr::~Expr();
}
UnaryOp::~UnaryOp() { src.reset(); Expr::~Expr(); }
BinaryOp::~BinaryOp() { src1.reset(); src2.reset(); Expr::~Expr(); }

void Expr::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name;
  if (with_ty) {
    ss << ":" << ty->name;
  }
  ss << ")";
}
void UnaryOp::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " ";
  if (with_ty) {
    ss << ":" << ty->name;
  }
  src->dbg(ss, with_ty);
  ss << ")";
}
void BinaryOp::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " ";
  if (with_ty) {
    ss << ":" << ty->name;
  }
  src1->dbg(ss, with_ty);
  ss << " ";
  src2->dbg(ss, with_ty);
  ss << ")";
}
void Constant::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " ";
  if (ty->is_bool_ty()) {
    ss << (val != 0 ? "true" : "false");
  } else if (ty->is_int_ty()) {
    const auto& int_ty = ty->as_int_ty();
    if (int_ty.is_signed) {
      if (int_ty.bit_width == 32) {
        ss << *(const int32_t*)&val;
      } else if (int_ty.bit_width == 64) {
        ss << *(const int64_t*)&val;
      } else {
        std::abort();
      }
    } else {
      if (int_ty.bit_width == 32) {
        ss << *(const uint32_t*)&val;
      } else if (int_ty.bit_width == 64) {
        ss << *(const uint64_t*)&val;
      } else {
        std::abort();
      }
    }
  } else if (ty->is_float_ty()) {
    const auto& float_ty = ty->as_float_ty();
    if (float_ty.bit_width == 32) {
      ss << *(const float*)&val;
    } else if (float_ty.bit_width == 64) {
      ss << *(const double*)&val;
    } else {
      std::abort();
    }
  }
  ss << ")";
}


} // namespace tinyspv
