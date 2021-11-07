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
    reg_ty(op.result_id, BooleanType());
    break;
  }
  case OpTypeInt:
  {
    auto op = deserialize_instr<instrs::OpTypeInt>(instr);
    reg_ty(op.result_id, IntegerType(op.width, op.signedness));
    break;
  }
  case OpTypeFloat:
  {
    auto op = deserialize_instr<instrs::OpTypeFloat>(instr);
    reg_ty(op.result_id, FloatType(op.width));
    break;
  }
  case OpTypeVector:
  {
    auto op = deserialize_instr<instrs::OpTypeVector>(instr);
    reg_ty(op.result_id, VectorType(get(op.component_type), op.component_count));
    break;
  }
  case OpTypeMatrix:
  {
    auto op = deserialize_instr<instrs::OpTypeMatrix>(instr);
    reg_ty(op.result_id, MatrixType(get(op.column_type), op.column_count));
    break;
  }
  case OpTypeImage:
  {
    auto op = deserialize_instr<instrs::OpTypeImage>(instr);
    reg_ty(op.result_id, ImageType(get(op.sampled_type), op.dim,
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
    reg_ty(op.result_id, SampledImageType(get(op.image_type)));
    break;
  }
  case OpTypeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeArray>(instr);
    reg_ty(op.result_id, ArrayType(get(op.element_type), op.length));
    break;
  }
  case OpTypeRuntimeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeRuntimeArray>(instr);
    reg_ty(op.result_id, ArrayType(get(op.element_type), ArrayType::UNSIZED));
    break;
  }
  case OpTypeStruct:
  {
    auto op = deserialize_instr<instrs::OpTypeStruct>(instr);
    std::vector<std::shared_ptr<Type>> members;
    members.reserve(op.member_type.size());
    for (const auto& member_type : op.member_type) {
      members.emplace_back(get(member_type));
    }
    reg_ty(op.result_id, StructType(std::move(members)));
    break;
  }
  case OpTypePointer:
  {
    auto op = deserialize_instr<instrs::OpTypePointer>(instr);
    reg_ty(op.result_id, PointerType(op.storage_class, get(op.type)));
    break;
  }
  case OpTypeFunction:
  {
    auto op = deserialize_instr<instrs::OpTypeFunction>(instr);
    std::vector<std::shared_ptr<Type>> param_tys;
    for (const auto& param_ty : op.parameter_type) {
      param_tys.emplace_back(get(param_ty));
    }
    reg_ty(op.result_id, FunctionType(get(op.return_type), param_tys));
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
    assert(ty != nullptr && ty->is_boolean());
    reg_val(op.result_id, Constant(ty, 1));
    break;
  }
  case OpConstantFalse:
  {
    auto op = deserialize_instr<instrs::OpConstantFalse>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr && ty->is_boolean());
    reg_val(op.result_id, Constant(ty, 0));
    break;
  }
  case OpConstant:
  {
    auto op = deserialize_instr<instrs::OpConstant>(instr);
    const auto& ty = ty_by_result_id[op.result_type];
    assert(ty != nullptr && (ty->is_integer() || ty->is_float()));
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
    std::vector<std::shared_ptr<Value>> constituents;
    constituents.reserve(op.constituents.size());
    for (auto constituent : op.constituents) {
      const auto& val = val_by_result_id[constituent];
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
    case Type::VECTOR:
    {
      auto vector_ty = std::static_pointer_cast<VectorType>(ty);
      assert(vector_ty->nlane == constituents.size());
      for (size_t i = 0; i < vector_ty->nlane; ++i) {
        assert(constituents[i]->ty->same_as(*vector_ty->scalar_ty));
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
    default: std::abort;
    }
    reg_val(op.result_id, CompositeConstant(ty, std::move(constituents)));
    break;
  }
  default: return false;
  }
  return true;
}

std::string Deserializer::dbg() const {
  std::stringstream ss;
  ss << "TypeRegistry {" << std::endl;
  for (const auto& pair : ty_by_result_id) {
    uint32_t result_id = pair.first;
    ss << " " << result_id << ": " << pair.second->name << std::endl;
  }
  ss << "}";
  return ss.str();
}

} // namespace tinyspv