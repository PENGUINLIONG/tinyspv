// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.pipe.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpReadPipe deserialize_instr<instrs::OpReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReadPipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpWritePipe deserialize_instr<instrs::OpWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpWritePipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReservedReadPipe deserialize_instr<instrs::OpReservedReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReservedReadPipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReservedWritePipe deserialize_instr<instrs::OpReservedWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReservedWritePipe out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.index = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReserveReadPipePackets deserialize_instr<instrs::OpReserveReadPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReserveReadPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReserveWritePipePackets deserialize_instr<instrs::OpReserveWritePipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReserveWritePipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCommitReadPipe deserialize_instr<instrs::OpCommitReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCommitReadPipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpCommitWritePipe deserialize_instr<instrs::OpCommitWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCommitWritePipe out {};
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpIsValidReserveId deserialize_instr<instrs::OpIsValidReserveId>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpIsValidReserveId out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetNumPipePackets deserialize_instr<instrs::OpGetNumPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetNumPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGetMaxPipePackets deserialize_instr<instrs::OpGetMaxPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGetMaxPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupReserveReadPipePackets deserialize_instr<instrs::OpGroupReserveReadPipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupReserveReadPipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupReserveWritePipePackets deserialize_instr<instrs::OpGroupReserveWritePipePackets>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupReserveWritePipePackets out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.num_packets = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupCommitReadPipe deserialize_instr<instrs::OpGroupCommitReadPipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupCommitReadPipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGroupCommitWritePipe deserialize_instr<instrs::OpGroupCommitWritePipe>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGroupCommitWritePipe out {};
  out.execution = (Id)it.next_u32();
  out.pipe = (Id)it.next_u32();
  out.reserve_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConstantPipeStorage deserialize_instr<instrs::OpConstantPipeStorage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConstantPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (uint32_t)it.next_u32();
  out.packet_alignment = (uint32_t)it.next_u32();
  out.capacity = (uint32_t)it.next_u32();
  return out;
}
template<>
instrs::OpCreatePipeFromPipeStorage deserialize_instr<instrs::OpCreatePipeFromPipeStorage>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpCreatePipeFromPipeStorage out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pipe_storage = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpReadPipeBlockingINTEL deserialize_instr<instrs::OpReadPipeBlockingINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpReadPipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpWritePipeBlockingINTEL deserialize_instr<instrs::OpWritePipeBlockingINTEL>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpWritePipeBlockingINTEL out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.packet_size = (Id)it.next_u32();
  out.packet_alignment = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
