#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "tinyspv/ty-reg.hpp"

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

  TypeSectionDeserializer ty_deserializer;
  for (Instruction instr : spv_reader.instructions()) {
    std::cout << tinyspv::enum2str((Op)instr.opcode()) << std::endl;

    if (ty_deserializer.deserialize(instr)) {
      std::cout << ty_deserializer.dbg() << std::endl;
    }
  }
}
