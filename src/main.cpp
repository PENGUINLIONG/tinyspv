#include <fstream>
#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spv-writer.hpp"
#include "tinyspv/spirv/unified1/enum2str.hpp"
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
  enum Code {
    VOID,
    BOOLEAN,
    INTEGER,
    FLOAT,
    VECTOR,
    MATRIX,
    IMAGE,
    SAMPLER,
    SAMPLED_IMAGE,
    ARRAY,
    RUNTIME_ARRAY,
    STRUCT,
    OPAQUE,
    POINTER,
    FUNCTION,
  };

  const Code code;
  const std::string name;

  Type(Code code, std::string&& name) :
    code(code), name(name) {}

  inline bool same_as(const Type& other) const {
    return name == other.name;
  }

  bool is_void() const { return code == VOID; }
  bool is_boolean() const { return code == BOOLEAN; }
  bool is_integer() const { return code == INTEGER; }
  bool is_float() const { return code == FLOAT; }
  bool is_vector() const { return code == VECTOR; }
  bool is_matrix() const { return code == MATRIX; }
  bool is_image() const { return code == IMAGE; }
  bool is_sampler() const { return code == SAMPLER; }
  bool is_sampled_image() const { return code == SAMPLED_IMAGE; }
  bool is_array() const { return code == ARRAY; }
  bool is_runtime_array() const { return code == RUNTIME_ARRAY; }
  bool is_struct() const { return code == STRUCT; }
  bool is_opaque() const { return code == OPAQUE; }
  bool is_pointer() const { return code == POINTER; }
  bool is_function() const { return code == FUNCTION; }

};

