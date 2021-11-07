// # Type Registry.
// @PENGUINLIONG
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "tinyspv/ty-reg.hpp"
#include "tinyspv/spirv/unified1/SPIRV.serde.hpp"

namespace tinyspv {

TypeRegistry::TypeRegistry() {}
TypeRegistry::~TypeRegistry() {
  // Release the types in reversed registration order to reduce dependencies.
  size_t i = ty_pool.size();
  while (i--) {
    auto& ty = ty_pool[i];
    Type::Code code = ty->code;
    switch (code) {
    case Type::VOID: unreg<VoidType>(ty).reset(); break;
    case Type::BOOLEAN: unreg<BooleanType>(ty).reset(); break;
    case Type::INTEGER: unreg<IntegerType>(ty).reset(); break;
    case Type::FLOAT: unreg<FloatType>(ty).reset(); break;
    case Type::VECTOR: unreg<VectorType>(ty).reset(); break;
    case Type::MATRIX: unreg<MatrixType>(ty).reset(); break;
    case Type::IMAGE: unreg<ImageType>(ty).reset(); break;
    case Type::SAMPLER: unreg<SamplerType>(ty).reset(); break;
    case Type::SAMPLED_IMAGE: unreg<SampledImageType>(ty).reset(); break;
    case Type::ARRAY: unreg<ArrayType>(ty).reset(); break;
    case Type::RUNTIME_ARRAY: unreg<RuntimeArrayType>(ty).reset(); break;
    case Type::STRUCT: unreg<StructType>(ty).reset(); break;
    case Type::POINTER: unreg<PointerType>(ty).reset(); break;
    case Type::FUNCTION: unreg<FunctionType>(ty).reset(); break;
    default: std::abort();
    }
  }
  ty_pool.resize(0);
}

bool TypeSectionDeserializer::deserialize(const Instruction& instr) {
  using tinyspv::serde::deserialize_instr;

  switch (instr.opcode()) {
  case OpTypeVoid:
  {
    auto op = deserialize_instr<instrs::OpTypeVoid>(instr);
    reg(op.result_id, VoidType());
    break;
  }
  case OpTypeBool:
  {
    auto op = deserialize_instr<instrs::OpTypeBool>(instr);
    reg(op.result_id, BooleanType());
    break;
  }
  case OpTypeInt:
  {
    auto op = deserialize_instr<instrs::OpTypeInt>(instr);
    reg(op.result_id, IntegerType(op.width, op.signedness));
    break;
  }
  case OpTypeFloat:
  {
    auto op = deserialize_instr<instrs::OpTypeFloat>(instr);
    reg(op.result_id, FloatType(op.width));
    break;
  }
  case OpTypeVector:
  {
    auto op = deserialize_instr<instrs::OpTypeVector>(instr);
    reg(op.result_id, VectorType(get(op.component_type), op.component_count));
    break;
  }
  case OpTypeMatrix:
  {
    auto op = deserialize_instr<instrs::OpTypeMatrix>(instr);
    reg(op.result_id, MatrixType(get(op.column_type), op.column_count));
    break;
  }
  case OpTypeImage:
  {
    auto op = deserialize_instr<instrs::OpTypeImage>(instr);
    reg(op.result_id, ImageType(get(op.sampled_type), op.dim,
      (ImageType::DepthOption)op.depth, op.arrayed, op.ms,
      (ImageType::SampledOption)op.sampled, op.image_format,
      op.access_qualifier));
    break;
  }
  case OpTypeSampler:
  {
    auto op = deserialize_instr<instrs::OpTypeSampler>(instr);
    reg(op.result_id, SamplerType());
    break;
  }
  case OpTypeSampledImage:
  {
    auto op = deserialize_instr<instrs::OpTypeSampledImage>(instr);
    reg(op.result_id, SampledImageType(get(op.image_type)));
    break;
  }
  case OpTypeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeArray>(instr);
    reg(op.result_id, ArrayType(get(op.element_type), op.length));
    break;
  }
  case OpTypeRuntimeArray:
  {
    auto op = deserialize_instr<instrs::OpTypeRuntimeArray>(instr);
    reg(op.result_id, RuntimeArrayType(get(op.element_type)));
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
    reg(op.result_id, StructType(std::move(members)));
    break;
  }
  case OpTypePointer:
  {
    auto op = deserialize_instr<instrs::OpTypePointer>(instr);
    reg(op.result_id, PointerType(op.storage_class, get(op.type)));
    break;
  }
  case OpTypeFunction:
  {
    auto op = deserialize_instr<instrs::OpTypeFunction>(instr);
    std::vector<std::shared_ptr<Type>> param_tys;
    for (const auto& param_ty : op.parameter_type) {
      param_tys.emplace_back(get(param_ty));
    }
    reg(op.result_id, FunctionType(get(op.return_type), param_tys));
    break;
  }
  default:
    return false;
  }
  return true;
}

std::string TypeSectionDeserializer::dbg() const {
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
