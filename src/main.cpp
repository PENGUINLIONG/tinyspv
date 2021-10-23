#include <fstream>
#include <iostream>
#include <string>
#include "tinyspv/spv-reader.hpp"
#include "tinyspv/spv-writer.hpp"
#include "tinyspv/opcode2str.hpp"
#include "tinyspv/operand-structs.hpp"

using namespace tinyspv;

std::vector<uint32_t> load_spv(const std::string& path) {
  std::ifstream is(path, std::ios::in | std::ios::ate | std::ios::binary);
  size_t size = is.tellg();
  is.seekg(0, std::ios::beg);
  std::vector<uint32_t> spv;
  if ((size & (sizeof(uint32_t) - 1)) != 0) { return {}; }
  spv.resize(size / sizeof(uint32_t));
  is.read((char*)spv.data(), size);
  return spv;
}

void main(int argc, const char** argv) {
  if (argc <= 1) {
    std::cout << "path not specified" << std::endl;
    return;
  }
  std::vector<uint32_t> spv = load_spv(argv[1]);
  SpirvReader spv_reader { spv.data(), spv.data() + spv.size() };

  if (!spv_reader.is_valid()) {
    std::cout << "invalid spirv input" << std::endl;
    return;
  }

  for (Instruction instr : spv_reader.instructions()) {
    std::cout << opcode2str(instr.opcode());
    for (uint32_t operand : instr.operands()) {
      std::cout << " " << operand;
    }
    std::cout << std::endl;
  }
}
