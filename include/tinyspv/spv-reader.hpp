// # SPIR-V Input Infrastructure
// @PENGUINLIONG
#pragma once
#include <cstdint>
#include <cstring>
#include "spirv/unified1/spirv.hpp"

namespace tinyspv {

struct OperandIterator {
  const uint32_t* pos;
  size_t nremain;

  inline uint32_t next_u32() {
    --nremain;
    return *(pos++);
  }
  inline const char* next_str() {
    const char* out = (const char*)pos;
    size_t n = (std::strlen(out) + 3) / 4;
    pos += n;
    nremain -= n;
    return out;
  }

  inline OperandIterator begin() const {
    return OperandIterator { pos, nremain };
  }
  inline OperandIterator end() const {
    return OperandIterator { pos + nremain, 0 };
  }

  inline OperandIterator operator++() {
    next_u32();
    return *this;
  }
  inline const uint32_t& operator*() const {
    return *pos;
  }
  inline bool operator!=(const OperandIterator& rhs) const {
    return pos != rhs.pos;
  }
};

struct Instruction {
  const uint32_t* instr;

  constexpr uint32_t opcode() const {
    return instr[0] & 0xFFFF;
  }
  constexpr uint32_t size() const {
    return instr[0] >> 16;
  }

  inline OperandIterator operands() const {
    return { instr + 1, size() - 1 };
  }

  inline Instruction next() const {
    return { instr + size() };
  }
};

struct InstructionIterator {
  Instruction instr;
  const uint32_t* instr_end;

  inline InstructionIterator begin() const {
    return InstructionIterator { instr, instr_end };
  }
  inline InstructionIterator end() const {
    return InstructionIterator { { instr_end }, instr_end };
  }

  inline InstructionIterator operator++() {
    instr = instr.next();
    return *this;
  }
  inline const Instruction& operator*() const {
    return instr;
  }
  inline bool operator!=(const InstructionIterator& rhs) const {
    return instr.instr != rhs.instr.instr;
  }
};

struct SpirvReader {
  const uint32_t* beg;
  const uint32_t* end;

  constexpr uint32_t magic() const {
    return beg[0];
  }
  constexpr uint32_t version() const {
    return beg[1];
  }
  constexpr uint32_t generator_magic() const {
    return beg[2];
  }
  constexpr uint32_t bound() const {
    return beg[3];
  }
  constexpr uint32_t reserved() const {
    return beg[4];
  }

  inline bool is_valid() const {
    return beg + 5 <= end &&
      magic() == spv::MagicNumber &&
      bound() > 0 &&
      beg + 6 <= end;
  }

  inline InstructionIterator instructions() const {
    return InstructionIterator { beg + 5, end };
  }
};

} // namespace tinyspv
