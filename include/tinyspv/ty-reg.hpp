// # Type Registry.
// @PENGUINLIONG
#include <string>
#include <memory>
#include <map>
#include <sstream>
#include <cassert>
#include <cstdlib>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spirv/unified1/enum2str.hpp"
#include "tinyspv/spirv/unified1/SPIRV.instrs.hpp"

namespace tinyspv {

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
    POINTER,
    FUNCTION,
  };

  const Code code;
  const std::string name;

  inline Type(Code code, std::string&& name) :
    code(code), name(name) {}

  inline bool same_as(const Type& other) const {
    return name == other.name;
  }

  inline bool is_void() const { return code == VOID; }
  inline bool is_boolean() const { return code == BOOLEAN; }
  inline bool is_integer() const { return code == INTEGER; }
  inline bool is_float() const { return code == FLOAT; }
  inline bool is_vector() const { return code == VECTOR; }
  inline bool is_matrix() const { return code == MATRIX; }
  inline bool is_image() const { return code == IMAGE; }
  inline bool is_sampler() const { return code == SAMPLER; }
  inline bool is_sampled_image() const { return code == SAMPLED_IMAGE; }
  inline bool is_array() const { return code == ARRAY; }
  inline bool is_runtime_array() const { return code == RUNTIME_ARRAY; }
  inline bool is_struct() const { return code == STRUCT; }
  inline bool is_pointer() const { return code == POINTER; }
  inline bool is_function() const { return code == FUNCTION; }

};

struct VoidType : public Type {
  static constexpr Code CODE = VOID;
  inline VoidType() : Type(CODE, "void") {}
};
struct BooleanType : public Type {
  static constexpr Code CODE = BOOLEAN;
  inline BooleanType() : Type(CODE, "bool") {}
};
struct IntegerType : public Type {
  static constexpr Code CODE = INTEGER;
  uint32_t bit_width;
  bool is_signed;
  inline IntegerType(uint32_t bit_width, bool is_signed) :
    bit_width(bit_width),
    is_signed(is_signed),
    Type(CODE, (is_signed ? "i" : "u") + std::to_string(bit_width)) {}
};
struct FloatType : public Type {
  static constexpr Code CODE = FLOAT;
  uint32_t bit_width;
  inline FloatType(uint32_t bit_width) :
    bit_width(bit_width),
    Type(CODE, "f" + std::to_string(bit_width)) {}
};
struct VectorType : public Type {
  static constexpr Code CODE = VECTOR;
  std::shared_ptr<Type> scalar_ty;
  uint32_t nlane;
  inline VectorType(const std::shared_ptr<Type>& scalar_ty, uint32_t nlane) :
    scalar_ty(scalar_ty),
    nlane(nlane),
    Type(CODE, scalar_ty->name + "vec" + std::to_string(nlane)) {
    assert(scalar_ty->is_boolean() || scalar_ty->is_integer() || scalar_ty->is_float());
  }
};
struct MatrixType : public Type {
  static constexpr Code CODE = MATRIX;
  std::shared_ptr<Type> column_ty;
  uint32_t ncolumn;
  inline MatrixType(const std::shared_ptr<Type>& vector_ty, uint32_t ncolumn) :
    column_ty(vector_ty),
    ncolumn(ncolumn),
    Type(CODE, vector_ty->name + "mat" + std::to_string(ncolumn)) {
    assert(vector_ty->is_vector());
  }
};
struct ImageType : public Type {
  static constexpr Code CODE = IMAGE;
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
  inline ImageType(
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
      sampled_ty, dim, depth, arrayed, ms, sampled, image_format, access_qualifier)) {
    assert(sampled_ty->is_void() || sampled_ty->is_integer() || sampled_ty->is_float());
    if (dim == DimSubpassData) {
      assert(sampled == SampledOption::STORAGE || image_format == ImageFormatUnknown);
    }
  }
  inline std::string make_img_ty_name(
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
  static constexpr Code CODE = SAMPLER;
  inline SamplerType() : Type(CODE, "sampler") {}
};
struct SampledImageType : public Type {
  static constexpr Code CODE = SAMPLED_IMAGE;
  std::shared_ptr<Type> image_ty;
  inline SampledImageType(const std::shared_ptr<Type>& image_ty) :
    image_ty(image_ty),
    Type(CODE, "sampled" + image_ty->name) {}
};
struct ArrayType : public Type {
  static constexpr Code CODE = ARRAY;
  std::shared_ptr<Type> elem_ty;
  uint32_t length;
  inline ArrayType(const std::shared_ptr<Type>& elem_ty, uint32_t length) :
    elem_ty(elem_ty),
    length(length),
    Type(CODE, elem_ty->name + "[" + std::to_string(length) + "]") {}
};
struct RuntimeArrayType : public Type {
  static constexpr Code CODE = RUNTIME_ARRAY;
  std::shared_ptr<Type> elem_ty;
  uint32_t length;
  inline RuntimeArrayType(const std::shared_ptr<Type>& elem_ty) :
    elem_ty(elem_ty),
    Type(CODE, elem_ty->name + "[]") {}
};
struct StructType : public Type {
  static constexpr Code CODE = STRUCT;
  std::vector<std::shared_ptr<Type>> member_tys;
  inline StructType(std::vector<std::shared_ptr<Type>>&& member_tys) :
    member_tys(std::forward<std::vector<std::shared_ptr<Type>>>(member_tys)),
    Type(CODE, make_struct_ty_name(member_tys)) {}

