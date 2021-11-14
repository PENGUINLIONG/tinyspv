// # Value Registry
// @PENGUINLIONG
#include "tinyspv/expr.hpp"
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

Expr::~Expr() { ty.reset(); }
Variable::~Variable() { Expr::~Expr(); }
Constant::~Constant() { Expr::~Expr(); }
Composite::~Composite() {
  decltype(constituents)().swap(constituents);
  Expr::~Expr();
}

Convert::~Convert() {
  src.reset();
  Expr::~Expr();
}

#define L_DEF_BINARY_OP_EXPR_DTOR(expr_name) \
  expr_name::~expr_name() { \
    src1.reset(); \
    src2.reset(); \
    Expr::~Expr(); \
  }

L_DEF_BINARY_OP_EXPR_DTOR(Add);
L_DEF_BINARY_OP_EXPR_DTOR(Sub);
L_DEF_BINARY_OP_EXPR_DTOR(Mul);
L_DEF_BINARY_OP_EXPR_DTOR(Div);
L_DEF_BINARY_OP_EXPR_DTOR(Rem);
L_DEF_BINARY_OP_EXPR_DTOR(Mod);

L_DEF_BINARY_OP_EXPR_DTOR(Dot);

#define L_DEF_SHIFT_OP_EXPR_DTOR(expr_name) \
  expr_name::~expr_name() { \
    base.reset(); \
    shamt.reset(); \
    Expr::~Expr(); \
  }

L_DEF_SHIFT_OP_EXPR_DTOR(Rsh);
L_DEF_SHIFT_OP_EXPR_DTOR(Lsh);

#undef L_DEF_SHIFT_OP_EXPR_DTOR

Not::~Not() {
  src.reset();
  Expr::~Expr();
}

L_DEF_BINARY_OP_EXPR_DTOR(And);
L_DEF_BINARY_OP_EXPR_DTOR(Xor);
L_DEF_BINARY_OP_EXPR_DTOR(Or);

L_DEF_BINARY_OP_EXPR_DTOR(Eq);
L_DEF_BINARY_OP_EXPR_DTOR(Ne);
L_DEF_BINARY_OP_EXPR_DTOR(Lt);
L_DEF_BINARY_OP_EXPR_DTOR(Gt);
L_DEF_BINARY_OP_EXPR_DTOR(Le);
L_DEF_BINARY_OP_EXPR_DTOR(Ge);

#undef L_DEF_BINARY_OP_EXPR_DTOR

Load::~Load() {
  ptr.reset();
  Expr::~Expr();
}

} // namespace tinyspv
