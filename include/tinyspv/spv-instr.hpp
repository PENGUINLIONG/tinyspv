// # SPIR-V Instruction Utilities
// @PENGUINLIONG
#include <cstdint>
#include <vector>

namespace tinyspv {

enum OperandType {
  Literal,
  WeakReference,
  StrongReference,
};
struct Operand {
  OperandType operand_ty;
  uint32_t value;
};
struct Instruction {
  uint32_t opcode;
  std::vector<Operand> operands;
};

} // namespace tinyspv
