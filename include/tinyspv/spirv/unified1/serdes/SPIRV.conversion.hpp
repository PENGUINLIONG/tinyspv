// THIS IS A GENERATED SOURCE. MODIFICATION WILL BE OVERWRITTEN.
// USING JSON FROM:
//   PENGUINLIONG/tinyspv @ db18ea116bd8c195ee18714eb9dffab473dfa7da
#pragma once
#include "tinyspv/spirv/unified1/instrs/SPIRV.conversion.hpp"
#include "tinyspv/spv-reader.hpp"
namespace tinyspv {
namespace serde {
using instrs::Id;
template<typename T>
T deserialize_instr(const Instruction& it);

template<>
instrs::OpConvertFToU deserialize_instr<instrs::OpConvertFToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertFToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertFToS deserialize_instr<instrs::OpConvertFToS>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertFToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertSToF deserialize_instr<instrs::OpConvertSToF>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertSToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertUToF deserialize_instr<instrs::OpConvertUToF>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertUToF out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpUConvert deserialize_instr<instrs::OpUConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpUConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSConvert deserialize_instr<instrs::OpSConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpFConvert deserialize_instr<instrs::OpFConvert>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpFConvert out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.float_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpQuantizeToF16 deserialize_instr<instrs::OpQuantizeToF16>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpQuantizeToF16 out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertPtrToU deserialize_instr<instrs::OpConvertPtrToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertPtrToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSatConvertSToU deserialize_instr<instrs::OpSatConvertSToU>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSatConvertSToU out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.signed_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpSatConvertUToS deserialize_instr<instrs::OpSatConvertUToS>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpSatConvertUToS out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.unsigned_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpConvertUToPtr deserialize_instr<instrs::OpConvertUToPtr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpConvertUToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.integer_value = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpPtrCastToGeneric deserialize_instr<instrs::OpPtrCastToGeneric>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpPtrCastToGeneric out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGenericCastToPtr deserialize_instr<instrs::OpGenericCastToPtr>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericCastToPtr out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  return out;
}
template<>
instrs::OpGenericCastToPtrExplicit deserialize_instr<instrs::OpGenericCastToPtrExplicit>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpGenericCastToPtrExplicit out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.pointer = (Id)it.next_u32();
  out.storage = (StorageClass)it.next_u32();
  return out;
}
template<>
instrs::OpBitcast deserialize_instr<instrs::OpBitcast>(const Instruction& instr) {
  OperandIterator it = instr.operands();
  instrs::OpBitcast out {};
  out.result_type = (Id)it.next_u32();
  out.result_id = (Id)it.next_u32();
  out.operand = (Id)it.next_u32();
  return out;
}
} // namespace instrs
} // namespace tinyspv
