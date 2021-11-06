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
struct OpAtomicLoad {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicStore {
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicExchange {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicCompareExchange {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicCompareExchangeWeak {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id equal;
  Id unequal;
  Id value;
  Id comparator;
};
struct OpAtomicIIncrement {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIDecrement {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicIAdd {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicISub {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMin {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMin {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicSMax {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicUMax {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicAnd {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicOr {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicXor {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
struct OpAtomicFlagTestAndSet {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicFlagClear {
  Id pointer;
  Id memory;
  Id semantics;
};
struct OpAtomicFAddEXT {
  Id result_type;
  Id result_id;
  Id pointer;
  Id memory;
  Id semantics;
  Id value;
};
} // namespace instrs
} // namespace tinyspv
