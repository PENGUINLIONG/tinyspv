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
struct OpSourceContinued {
  Literal continued_source;
};
struct OpSource {
  SourceLanguage source_language;
  uint32_t version;
  std::optional<Id> file;
  std::optional<Literal> source;
};
struct OpSourceExtension {
  Literal extension;
};
struct OpName {
  Id target;
  std::string name;
};
struct OpMemberName {
  Id type;
  uint32_t member;
  std::string name;
};
struct OpString {
  Id result_id;
  std::string string;
};
struct OpLine {
  Id file;
  uint32_t line;
  uint32_t column;
};
struct OpNoLine {
};
struct OpModuleProcessed {
  Literal process;
};
} // namespace instrs
} // namespace tinyspv