struct VoidType : public Type {
  static const Code CODE = VOID;
  VoidType() : Type(CODE, "void") {}
};
struct BooleanType : public Type {
  static const Code CODE = BOOLEAN;
  BooleanType() : Type(CODE, "bool") {}
};
struct IntegerType : public Type {
  static const Code CODE = INTEGER;
  uint32_t bit_width;
  bool is_signed;
  IntegerType(uint32_t bit_width, bool is_signed) :
    bit_width(bit_width),
    is_signed(is_signed),
    Type(CODE, (is_signed ? "i" : "u") + std::to_string(bit_width)) {}
};
struct FloatType : public Type {
  static const Code CODE = FLOAT;
  uint32_t bit_width;
  FloatType(uint32_t bit_width) :
    bit_width(bit_width),
    Type(CODE, "f" + std::to_string(bit_width)) {}
};
struct VectorType : public Type {
  static const Code CODE = VECTOR;
  std::shared_ptr<Type> scalar_ty;
  uint32_t nlane;
  VectorType(const std::shared_ptr<Type>& scalar_ty, uint32_t nlane) :
    scalar_ty(scalar_ty),
    nlane(nlane),
    Type(CODE, scalar_ty->name + "vec" + std::to_string(nlane))
  {
    assert(scalar_ty->is_boolean() || scalar_ty->is_integer() || scalar_ty->is_float());
  }
};
struct MatrixType : public Type {
  static const Code CODE = MATRIX;
  std::shared_ptr<Type> column_ty;
  uint32_t ncolumn;
  MatrixType(const std::shared_ptr<Type>& vector_ty, uint32_t ncolumn) :
    column_ty(vector_ty),
    ncolumn(ncolumn),
    Type(CODE, vector_ty->name + "mat" + std::to_string(ncolumn))
  {
    assert(vector_ty->is_vector());
  }
};
struct ImageType : public Type {
  static const Code CODE = IMAGE;
  enum DepthOption {
    COLOR = 0,
    DEPTH = 1,
    RUNTIME_DEPTH = 2,
  };
  enum SampledOption {
    RUNTIME_SAMPLED = 0,
    SAMPLED = 1,
    STORAGE = 2,
  };
  std::shared_ptr<Type> sampled_ty;
  Dim dim;
  DepthOption depth;
  bool arrayed;
  bool ms;
  SampledOption sampled;
  ImageFormat image_format;
  std::optional<AccessQualifier> access_qualifier;
  ImageType(
    const std::shared_ptr<Type>& sampled_ty,
    Dim dim,
    DepthOption depth,
    bool arrayed,
    bool ms,
    SampledOption sampled,
    ImageFormat image_format,
    std::optional<AccessQualifier> access_qualifier
  ) :
    sampled_ty(sampled_ty),
    dim(dim),
    depth(depth),
    arrayed(arrayed),
    ms(ms),
    sampled(sampled),
    image_format(image_format),
    access_qualifier(access_qualifier),
    Type(CODE, make_img_ty_name(
      sampled_ty, dim, depth, arrayed, ms, sampled, image_format, access_qualifier))
  {
    assert(sampled_ty->is_void() || sampled_ty->is_integer() || sampled_ty->is_float());
    if (dim == DimSubpassData) {
      assert(sampled == SampledOption::RUNTIME_SAMPLED);
    }
  }
  std::string make_img_ty_name(
    const std::shared_ptr<Type>& sampled_ty,
    Dim dim,
    DepthOption depth,
    bool arrayed,
    bool ms,
    SampledOption sampled,
    ImageFormat image_format,
    std::optional<AccessQualifier> access_qualifier
  ) const {
    std::stringstream ss;
    ss << sampled_ty->name;
    if (sampled == SAMPLED) {
      ss << "texture";
    } else if (sampled == STORAGE) {
      ss << "image";
    } else if (sampled == RUNTIME_SAMPLED) {
      ss << "RTSAMPLED";
    } else {
      std::abort();
    }
    ss << enum2str(dim);
    if (ms) { ss << "MS"; }
    if (arrayed) { ss << "Array"; }
    if (depth == DEPTH) {
      ss << "Shadow";
    } else if (depth == RUNTIME_DEPTH) {
      ss << "RTDEPTH";
    }
    if (access_qualifier) {
      ss << "(" << *access_qualifier << ")";
    }
    return ss.str();
  }
};
struct SamplerType : public Type {
  static const Code CODE = SAMPLER;
  SamplerType() : Type(CODE, "sampler") {}
};
struct SampledImageType : public Type {
  static const Code CODE = SAMPLED_IMAGE;
  std::shared_ptr<Type> image_ty;
  SampledImageType(const std::shared_ptr<Type>& image_ty) :
    image_ty(image_ty),
    Type(CODE, "sampled" + image_ty->name) {}
};
struct ArrayType : public Type {
  static const Code CODE = ARRAY;
  std::shared_ptr<Type> elem_ty;
  uint32_t length;
  ArrayType(const std::shared_ptr<Type>& elem_ty, uint32_t length) :
    elem_ty(elem_ty),
    length(length),
    Type(CODE, elem_ty->name + "[" + std::to_string(length) + "]") {}
};
struct RuntimeArrayType : public Type {
  static const Code CODE = RUNTIME_ARRAY;
  std::shared_ptr<Type> elem_ty;
  uint32_t length;
  RuntimeArrayType(const std::shared_ptr<Type>& elem_ty) :
    elem_ty(elem_ty),
    Type(CODE, elem_ty->name + "[]") {}
};
struct StructType : public Type {
  static const Code CODE = STRUCT;
  std::vector<std::shared_ptr<Type>> member_tys;
  StructType(std::vector<std::shared_ptr<Type>>&& member_tys) :
    member_tys(std::forward<std::vector<std::shared_ptr<Type>>>(member_tys)),
    Type(CODE, make_struct_name(member_tys)) {}

  std::string make_struct_name(
    const std::vector<std::shared_ptr<Type>>& member_tys
  ) {
    std::stringstream ss;
    ss << "{";
    bool first_iter = true;
    for (const auto& member_ty : member_tys) {
      ss << member_ty->name;
      if (first_iter) {
        ss << ",";
        first_iter = false;
      }
    }
    ss << "}";
    return ss.str();
  }
};



struct TypeRegistry {
  std::vector<std::shared_ptr<Type>> ty_pool;
  // Result ID -> Index in `ty_pool`.
  std::map<uint32_t, size_t> ty_by_result_id;
  // Type Name -> Index in `ty_pool`.
  std::map<std::string, size_t> ty_by_name;

