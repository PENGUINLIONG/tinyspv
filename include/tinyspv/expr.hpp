// # Expr Registry
// @PENGUINLIONG
// TODO: (penguinliong) Add a typed reference to typed value.
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

struct Expr {
  enum Code {
    VARIABLE,
    CONSTANT,
    // Type conversion.
    CONVERT,
    // Composition operations.
    COMPOSITE,
    EXTRACT,
    SHUFFLE,
    // Element-wise arithmetic operations.
    ADD,
    SUB,
    MUL,
    DIV,
    REM,
    MOD,
    // Linear algebra composition operations.
    DOT,
    // Integer shift operations.
    RSH,
    LSH,
    // Bit-wise or logical boolean operations.
    NOT,
    AND,
    XOR,
    OR,
    // Comparison operations.
    EQ,
    NE,
    LT,
    GT,
    LE,
    GE,
    // Memory access.
    LOAD,
  };

  const Code code;
  std::shared_ptr<Type> ty;
  inline Expr(Code code, const std::shared_ptr<Type>& ty) :
    code(code), ty(ty) {
    assert(ty != nullptr);
  }
  virtual ~Expr();
};
struct Variable : public Expr {
  static constexpr Code CODE = VARIABLE;
  StorageClass storage_cls;
  inline Variable(StorageClass storage_cls, const std::shared_ptr<Type>& ty) :
    storage_cls(storage_cls), Expr(CODE, ty)
  {
    assert(storage_cls != StorageClassGeneric);
    assert(ty->is_ptr_ty());
  }
  virtual ~Variable() override final;
};
struct Constant : public Expr {
  static constexpr Code CODE = CONSTANT;
  // Accepting constant exprs of 64b at most. Exprs shorter than 64b is stored
  // in the lower bits.
  uint64_t expr;
  inline Constant(
    const std::shared_ptr<Type>& ty,
    uint64_t expr
  ) : expr(expr), Expr(CODE, ty) {}
  virtual ~Constant() override final;
};
struct Composite : public Expr {
  static constexpr Code CODE = COMPOSITE;
  std::vector<std::shared_ptr<Expr>> constituents;
  inline Composite(
    const std::shared_ptr<Type>& ty,
    std::vector<std::shared_ptr<Expr>>&& constituents
  ) :
    constituents(std::forward<decltype(constituents)>(constituents)),
    Expr(CODE, ty)
  {
    for (auto& constituent : this->constituents) {
      assert(constituent != nullptr);
    }
  }
  virtual ~Composite() override final;

  bool is_constant_composition() const {
    bool out = true;
    for (const auto& constituent : constituents) {
      out = out && (constituent->code == CONSTANT);
    }
    return out;
  }
};

struct Convert : public Expr {
  static constexpr Code CODE = CONVERT;
  std::shared_ptr<Expr> src;
  inline Convert(
    const std::shared_ptr<Expr>& src,
    const std::shared_ptr<Type>& dst_ty
  ) : src(src), Expr(CODE, dst_ty) {
    assert(src->ty->is_numeric_ty());
    assert(dst_ty->is_numeric_ty());
  }
  virtual ~Convert() override final;
};

#define L_DEF_BINARY_OP_EXPR(code, expr_name) \
  struct expr_name : public Expr { \
    static constexpr Code CODE = code; \
    std::shared_ptr<Expr> src1; \
    std::shared_ptr<Expr> src2; \
    inline expr_name( \
      const std::shared_ptr<Expr>& src1, \
      const std::shared_ptr<Expr>& src2, \
      const std::shared_ptr<Type>& dst_ty \
    ) : src1(src1), src2(src2), Expr(CODE, dst_ty) { \
      assert(src1->ty->is_numeric_ty()); \
      assert(src1->ty->same_as(*src2->ty)); \
      assert(dst_ty->is_numeric_ty()); \
    } \
    virtual ~expr_name() override final; \
  };

