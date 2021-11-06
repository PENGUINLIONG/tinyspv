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
struct OpMemoryModel {
  AddressingModel addressing_model;
  MemoryModel memory_model;
};
struct OpEntryPoint {
  ExecutionModel execution_model;
  Id entry_point;
  std::string name;
  std::vector<Id> interface;
};
struct OpExecutionMode {
  Id entry_point;
  ExecutionMode mode;
  LiteralList see_execution_mode;
};
struct OpCapability {
  Capability capability;
};
struct OpExecutionModeId {
  Id entry_point;
  ExecutionMode mode;
  std::vector<Id> see_execution_mode;
};
} // namespace instrs
} // namespace tinyspv
