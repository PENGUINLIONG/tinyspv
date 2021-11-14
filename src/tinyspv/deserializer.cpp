// # SPIR-V Binary Deserializer
// @PENGUINLIONG
#include "tinyspv/deserializer.hpp"

namespace tinyspv {

bool Deserializer::deserialize_ty(const Instruction& instr) {
  using tinyspv::serde::deserialize_instr;

  switch (instr.opcode()) {
  case OpTypeVoid:
  {
    auto op = deserialize_instr<instrs::OpTypeVoid>(instr);
    reg_ty(op.result_id, VoidType());
    break;
  }
  case OpTypeBool:
  {
    auto op = deserialize_instr<instrs::OpTypeBool>(instr);
    reg_ty(op.result_id, BooleanType(1));
    break;
  }
  case OpTypeInt:
  {
    auto op = deserialize_instr<instrs::OpTypeInt>(instr);
    reg_ty(op.result_id, IntegerType(op.width, 1, op.signedness));
    break;
  }
  case OpTypeFloat:
  {
    auto op = deserialize_instr<instrs::OpTypeFloat>(instr);
    reg_ty(op.result_id, FloatType(op.width, 1));
    break;
  }
  case OpTypeVector:
  {
    auto op = deserialize_instr<instrs::OpTypeVector>(instr);
    const std::shared_ptr<Type>& component_ty = get_ty(op.component_type);
    if (component_ty->is_bool_ty()) {
      const BooleanType& bool_ty = component_ty->as_bool_ty();
      assert(bool_ty.nlane == 1);
      reg_ty(op.result_id, BooleanType(op.component_count));
    } if (component_ty->is_int_ty()) {
      const IntegerType& int_ty = component_ty->as_int_ty();
      assert(int_ty.nlane == 1);
      reg_ty(op.result_id,
        IntegerType(int_ty.bit_width, op.component_count, int_ty.is_signed));
    } else if (component_ty->is_float_ty()) {
      const FloatType& float_ty = component_ty->as_float_ty();
      assert(float_ty.nlane == 1);
      reg_ty(op.result_id, FloatType(float_ty.bit_width, op.component_count));
    } else {
      std::abort();
    }
    break;
  }
  case OpTypeMatrix:
  {
    auto op = deserialize_instr<instrs::OpTypeMatrix>(instr);
    const auto& column_ty = get_ty(op.column_type);
    assert(column_ty->is_prim_ty());
    auto prim_ty = std::static_pointer_cast<PrimType>(column_ty);
    reg_ty(op.result_id, MatrixType(prim_ty, op.column_count));
    break;
  }
  case OpTypeImage:
  {
    auto op = deserialize_instr<instrs::OpTypeImage>(instr);
    reg_ty(op.result_id, ImageType(get_ty(op.sampled_type), op.dim,
      (ImageType::DepthOption)op.depth, op.arrayed, op.ms,
      (ImageType::SampledOption)op.sampled, op.image_format,
      op.access_qualifier));
    break;
  }
  case OpTypeSampler:
  {
    auto op = deserialize_instr<instrs::OpTypeSampler>(instr);
    reg_ty(op.result_id, SamplerType());
    break;
  }
  case OpTypeSampledImage:
  {
    auto op = deserialize_instr<instrs::OpTypeSampledImage>(instr);
    reg_ty(op.result_id, SampledImageType(get_ty(op.image_type)));
    break;
  }
  case OpTypeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeArray>(instr);
    reg_ty(op.result_id, ArrayType(get_ty(op.element_type), op.length));
    break;
  }
  case OpTypeRuntimeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeRuntimeArray>(instr);
    reg_ty(op.result_id, ArrayType(get_ty(op.element_type), ArrayType::UNSIZED));
    break;
  }
  case OpTypeStruct:
  {
    auto op = deserialize_instr<instrs::OpTypeStruct>(instr);
    std::vector<std::shared_ptr<Type>> members;
    members.reserve(op.member_type.size());
    for (const auto& member_type : op.member_type) {
      members.emplace_back(get_ty(member_type));
    }
    reg_ty(op.result_id, StructType(std::move(members)));
    break;
  }
  case OpTypePointer:
  {
    auto op = deserialize_instr<instrs::OpTypePointer>(instr);
    reg_ty(op.result_id, PointerType(op.storage_class, get_ty(op.type)));
    break;
  }
  case OpTypeFunction:
  {
    auto op = deserialize_instr<instrs::OpTypeFunction>(instr);
    std::vector<std::shared_ptr<Type>> param_tys;
    for (const auto& param_ty : op.parameter_type) {
      param_tys.emplace_back(get_ty(param_ty));
    }
    reg_ty(op.result_id, FunctionType(get_ty(op.return_type), param_tys));
    break;
  }
  default:
    return false;
  }
  return true;
}