L_DEF_BINARY_OP_EXPR(ADD, Add);
L_DEF_BINARY_OP_EXPR(SUB, Sub);
L_DEF_BINARY_OP_EXPR(MUL, Mul);
L_DEF_BINARY_OP_EXPR(DIV, Div);
L_DEF_BINARY_OP_EXPR(REM, Rem);
L_DEF_BINARY_OP_EXPR(MOD, Mod);

#undef L_DEF_BINARY_OP_EXPR

struct Dot : public Expr {
  static constexpr Code CODE = DOT;
  std::shared_ptr<Expr> src1;
  std::shared_ptr<Expr> src2;
  inline Dot(
    const std::shared_ptr<Expr>& src1,
    const std::shared_ptr<Expr>& src2,
    const std::shared_ptr<Type>& dst_ty
  ) : src1(src1), src2(src2), Expr(CODE, dst_ty) {
    uint32_t nrow_src1 = 0, ncol_src1 = 0;
    const PrimType* src1_prim_ty = nullptr;
    if (src1->ty->is_numeric_ty()) {
      src1_prim_ty = &src1->ty->as_prim_ty();
      nrow_src1 = 1;
      ncol_src1 = src1_prim_ty->nlane;
    } else if (src1->ty->is_mat_ty()) {
      const MatrixType& src1_mat_ty = src1->ty->as_mat_ty();
      src1_prim_ty = &*src1_mat_ty.column_ty;
      nrow_src1 = src1_prim_ty->nlane;
      ncol_src1 = src1_mat_ty.ncolumn;
    } else {
      std::abort();
    }

    uint32_t nrow_src2 = 0, ncol_src2 = 0;
    const PrimType* src2_prim_ty = nullptr;
    if (src2->ty->is_numeric_ty()) {
      src2_prim_ty = &src2->ty->as_prim_ty();
      nrow_src2 = src2_prim_ty->nlane;
      ncol_src2 = 1;
    } else if (src2->ty->is_mat_ty()) {
      const MatrixType& src2_mat_ty = src2->ty->as_mat_ty();
      src1_prim_ty = &*src2_mat_ty.column_ty;
      nrow_src2 = src2_prim_ty->nlane;
      ncol_src2 = src2_mat_ty.ncolumn;
    } else {
      std::abort();
    }

    uint32_t nrow_dst = 0, ncol_dst = 0;
    const PrimType* dst_prim_ty = nullptr;
    if (dst_ty->is_numeric_ty()) {
      dst_prim_ty = &dst_ty->as_prim_ty();
      if (nrow_dst == 1) {
        nrow_dst = 1;
        ncol_dst = dst_prim_ty->nlane;
      } else if (ncol_dst == 1) {
        nrow_dst = dst_prim_ty->nlane;
        ncol_dst = 1;
      } else {
        std::abort();
      }
    } else if (dst_ty->is_mat_ty()) {
      const MatrixType& dst_mat_ty = src2->ty->as_mat_ty();
      dst_prim_ty = &*dst_mat_ty.column_ty;
      nrow_dst = dst_prim_ty->nlane;
      ncol_dst = dst_mat_ty.ncolumn;
    } else {
      std::abort();
    }

    assert(src1_prim_ty->same_component_ty_as(*src2_prim_ty));
    assert(src1_prim_ty->same_component_ty_as(*dst_prim_ty));
    assert(nrow_src1 == nrow_dst && ncol_src2 == ncol_dst);
    assert(ncol_src1 == nrow_src2);
  }
  virtual ~Dot() override final;
};