  TypeRegistry() {}
  ~TypeRegistry() {
    // Release the types in reversed registration order to reduce dependencies.
    size_t i = ty_pool.size();
    while (i--) {
      auto& ty = ty_pool[i];
      assert(ty.use_count() == 1);
      Type::Code code = ty->code;
      switch (code) {
      case Type::VOID: unreg_ty<VoidType>(ty).reset(); break;
      case Type::BOOLEAN: unreg_ty<BooleanType>(ty).reset(); break;
      case Type::INTEGER: unreg_ty<IntegerType>(ty).reset(); break;
      case Type::FLOAT: unreg_ty<FloatType>(ty).reset(); break;
      case Type::VECTOR: unreg_ty<VectorType>(ty).reset(); break;
      case Type::MATRIX: unreg_ty<MatrixType>(ty).reset(); break;
      case Type::IMAGE: unreg_ty<ImageType>(ty).reset(); break;
      case Type::SAMPLER: unreg_ty<SamplerType>(ty).reset(); break;
      case Type::SAMPLED_IMAGE: unreg_ty<SampledImageType>(ty).reset(); break;
      case Type::ARRAY: unreg_ty<ArrayType>(ty).reset(); break;
      case Type::RUNTIME_ARRAY: unreg_ty<RuntimeArrayType>(ty).reset(); break;
      case Type::STRUCT: unreg_ty<StructType>(ty).reset(); break;
      default: std::abort();
      }
    }
    ty_pool.resize(0);
  }
  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  std::shared_ptr<TType> unreg_ty(std::shared_ptr<Type>& ty) {
    assert(ty->code == TType::CODE);
    std::shared_ptr<TType> out = std::static_pointer_cast<TType>(ty);
    ty.reset();
    return out;
  }

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  void reg(uint32_t id, const TType& ty) {
    auto i = ty_pool.size();
    const auto& ty_ = ty_pool.emplace_back(
      std::static_pointer_cast<Type>(std::make_shared<TType>(ty)));
    ty_by_result_id[id] = i;
    auto it = std::find_if(ty_pool.begin(), ty_pool.end(),
      [&](const auto& x) { return x->name == ty_->name; });
    if (it != ty_pool.end()) {
      ty_by_name[ty_->name] = it - ty_pool.begin();
    } else {
      ty_by_name[ty_->name] = i;
    }
  }

  const std::shared_ptr<Type>& get(const std::string& ty_name) {
    return ty_pool[ty_by_name[ty_name]];
  }
  const std::shared_ptr<Type>& get(uint32_t id) {
    return ty_pool[ty_by_result_id[id]];
  }

  const Type& operator[](const std::string& ty_name) {
    return *get(ty_name);
  }
  const Type& operator[](uint32_t id) {
    return *get(id);
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
    case OpTypeVector: {
      auto op = deserialize_instr<instrs::OpTypeVector>(instr);
      reg(op.result_id, VectorType(get(op.component_type), op.component_count));
      break;
    }
    case OpTypeMatrix: {
      auto op = deserialize_instr<instrs::OpTypeMatrix>(instr);
      reg(op.result_id, MatrixType(get(op.column_type), op.column_count));
      break;
    }
    case OpTypeImage: {
      auto op = deserialize_instr<instrs::OpTypeImage>(instr);
      reg(op.result_id, ImageType(get(op.sampled_type), op.dim,
        (ImageType::DepthOption)op.depth, op.arrayed, op.ms,
        (ImageType::SampledOption)op.sampled, op.image_format,
        op.access_qualifier));
      break;
    }
    case OpTypeSampler: {
      auto op = deserialize_instr<instrs::OpTypeSampler>(instr);
      reg(op.result_id, SamplerType());
      break;
    }
    case OpTypeSampledImage: {
      auto op = deserialize_instr<instrs::OpTypeSampledImage>(instr);
      reg(op.result_id, SampledImageType(get(op.image_type)));
      break;
    }
    case OpTypeStruct: {
      auto op = deserialize_instr<instrs::OpTypeStruct>(instr);
      std::vector<std::shared_ptr<Type>> members;
      members.resize(op.member_type.size());
      for (const auto& member_type : op.member_type) {
        members.emplace_back(get(member_type));
      }
      reg(op.result_id, StructType(std::move(members)));
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
      ss << " " << result_id << ": "<< ty_pool[pair.second]->name << std::endl;
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
    std::cout << tinyspv::enum2str((Op)instr.opcode()) << std::endl;

    if (ty_reg.parse(instr)) {
      std::cout << ty_reg.dbg() << std::endl;
    }
  }
}
