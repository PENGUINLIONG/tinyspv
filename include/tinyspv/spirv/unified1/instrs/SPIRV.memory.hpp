// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include <vector>
#include <string>
#include <optional>
#include "tinyspv/spirv/unified1/SPIRV.hpp"
namespace tinyspv {
namespace instrs {
typedef uint32_t Id;
typedef std::vector<uint32_t> Literal;
typedef std::vector<uint32_t> LiteralList;
struct OpVariable {
  Id result_type;
  Id result_id;
  StorageClass storage_class;
  std::optional<Id> initializer;
};
struct OpImageTexelPointer {
  Id result_type;
  Id result_id;
  Id image;
  Id coordinate;
  Id sample;
};
struct OpLoad {
  Id result_type;
  Id result_id;
  Id pointer;
  std::optional<MemoryOperands> memory_operands;
};
struct OpStore {
  Id pointer;
  Id object;
  std::optional<MemoryOperands> memory_operands;
};
struct OpCopyMemory {
  Id target;
  Id source;
  std::optional<MemoryOperands> memory_operands;
  std::optional<MemoryOperands> memory_operands2;
};
struct OpCopyMemorySized {
  Id target;
  Id source;
  Id size;
  std::optional<MemoryOperands> memory_operands;
  std::optional<MemoryOperands> memory_operands2;
};
struct OpAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  std::vector<Id> indexes;
};
struct OpInBoundsAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  std::vector<Id> indexes;
};
struct OpPtrAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpArrayLength {
  Id result_type;
  Id result_id;
  Id structure;
  uint32_t array_member;
};
struct OpGenericPtrMemSemantics {
  Id result_type;
  Id result_id;
  Id pointer;
};
struct OpInBoundsPtrAccessChain {
  Id result_type;
  Id result_id;
  Id base;
  Id element;
  std::vector<Id> indexes;
};
struct OpPtrEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpPtrNotEqual {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
struct OpPtrDiff {
  Id result_type;
  Id result_id;
  Id operand_1;
  Id operand_2;
};
} // namespace instrs
} // namespace tinyspv