// TODO: (penguinliong) Take care of arithmetic shift right, maybe.
struct Rsh : public Expr {
  static constexpr Code CODE = RSH;
  std::shared_ptr<Expr> base;
  std::shared_ptr<Expr> shamt;
  inline Rsh(
    const std::shared_ptr<Expr>& base,
    const std::shared_ptr<Expr>& shamt,
    const std::shared_ptr<Type>& dst_ty
  ) : base(base), shamt(shamt), Expr(CODE, dst_ty) {
    assert(base->ty->is_int_ty());
    assert(shamt->ty->is_int_ty() && shamt->ty->as_int_ty().nlane == 1);
    assert(base->ty->same_as(*dst_ty));
  }
  virtual ~Rsh() override final;
};
struct Lsh : public Expr {
  static constexpr Code CODE = RSH;
  std::shared_ptr<Expr> base;
  std::shared_ptr<Expr> shamt;
  inline Lsh(
    const std::shared_ptr<Expr>& base,
    const std::shared_ptr<Expr>& shamt,
    const std::shared_ptr<Type>& dst_ty
  ) : base(base), shamt(shamt), Expr(CODE, dst_ty) {
    assert(base->ty->is_int_ty());
    assert(shamt->ty->is_int_ty() && shamt->ty->as_int_ty().nlane == 1);
    assert(base->ty->same_as(*dst_ty));
  }
  virtual ~Lsh() override final;
};

struct Not : public Expr {
  static constexpr Code CODE = NOT;
  std::shared_ptr<Expr> src;
  inline Not(
    const std::shared_ptr<Expr>& src,
    const std::shared_ptr<Type>& dst_ty
  ) : src(src), Expr(CODE, dst_ty) {
    assert(src->ty->is_int_ty() || src->ty->is_bool_ty());
    assert(src->ty->same_as(*dst_ty));
  }
  virtual ~Not() override final;
};

#define L_DEF_BINARY_LOGIC_OP(code, expr_name) \
  struct expr_name : public Expr { \
    static constexpr Code CODE = code; \
    std::shared_ptr<Expr> src1; \
    std::shared_ptr<Expr> src2; \
    inline expr_name( \
      const std::shared_ptr<Expr>& src1, \
      const std::shared_ptr<Expr>& src2, \
      const std::shared_ptr<Type>& dst_ty \
    ) : src1(src1), src2(src2), Expr(CODE, dst_ty) { \
      assert(src1->ty->is_int_ty() || src1->ty->is_bool_ty()); \
      assert(src2->ty->is_int_ty() || src2->ty->is_bool_ty()); \
      assert(src1->ty->same_as(*src2->ty)); \
      assert(src1->ty->same_as(*dst_ty)); \
    } \
    virtual ~expr_name() override final; \
  }

L_DEF_BINARY_LOGIC_OP(AND, And);
L_DEF_BINARY_LOGIC_OP(XOR, Xor);
L_DEF_BINARY_LOGIC_OP(OR, Or);

#undef L_DEF_BINARY_LOGIC_OP

#define L_DEF_BINARY_CMP_OP(code, expr_name) \
  struct expr_name : public Expr { \
    static constexpr Code CODE = code; \
    std::shared_ptr<Expr> src1; \
    std::shared_ptr<Expr> src2; \
    inline expr_name( \
      const std::shared_ptr<Expr>& src1, \
      const std::shared_ptr<Expr>& src2, \
      const std::shared_ptr<Type>& dst_ty \
    ) : src1(src1), src2(src2), Expr(CODE, dst_ty) { \
      assert(src1->ty->is_numeric_ty()); \
      assert(src2->ty->is_numeric_ty()); \
      assert(src1->ty->same_as(*src2->ty)); \
      assert(src1->ty->same_as(*dst_ty)); \
    } \
    virtual ~expr_name() override final; \
  };

L_DEF_BINARY_CMP_OP(EQ, Eq);
L_DEF_BINARY_CMP_OP(NE, Ne);
L_DEF_BINARY_CMP_OP(LT, Lt);
L_DEF_BINARY_CMP_OP(GT, Gt);
L_DEF_BINARY_CMP_OP(LE, Le);
L_DEF_BINARY_CMP_OP(GE, Ge);

#undef L_DEF_BINARY_CMP_OP

struct Load : public Expr {
  static constexpr Code CODE = LOAD;
  std::shared_ptr<Expr> ptr;
  inline Load(
    const std::shared_ptr<Expr>& ptr,
    const std::shared_ptr<Type>& dst_ty
  ) : ptr(ptr), Expr(CODE, dst_ty) {
    assert(ptr->ty->is_ptr_ty());
  }
  virtual ~Load() override final;
};


} // namespace tinyspv
