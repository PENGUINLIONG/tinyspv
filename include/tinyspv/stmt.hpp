// # Stmt Registry
// @PENGUINLIONG
#pragma once
#include <string>
#include <vector>
#include <memory>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "expr.hpp"

namespace tinyspv {

struct Label {
  // Nothing necessary here really. Label is only used by its address.
};

struct Stmt {
  enum Code {
    // Memory access.
    STORE,
    // Control-flow.
    BLOCK,
    JUMP,
    BRANCH,
    LOOP,
    // Barriers.
    BARRIER_CTRL,
    BARRIER_MEM,
  };

  const Code code;
  const char* name;

  inline Stmt(Code code, const char* name) : code(code), name(name) {}
  virtual ~Stmt();

  virtual void dbg(std::stringstream& ss, bool with_ty) const = 0;
  inline std::string dbg_str(bool with_ty) const {
    std::stringstream ss;
    dbg(ss, with_ty);
    return ss.str();
  }
};

struct Store : public Stmt {
  static constexpr Code CODE = STORE;
  std::shared_ptr<Expr> src;
  std::shared_ptr<Expr> dst;

  inline Store(
    const std::shared_ptr<Expr>& src,
    const std::shared_ptr<Expr>& dst
  ) : Stmt(CODE, "store") {
    assert(src != nullptr);
    assert(dst != nullptr);
    assert(dst->ty->is_ptr_ty() && src->ty->same_as(*dst->ty->as_ptr_ty().ty));
  }
  virtual ~Store() override final;

  virtual void dbg(std::stringstream& ss, bool with_ty) const override final;
};

struct Block : public Stmt {
  static constexpr Code CODE = BLOCK;
  std::vector<std::shared_ptr<Stmt>> stmts;

  // Unlike other statements, the block statement is first built and filled with
  // data later.
  inline Block(std::vector<std::shared_ptr<Stmt>>&& stmts) :
    stmts(std::forward<std::vector<std::shared_ptr<Stmt>>>(stmts)),
    Stmt(CODE, "blk") {}
  virtual ~Block() override final;

  virtual void dbg(std::stringstream& ss, bool with_ty) const override final;
};

struct Jump : public Stmt {
  static constexpr Code CODE = JUMP;
  std::shared_ptr<Block> dst_blk;

  inline Jump(const std::shared_ptr<Block>& dst_blk) :
    dst_blk(dst_blk), Stmt(CODE, "jmp") {}
  virtual ~Jump() override final;

  virtual void dbg(std::stringstream& ss, bool with_ty) const override final;
};

struct Branch : public Stmt {
  static constexpr Code CODE = BRANCH;
  std::shared_ptr<Expr> condition;
  std::shared_ptr<Block> then_blk;
  std::shared_ptr<Block> else_blk;

  inline Branch(
    const std::shared_ptr<Block>& then_blk,
    const std::shared_ptr<Block>& else_blk
  ) : then_blk(then_blk), else_blk(else_blk), Stmt(CODE, "branch") {}
  virtual ~Branch() override final;

  virtual void dbg(std::stringstream& ss, bool with_ty) const override final;
};

struct Loop : public Stmt {
  static constexpr Code CODE = LOOP;
  std::shared_ptr<Expr> condition;
  std::shared_ptr<Block> body_blk;
  std::shared_ptr<Block> continue_blk;
  std::shared_ptr<Block> merge_blk;

  inline Loop(
    const std::shared_ptr<Block>& body_blk,
    const std::shared_ptr<Block>& continue_blk,
    const std::shared_ptr<Block>& merge_blk
  ) :
    body_blk(body_blk),
    continue_blk(continue_blk),
    merge_blk(merge_blk),
    Stmt(CODE, "loop") {}
  virtual ~Loop() override final;

  virtual void dbg(std::stringstream& ss, bool with_ty) const override final;
};

} // namespace tinyspv
