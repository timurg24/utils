#pragma once

/*
    Error
    Handles errors
*/

// std
#include <string>

namespace utils {
    void Print(const char* fmt, ...);
    void Alert(const char* fmt, ...);
    [[noreturn]] void FatalError(const char* fmt, ...);
}

