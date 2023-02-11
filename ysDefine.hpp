#pragma once

#include <cstdint>
#include <string>
#include <concepts>
#include <exception>

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
    using StringView = std::wstring_view;
#else
    using String = std::string;
    using StringView = std::string_view;
#endif

    /////////////////
    ///  concept  ///
    /////////////////
    /**
     * @brief T를 숫자 타입으로 제약하는 콘셉트
     */
    template <typename T>
    concept number = std::integral<T> || std::floating_point<T>;
    /**
     * @brief T를 void타입으로 제약하는 콘셉트
     */
    template <typename T>
    concept non_void = !std::is_void_v<T>;
    /**
     * @brief T를 상수형으로 제약하는 콘셉트
     */
    template <typename T>
    concept constant = std::is_const_v<T>;
    /**
     * @brief T를 비상수형으로 제약하는 콘셉트
     */
    template <typename T>
    concept non_constant = !std::is_const_v<T>;

    class exception_msg : public std::exception
    {
    public:
        exception_msg(StringView msg = nullptr) : msg(msg) {}
        virtual const char* what() const override { return msg.data(); }
    private:
        StringView msg;
    };
    class not_supported : public std::exception { };
    class create_failed : public std::exception { };
    class division_by_zero : public std::exception { };
}