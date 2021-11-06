#include <fstream>
#include <iostream>
#include <string>
#include <memory>
#include <map>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spv-writer.hpp"
#include "tinyspv/spirv/unified1/opcode2str.hpp"
#include "tinyspv/spirv/unified1/operand-structs.hpp"
#include "tinyspv/spirv/unified1/operand-struct-readers.hpp"

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

class Type {
public:
  enum class Code {
    Boolean,
    Integer,
    Float,
  };

  Code code;
  const std::string name;

  Type(Code code, std::string&& name) : code(code), name(name) {}

  inline bool same_as(const Type& other) const {
    return name == other.name;
  }

  bool is_boolean() const { return code == Code::Boolean; }
};

class BooleanType : public Type {
public:
  BooleanType() : Type(Code::Boolean, "bool") {}
  static std::unique_ptr<BooleanType> BOOL;
};
class IntegerType : public Type {
public:
  uint32_t bit_width;
  bool is_signed;
  IntegerType(uint32_t bit_width, bool is_signed) :
    bit_width(bit_width),
    is_signed(is_signed),
    Type(Code::Integer, (is_signed ? "i" : "u") + std::to_string(bit_width)) {}
  static std::unique_ptr<IntegerType> I32;
  static std::unique_ptr<IntegerType> U32;
};
class FloatType : public Type {
public:
  uint32_t bit_width;
  FloatType(uint32_t bit_width) :
    bit_width(bit_width),
    Type(Code::Float, "f" + std::to_string(bit_width)) {}
  static std::unique_ptr<FloatType> F32;
};

std::unique_ptr<BooleanType> BooleanType::BOOL =
  std::make_unique<BooleanType>();
std::unique_ptr<IntegerType> IntegerType::I32 =
  std::make_unique<IntegerType>(32, true);
std::unique_ptr<IntegerType> IntegerType::U32 =
  std::make_unique<IntegerType>(32, true);
std::unique_ptr<FloatType> FloatType::F32 = std::make_unique<FloatType>(32);

class TypeRegistry {
  std::vector<std::unique_ptr<Type>> ty_pool;
  // Result ID -> Index in `ty_pool`.
  std::map<uint32_t, size_t> ty_by_result_id;
  // Type Name -> Index in `ty_pool`.
  std::map<std::string, size_t> ty_by_name;

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  void reg(uint32_t id, std::unique_ptr<Type>&& ty) {
    auto i = ty_pool.size();
    const auto& ty_ =
      ty_pool.emplace_back(std::forward<std::unique_ptr<Type>>(ty));
    ty_by_result_id[id] = i;
    auto it = std::find(ty_pool.begin(), ty_pool.end(), ty_->name);
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

  for (Instruction instr : spv_reader.instructions()) {
    std::cout << opcode2str(instr.opcode());
    for (uint32_t operand : instr.operands()) {
      std::cout << " " << operand;
    }
    std::cout << std::endl;
  }
}
