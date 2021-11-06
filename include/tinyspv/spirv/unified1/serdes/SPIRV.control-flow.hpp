// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.control-flow.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpPhi deserialize_instr<instrs::OpPhi>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPhi out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  while (it.is_valid()) {
    out.variable.emplace_back((Id)it.next_u32());
  }
  return out;
}
template<>
instrs::OpLoopMerge deserialize_instr<instrs::OpLoopMerge>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLoopMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.continue_target = (Id)it.next_u32();
  out.loop_control = (LoopControl)it.next_u32();
  while (it.is_valid()) { out.loop_control_parameters.emplace_back(it.next_u32()); }
  return out;
}
template<>
instrs::OpSelectionMerge deserialize_instr<instrs::OpSelectionMerge>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSelectionMerge out {};
  out.merge_block = (Id)it.next_u32();
  out.selection_control = (SelectionControl)it.next_u32();
  return out;
}
template<>
instrs::OpLabel deserialize_instr<instrs::OpLabel>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLabel out {};
  out.result_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBranch deserialize_instr<instrs::OpBranch>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBranch out {};
  out.target_label = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpBranchConditional deserialize_instr<instrs::OpBranchConditional>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBranchConditional out {};
  out.condition = (Id)it.next_u32();
  out.true_label = (Id)it.next_u32();
  out.false_label = (Id)it.next_u32();
  while (it.is_valid()) { out.branch_weights.emplace_back(it.next_u32()); }
  return out;
}

// tinyspv failed to generate operand parsing code due to unknown literal type for `OpSwitch`.

template<>
instrs::OpReturnValue deserialize_instr<instrs::OpReturnValue>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReturnValue out {};
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpLifetimeStart deserialize_instr<instrs::OpLifetimeStart>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLifetimeStart out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpLifetimeStop deserialize_instr<instrs::OpLifetimeStop>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpLifetimeStop out {};
  out.pointer = (Id)it.next_u32();
  out.size = (uint32_t)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