bool Deserializer::deserialize_val(const Instruction& instr) {

  using tinyspv::serde::deserialize_instr;

  switch (instr.opcode()) {
  case OpConstantTrue:
  {
    auto op = deserialize_instr<instrs::OpConstantTrue>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr && ty->is_bool_ty());
    reg_val(op.result_id, Constant(ty, 1));
    break;
  }
  case OpConstantFalse:
  {
    auto op = deserialize_instr<instrs::OpConstantFalse>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr && ty->is_bool_ty());
    reg_val(op.result_id, Constant(ty, 0));
    break;
  }
  case OpConstant:
  {
    auto op = deserialize_instr<instrs::OpConstant>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr && (ty->is_int_ty() || ty->is_float_ty()));
    switch (op.value.size()) {
    case 1:
    {
      reg_val(op.result_id, Constant(ty, op.value[0]));
      break;
    }
    case 2:
    {
      uint64_t value;
      std::memcpy(&value, op.value.data(), sizeof(uint64_t));
      reg_val(op.result_id, Constant(ty, value));
      break;
    }
    default: std::abort();
    }
    break;
  }
  case OpConstantComposite:
  {
    auto op = deserialize_instr<instrs::OpConstantComposite>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr);
    std::vector<std::shared_ptr<Expr>> constituents;
    constituents.reserve(op.constituents.size());
    for (auto constituent : op.constituents) {
      const auto& val = expr_by_result_id[constituent];
      assert(val != nullptr);
      constituents.emplace_back(val);
    }
    switch (ty->code) {
    case Type::STRUCT:
    {
      auto struct_ty = std::static_pointer_cast<StructType>(ty);
      assert(struct_ty->member_tys.size() == constituents.size());
      for (size_t i = 0; i < struct_ty->member_tys.size(); ++i) {
        assert(constituents[i]->ty->same_as(*struct_ty->member_tys[i]));
      }
      break;
    }
    case Type::ARRAY:
    {
      auto array_ty = std::static_pointer_cast<ArrayType>(ty);
      assert(array_ty->length == constituents.size());
      for (size_t i = 0; i < array_ty->length; ++i) {
        assert(constituents[i]->ty->same_as(*array_ty->elem_ty));
      }
      break;
    }
    case Type::BOOLEAN:
    {
      auto prim_ty = std::static_pointer_cast<PrimType>(ty);
      assert(prim_ty->nlane == constituents.size());
      for (size_t i = 0; i < prim_ty->nlane; ++i) {
        const auto& constituent_ty = constituents[i]->ty;
        assert(constituent_ty->is_bool_ty());
        assert(constituent_ty->as_bool_ty().nlane == 1);
      }
      break;
    }
    case Type::INTEGER:
    {
      auto prim_ty = std::static_pointer_cast<PrimType>(ty);
      assert(prim_ty->nlane == constituents.size());
      for (size_t i = 0; i < prim_ty->nlane; ++i) {
        const auto& constituent_ty = constituents[i]->ty;
        assert(constituent_ty->is_int_ty());
        assert(constituent_ty->as_int_ty().nlane == 1);
      }
      break;
    }
    case Type::FLOAT:
    {
      auto prim_ty = std::static_pointer_cast<PrimType>(ty);
      assert(prim_ty->nlane == constituents.size());
      for (size_t i = 0; i < prim_ty->nlane; ++i) {
        const auto& constituent_ty = constituents[i]->ty;
        assert(constituent_ty->is_float_ty());
        assert(constituent_ty->as_float_ty().nlane == 1);
      }
      break;
    }
    case Type::MATRIX:
    {
      auto matrix_ty = std::static_pointer_cast<MatrixType>(ty);
      assert(matrix_ty->ncolumn == constituents.size());
      for (size_t i = 0; i < matrix_ty->ncolumn; ++i) {
        assert(constituents[i]->ty->same_as(*matrix_ty->column_ty));
      }
      break;
    }
    default: std::abort; break;
    }
    reg_val(op.result_id, Composite(ty, std::move(constituents)));
    break;
  }
  case OpVariable:
  {
    auto op = deserialize_instr<instrs::OpVariable>(instr);
    reg_val(op.result_id, Variable(op.storage_class, get_ty(op.result_type)));
    break;
  }
  case OpLoad:
  {
    auto op = deserialize_instr<instrs::OpLoad>(instr);
    reg_val(op.result_id, Load(get_expr(op.pointer), get_ty(op.result_type)));
    break;
  }
  default: return false;
  }
  return true;
}

std::string Deserializer::dbg() const {
  std::stringstream ss;
  {
    ss << "TypeRegistry {" << std::endl;
    for (const auto& pair : ty_by_result_id) {
      uint32_t result_id = pair.first;
      ss << " " << result_id << ": " << pair.second->name << std::endl;
    }
    ss << "}";
  }
  return ss.str();
}

} // namespace tinyspv
