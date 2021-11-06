#include <fstream>
#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spv-writer.hpp"
#include "tinyspv/spirv/unified1/opcode2str.hpp"
#include "tinyspv/spirv/unified1/serdes/SPIRV.type-declaration.hpp"

using namespace tinyspv;

std::vector<uint32_t> load_spv(const std::string& path) {
  std::ifstream is(path, std::ios::in | std::ios::ate | std::ios::binary);
  size_t size = is.tellg();
  is.seekg(0, std::ios::beg);
  std::vector<uint32_t> spv;
  if ((size & (sizeof(uint32_t) - 1)) != 0) { return {}; }
  spv.resize(size / sizeof(uint32_t));
  is.read((char*)spv.data(), size);
  return spv;
}



struct Type {
  enum {
    UNSIZED = 0,
  };
  enum class Code {
    Void,
    Boolean,
    Integer,
    Float,
  };

  const Code code;
  const std::string name;
  const size_t size;

  Type(Code code, std::string&& name, size_t size) :
    code(code), name(name), size(size) {}

  inline bool same_as(const Type& other) const {
    return name == other.name;
  }

  bool is_void() const { return code == Code::Void; }
  bool is_boolean() const { return code == Code::Boolean; }
  bool is_integer() const { return code == Code::Integer; }
  bool is_float() const { return code == Code::Float; }
};

struct VoidType : public Type {
  VoidType() : Type(Code::Void, "void", UNSIZED) {}
  static VoidType VOID;
};
struct BooleanType : public Type {
  BooleanType() : Type(Code::Boolean, "bool", UNSIZED) {}
  static BooleanType BOOL;
};
struct IntegerType : public Type {
  uint32_t bit_width;
  bool is_signed;
  IntegerType(uint32_t bit_width, bool is_signed) :
    bit_width(bit_width),
    is_signed(is_signed),
    Type(Code::Integer, (is_signed ? "i" : "u") + std::to_string(bit_width), bit_width) {}
  static IntegerType I32;
  static IntegerType U32;
};
struct FloatType : public Type {
  uint32_t bit_width;
  FloatType(uint32_t bit_width) :
    bit_width(bit_width),
    Type(Code::Float, "f" + std::to_string(bit_width), bit_width) {}
  static FloatType F32;
};

VoidType VoidType::VOID;
BooleanType BooleanType::BOOL;
IntegerType IntegerType::I32(32, true);
IntegerType IntegerType::U32(32, true);
FloatType FloatType::F32(32);

struct TypeRegistry {
  std::vector<Type*> ty_pool;
  // Result ID -> Index in `ty_pool`.
  std::map<uint32_t, size_t> ty_by_result_id;
  // Type Name -> Index in `ty_pool`.
  std::map<std::string, size_t> ty_by_name;

  TypeRegistry() {}
  ~TypeRegistry() {
    for (auto& ty : ty_pool) {
      Type::Code code = ty->code;
      switch (code) {
      case Type::Code::Void: delete (VoidType*)ty; break;
      case Type::Code::Boolean: delete (BooleanType*)ty; break;
      case Type::Code::Integer: delete (IntegerType*)ty; break;
      case Type::Code::Float: delete (FloatType*)ty; break;
      default: std::abort();
      }
    }
    ty_pool.resize(0);
  }

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  void reg(uint32_t id, const TType& ty) {
    auto i = ty_pool.size();
    const auto& ty_ = ty_pool.emplace_back((Type*)(new TType(ty)));
    ty_by_result_id[id] = i;
    auto it = std::find_if(ty_pool.begin(), ty_pool.end(), [&](const auto& x) { return x->name == ty_->name; });
    if (it != ty_pool.end()) {
      ty_by_name[ty_->name] = it - ty_pool.begin();
    } else {
      ty_by_name[ty_->name] = i;
    }
  }

  const Type& operator[](const std::string& ty_name) {
    return *ty_pool[ty_by_name[ty_name]];
  }
  const Type& operator[](uint32_t id) {
    return *ty_pool[ty_by_result_id[id]];
  }

  bool parse(const Instruction& instr) {
    using tinyspv::serde::deserialize_instr;

    switch (instr.opcode()) {
    case OpTypeVoid: {
      auto op = deserialize_instr<instrs::OpTypeVoid>(instr);
      reg(op.result_id, VoidType());
      break;
    }
    case OpTypeBool: {
      auto op = deserialize_instr<instrs::OpTypeBool>(instr);
      reg(op.result_id, BooleanType());
      break;
    }
    case OpTypeInt: {
      auto op = deserialize_instr<instrs::OpTypeInt>(instr);
      reg(op.result_id, IntegerType(op.width, op.signedness));
      break;
    }
    case OpTypeFloat: {
      auto op = deserialize_instr<instrs::OpTypeFloat>(instr);
      reg(op.result_id, FloatType(op.width));
      break;
    }
    default:
      return false;
    }
    return true;
  }

  std::string dbg() const {
    std::stringstream ss;
    ss << "TypeRegistry {" << std::endl;
    for (const auto& pair : ty_by_result_id) {
      uint32_t result_id = pair.first;
      ss << " " << result_id << "->"<< ty_pool[pair.second]->name << std::endl;
    }
    ss << "}";
    return ss.str();
  }

};

void main(int argc, const char** argv) {
  if (argc <= 1) {
    std::cout << "path not specified" << std::endl;
    return;
  }
  std::vector<uint32_t> spv = load_spv(argv[1]);
  SpirvReader spv_reader { spv.data(), spv.data() + spv.size() };

  if (!spv_reader.is_valid()) {
    std::cout << "invalid spirv input" << std::endl;
    return;
  }

  TypeRegistry ty_reg;
  for (Instruction instr : spv_reader.instructions()) {
    std::cout << opcode2str(instr.opcode()) << std::endl;

    if (ty_reg.parse(instr)) {
      std::cout << ty_reg.dbg() << std::endl;
    }
  }
}
