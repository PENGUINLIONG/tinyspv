// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.barrier.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpControlBarrier deserialize_instr<instrs::OpControlBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpControlBarrier out {};
  out.execution = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMemoryBarrier deserialize_instr<instrs::OpMemoryBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryBarrier out {};
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpNamedBarrierInitialize deserialize_instr<instrs::OpNamedBarrierInitialize>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpNamedBarrierInitialize out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.subgroup_count = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpMemoryNamedBarrier deserialize_instr<instrs::OpMemoryNamedBarrier>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpMemoryNamedBarrier out {};
  out.named_barrier = (Id)it.next_u32();
  out.memory = (Id)it.next_u32();
  out.semantics = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
