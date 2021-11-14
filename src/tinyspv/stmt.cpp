// # Stmt Registry
// @PENGUINLIONG
#include "tinyspv/stmt.hpp"

namespace tinyspv {

Stmt::~Stmt() {}
Store::~Store() { src.reset(); dst.reset(); }
Block::~Block() { decltype(stmts)().swap(stmts); }
Jump::~Jump() { dst_blk.reset(); }
Branch::~Branch() { then_blk.reset(); else_blk.reset(); }
Loop::~Loop() { body_blk.reset(); continue_blk.reset(); merge_blk.reset(); }

void Store::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " ";
  dst->dbg(ss, with_ty);
  ss << " ";
  src->dbg(ss, with_ty);
  ss << ")";
}
void Block::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << "@" << this << " ";
  bool first_iter = true;
  for (const auto& stmt : stmts) {
    if (first_iter) {
      first_iter = false;
    } else {
      ss << " ";
    }
    stmt->dbg(ss, with_ty);
  }
  ss << ")";
}
void Jump::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " " << "@" << dst_blk.get() << ")";
}
void Branch::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " " << "@" << then_blk.get() << " @" << else_blk.get()
    << ")";
}
void Loop::dbg(std::stringstream& ss, bool with_ty) const {
  ss << "(" << name << " " << "@" << body_blk.get() << " @"
    << continue_blk.get() << " @" << merge_blk.get() << ")";
}

} // namespace tinyspv
