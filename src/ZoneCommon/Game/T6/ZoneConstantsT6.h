#pragma once
#include <cstdint>
#include <string>

#include "Zone/ZoneTypes.h"
#include "Game/T6/T6.h"

namespace T6
{
    class ZoneConstants final
    {
        ZoneConstants() = default;

    public:
        static constexpr const char* MAGIC_SIGNED_TREYARCH = "TAff0100";
        static constexpr const char* MAGIC_SIGNED_OAT = "ABff0100";
        static constexpr const char* MAGIC_UNSIGNED = "TAffu100";
        static constexpr const char* MAGIC_UNSIGNED_SERVER = "TAsvu100";

        static_assert(std::char_traits<char>::length(MAGIC_SIGNED_TREYARCH) == sizeof(ZoneHeader::m_magic));
        static_assert(std::char_traits<char>::length(MAGIC_SIGNED_OAT) == sizeof(ZoneHeader::m_magic));
        static_assert(std::char_traits<char>::length(MAGIC_UNSIGNED) == sizeof(ZoneHeader::m_magic));
        static_assert(std::char_traits<char>::length(MAGIC_UNSIGNED_SERVER) == sizeof(ZoneHeader::m_magic));

        static constexpr int ZONE_VERSION = 147;
        static constexpr int STREAM_COUNT = 4;
        static constexpr int XCHUNK_SIZE = 0x8000;
        static constexpr int XCHUNK_MAX_WRITE_SIZE = XCHUNK_SIZE - 0x40;
        static constexpr int VANILLA_BUFFER_SIZE = 0x80000;
        static constexpr int OFFSET_BLOCK_BIT_COUNT = 3;
        static constexpr block_t INSERT_BLOCK = XFILE_BLOCK_VIRTUAL;

        static constexpr const char* MAGIC_AUTH_HEADER = "PHEEBs71";
        inline static const uint8_t SALSA20_KEY_TREYARCH[]
        {
            0x64, 0x1D, 0x8A, 0x2F,
            0xE3, 0x1D, 0x3A, 0xA6,
            0x36, 0x22, 0xBB, 0xC9,
            0xCE, 0x85, 0x87, 0x22,
            0x9D, 0x42, 0xB0, 0xF8,
            0xED, 0x9B, 0x92, 0x41,
            0x30, 0xBF, 0x88, 0xB6,
            0x5E, 0xDC, 0x50, 0xBE
        };

        inline static const uint8_t RSA_PUBLIC_KEY_TREYARCH[]
        {
            0x30, 0x82, 0x01, 0x0a, 0x02, 0x82, 0x01, 0x01,
            0x00, 0xc7, 0x9d, 0x33, 0xe0, 0x75, 0xaf, 0xef,
            0x08, 0x08, 0x2b, 0x89, 0xd9, 0x3b, 0xf3, 0xd5,
            0x9a, 0x65, 0xa6, 0xde, 0x3b, 0x1e, 0x20, 0xde,
            0x59, 0x19, 0x43, 0x88, 0x1a, 0x8b, 0x39, 0x13,
            0x60, 0x12, 0xd3, 0xb2, 0x77, 0x6d, 0xe1, 0x99,
            0x75, 0x24, 0xb4, 0x0d, 0x8c, 0xb7, 0x84, 0xf2,
            0x48, 0x8f, 0xd5, 0x4c, 0xb7, 0x64, 0x44, 0xa3,
            0xa8, 0x4a, 0xac, 0x2d, 0x54, 0x15, 0x2b, 0x1f,
            0xb3, 0xf4, 0x4c, 0x16, 0xa0, 0x92, 0x8e, 0xd2,
            0xfa, 0xcc, 0x11, 0x6a, 0x74, 0x6a, 0x70, 0xb8,
            0xd3, 0x34, 0x6b, 0x39, 0xc6, 0x2a, 0x69, 0xde,
            0x31, 0x34, 0xdf, 0xe7, 0x8b, 0x7e, 0x17, 0xa3,
            0x17, 0xd9, 0x5e, 0x88, 0x39, 0x21, 0xf8, 0x7d,
            0x3c, 0x29, 0x21, 0x6c, 0x0e, 0xf1, 0xb4, 0x09,
            0x54, 0xe8, 0x20, 0x34, 0x90, 0x2e, 0xb4, 0x1a,
            0x95, 0x95, 0x90, 0xe5, 0xfb, 0xce, 0xfe, 0x8a,
            0xbf, 0xea, 0xaf, 0x09, 0x0c, 0x0b, 0x87, 0x22,
            0xe1, 0xfe, 0x82, 0x6e, 0x91, 0xe8, 0xd1, 0xb6,
            0x35, 0x03, 0x4f, 0xdb, 0xc1, 0x31, 0xe2, 0xba,
            0xa0, 0x13, 0xf6, 0xdb, 0x07, 0x9b, 0xcb, 0x99,
            0xce, 0x9f, 0x49, 0xc4, 0x51, 0x8e, 0xf1, 0x04,
            0x9b, 0x30, 0xc3, 0x02, 0xff, 0x7b, 0x94, 0xca,
            0x12, 0x69, 0x1e, 0xdb, 0x2d, 0x3e, 0xbd, 0x48,
            0x16, 0xe1, 0x72, 0x37, 0xb8, 0x5f, 0x61, 0xfa,
            0x24, 0x16, 0x3a, 0xde, 0xbf, 0x6a, 0x71, 0x62,
            0x32, 0xf3, 0xaa, 0x7f, 0x28, 0x3a, 0x0c, 0x27,
            0xeb, 0xa9, 0x0a, 0x4c, 0x79, 0x88, 0x84, 0xb3,
            0xe2, 0x52, 0xb9, 0x68, 0x1e, 0x82, 0xcf, 0x67,
            0x43, 0xf3, 0x68, 0xf7, 0x26, 0x19, 0xaa, 0xdd,
            0x3f, 0x1e, 0xc6, 0x46, 0x11, 0x9f, 0x24, 0x23,
            0xa7, 0xb0, 0x1b, 0x79, 0xa7, 0x0c, 0x5a, 0xfe,
            0x96, 0xf7, 0xe7, 0x88, 0x09, 0xa6, 0x69, 0xe3,
            0x8b, 0x02, 0x03, 0x01, 0x00, 0x01
        };
    };
}