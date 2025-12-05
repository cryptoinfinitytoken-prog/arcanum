#pragma once
#include <string>
#include <boost/uuid/uuid.hpp>

#define CRYPTONOTE_DNS_TIMEOUT_MS 20000

namespace config
{
  uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 239;
  uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 240;
  uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 241;
  uint16_t const P2P_DEFAULT_PORT = 19990;
  uint16_t const RPC_DEFAULT_PORT = 19991;
  uint16_t const ZMQ_RPC_DEFAULT_PORT = 19992;
  boost::uuids::uuid const NETWORK_ID = { {
      0x12, 0x30, 0xF1, 0x71, 0x61, 0x04, 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x10
    } };
  std::string const GENESIS_TX = "013c01ff0001ffffffffffff03029b2e4c0281c0b02e7c53291a94d1d0cbcf74ae0671a93d1d3080948a579ad83121017767aafcde9be00dcfd098715ebcf7f410daebc582fda69d24a28e9d0bc890d1";
  uint32_t const GENESIS_NONCE = 10000;
}

namespace config
{
  namespace testnet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 53;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 54;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 63;
    uint16_t const P2P_DEFAULT_PORT = 28080;
    uint16_t const RPC_DEFAULT_PORT = 28081;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 28082;
    boost::uuids::uuid const NETWORK_ID = { {
        0x12, 0x30, 0xF1, 0x71, 0x61, 0x04, 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x11
      } };
    std::string const GENESIS_TX = "013c01ff0001ffffffffffff03029b2e4c0281c0b02e7c53291a94d1d0cbcf74ae0671a93d1d3080948a579ad83121017767aafcde9be00dcfd098715ebcf7f410daebc582fda69d24a28e9d0bc890d1";
    uint32_t const GENESIS_NONCE = 10001;
  }

  namespace stagenet
  {
    uint64_t const CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX = 53;
    uint64_t const CRYPTONOTE_PUBLIC_INTEGRATED_ADDRESS_BASE58_PREFIX = 54;
    uint64_t const CRYPTONOTE_PUBLIC_SUBADDRESS_BASE58_PREFIX = 63;
    uint16_t const P2P_DEFAULT_PORT = 38080;
    uint16_t const RPC_DEFAULT_PORT = 38081;
    uint16_t const ZMQ_RPC_DEFAULT_PORT = 38082;
    boost::uuids::uuid const NETWORK_ID = { {
        0x12, 0x30, 0xF1, 0x71, 0x61, 0x04, 0x41, 0x61, 0x17, 0x31, 0x00, 0x82, 0x16, 0xA1, 0xA1, 0x12
      } };
    std::string const GENESIS_TX = "013c01ff0001ffffffffffff03029b2e4c0281c0b02e7c53291a94d1d0cbcf74ae0671a93d1d3080948a579ad83121017767aafcde9be00dcfd098715ebcf7f410daebc582fda69d24a28e9d0bc890d1";
    uint32_t const GENESIS_NONCE = 10002;
  }
}
