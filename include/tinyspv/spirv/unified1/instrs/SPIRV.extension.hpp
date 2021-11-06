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
struct OpExtension {
  std::string name;
};
struct OpExtInstImport {
  Id result_id;
  std::string name;
};
struct OpExtInst {
  Id result_type;
  Id result_id;
  Id set;
  uint32_t instruction;
  std::vector<Id> operand;
};
} // namespace instrs
} // namespace tinyspv
