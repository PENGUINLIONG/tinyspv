// # SPIR-V Binary Deserializer
// @PENGUINLIONG
#include "tinyspv/type.hpp"
#include "tinyspv/expr.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

struct Deserializer {
  TypePool ty_pool;
  std::map<instrs::Id, std::shared_ptr<Type>> ty_by_result_id;
  std::map<instrs::Id, std::shared_ptr<Expr>> val_by_result_id;

  inline const std::shared_ptr<Type>& get(uint32_t result_id) {
    return ty_by_result_id[result_id];
  }
  inline const Type& operator[](uint32_t result_id) {
    return *get(result_id);
  }

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
    inline void reg_ty(instrs::Id result_id, TType&& ty) {
    ty_by_result_id[result_id] = ty_pool.reg(std::forward<TType>(ty));
  }
  template<typename TExpr,
    typename _ = std::enable_if_t<std::is_base_of_v<Expr, TExpr>>>
    inline void reg_val(instrs::Id result_id, TExpr&& val) {
    val_by_result_id[result_id] = std::static_pointer_cast<Expr>(
      std::make_shared<TExpr>(std::forward<TExpr>(val)));
  }

  bool deserialize_ty(const Instruction& instr);
  bool deserialize_val(const Instruction& instr);
  std::string dbg() const;
};

} // namespace tinyspv
