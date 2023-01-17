#pragma once

#include <cstdint>
#include <string>

namespace YS
{
    using Int = int;
    using UInt = unsigned int;

    using Int8 = int8_t;
    using UInt8 = uint8_t;
    using Int16 = int16_t;
    using UInt16 = uint16_t;
    using Int32 = int32_t;
    using UInt32 = uint32_t;
    using Int64 = int64_t;
    using UInt64 = uint64_t;

    using Float = float;
    using Double = double;

#ifdef _UNICODE
    using String = std::wstring;
#else
    using String = std::string;
#endif
}