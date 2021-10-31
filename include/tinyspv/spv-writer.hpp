// # SPIR-V Output Infrastructure
// @PENGUINLIONG
#pragma once
#include <cstdint>
#include <cstring>
#include <vector>
#include "spirv/unified1/spirv.hpp"

namespace tinyspv {

struct InstructionBuilder {
  std::vector<uint32_t>* buf;

  inline void push_header(uint32_t opcode, uint32_t size) {
    buf->emplace_back((opcode & 0xFFFF) | (size << 16));
  }

  inline void push_u32(uint32_t x) {
    buf->emplace_back(x);
  }
  inline void push_string(const char* x) {
    size_t size = (std::strlen(x) + 3) / 4;
    size_t ibeg = buf->size();
    buf->resize(ibeg + size);
    std::strcpy((char*)(buf->data() + ibeg), x);
  }
  inline void finish() {
    buf = nullptr;
  }
};

struct SpirvWriter {
  std::vector<uint32_t> buf;

  inline void push_header(
    uint32_t version,
    uint32_t generator_magic,
    uint32_t bound,
    uint32_t reserved
  ) {
    buf.emplace_back(tinyspv::MagicNumber);
    buf.emplace_back(version);
    buf.emplace_back(generator_magic);
    buf.emplace_back(bound);
    buf.emplace_back(reserved);
  }

  inline InstructionBuilder build_instr() {
    return InstructionBuilder { &buf };
  }
};

} // namespace tinyspv