  inline std::string make_struct_ty_name(
    const std::vector<std::shared_ptr<Type>>& member_tys
  ) {
    std::stringstream ss;
    ss << "{";
    bool first_iter = true;
    for (const auto& member_ty : member_tys) {
      if (!first_iter) {
        ss << ",";
      } else {
        first_iter = false;
      }
      ss << member_ty->name;
    }
    ss << "}";
    return ss.str();
  }
};
struct PointerType : public Type {
  static constexpr Code CODE = POINTER;
  StorageClass storage_class;
  std::shared_ptr<Type> ty;
  inline PointerType(
    StorageClass storage_class,
    const std::shared_ptr<Type>& ty
  ) :
    storage_class(storage_class),
    ty(ty),
    Type(CODE, std::string("*") + enum2str(storage_class) + " " + ty->name) {}
};
struct FunctionType : public Type {
  static constexpr Code CODE = FUNCTION;
  std::shared_ptr<Type> return_ty;
  std::vector<std::shared_ptr<Type>> param_tys;
  inline FunctionType(
    const std::shared_ptr<Type>& return_ty,
    const std::vector<std::shared_ptr<Type>>& param_tys
  ) :
    return_ty(return_ty),
    param_tys(param_tys),
    Type(CODE, make_function_ty_name(return_ty, param_tys)) {}

  inline std::string make_function_ty_name(
    const std::shared_ptr<Type>& return_ty,
    const std::vector<std::shared_ptr<Type>>& param_tys
  ) {
    std::stringstream ss;
    ss << return_ty->name << "(";
    bool first_iter = true;
    for (const auto& param_ty : param_tys) {
      if (first_iter) {
        first_iter = false;
      } else {
        ss << ",";
      }
      ss << param_ty;
    }
    ss << ")";
    return ss.str();
  }
};




struct TypeRegistry {
  std::vector<std::shared_ptr<Type>> ty_pool;

  TypeRegistry();
  ~TypeRegistry();

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  std::shared_ptr<TType> unreg(std::shared_ptr<Type>& ty) {
    assert(ty->code == TType::CODE);
    assert(ty.use_count() == 1);
    assert(std::find(ty_pool.begin(), ty_pool.end(), ty) != ty_pool.end());
    std::shared_ptr<TType> out = std::static_pointer_cast<TType>(ty);
    ty.reset();
    return out;
  }

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  const std::shared_ptr<Type>& reg(TType&& ty) {
    auto it = std::find_if(ty_pool.begin(), ty_pool.end(),
      [&](const auto& x) { return x->name == ty.name; });
    if (it != ty_pool.end()) {
      return *it;
    } else {
      return ty_pool.emplace_back(
          std::static_pointer_cast<Type>(std::make_shared<TType>(ty)));
    }
  }

};

struct TypeSectionDeserializer {
  TypeRegistry ty_reg;
  std::map<instrs::Id, std::shared_ptr<Type>> ty_by_result_id;

  inline const std::shared_ptr<Type>& get(uint32_t result_id) {
    return ty_by_result_id[result_id];
  }
  inline const Type& operator[](uint32_t result_id) {
    return *get(result_id);
  }

  template<typename TType,
    typename _ = std::enable_if_t<std::is_base_of_v<Type, TType>>>
  inline void reg(instrs::Id result_id, TType&& ty) {
    ty_by_result_id[result_id] = ty_reg.reg(std::forward<TType>(ty));
  }

  bool deserialize(const Instruction& instr);
  std::string dbg() const;
};

} // namespace tinyspv
