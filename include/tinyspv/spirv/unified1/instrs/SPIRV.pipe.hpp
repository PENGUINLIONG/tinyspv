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
struct OpReadPipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedReadPipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReservedWritePipe {
  Id result_type;
  Id result_id;
  Id pipe;
  Id reserve_id;
  Id index;
  Id pointer;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveReadPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpReserveWritePipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpCommitReadPipe {
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpCommitWritePipe {
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpIsValidReserveId {
  Id result_type;
  Id result_id;
  Id reserve_id;
};
struct OpGetNumPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGetMaxPipePackets {
  Id result_type;
  Id result_id;
  Id pipe;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveReadPipePackets {
  Id result_type;
  Id result_id;
  Id execution;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupReserveWritePipePackets {
  Id result_type;
  Id result_id;
  Id execution;
  Id pipe;
  Id num_packets;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupCommitReadPipe {
  Id execution;
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpGroupCommitWritePipe {
  Id execution;
  Id pipe;
  Id reserve_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpConstantPipeStorage {
  Id result_type;
  Id result_id;
  uint32_t packet_size;
  uint32_t packet_alignment;
  uint32_t capacity;
};
struct OpCreatePipeFromPipeStorage {
  Id result_type;
  Id result_id;
  Id pipe_storage;
};
struct OpReadPipeBlockingINTEL {
  Id result_type;
  Id result_id;
  Id packet_size;
  Id packet_alignment;
};
struct OpWritePipeBlockingINTEL {
  Id result_type;
  Id result_id;
  Id packet_size;
  Id packet_alignment;
};
} // namespace instrs
} // namespace tinyspv
