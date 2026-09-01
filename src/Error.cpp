#include "Utils/Error.hpp"

// std
#include <iostream>

// c
#include <cstdarg>
#include <cstdio>
#include <cstdlib>

// windows
#include <windows.h>

void Print(const char* fmt, ...) {
    char buffer[2048];

    va_list args;
    va_start(args, fmt);

    vsnprintf(buffer, sizeof(buffer), fmt, args);

    va_end(args);

    std::cout << buffer << "\n";
}

void Alert(const char* fmt, ...)
{
    char buffer[2048];

    va_list args;
    va_start(args, fmt);

    vsnprintf(buffer, sizeof(buffer), fmt, args);

    va_end(args);

#ifdef _WIN32
    MessageBoxA(
        nullptr,
        buffer,
        "ALERT",
        MB_OK | MB_ICONERROR
    );
#endif
}

[[noreturn]]
void FatalError(const char* fmt, ...)
{
    char buffer[2048];

    va_list args;
    va_start(args, fmt);

    vsnprintf(buffer, sizeof(buffer), fmt, args);

    va_end(args);

#ifdef _WIN32
    MessageBoxA(
        nullptr,
        buffer,
        "FATAL ERROR",
        MB_OK | MB_ICONERROR
    );
#endif

    std::exit(EXIT_FAILURE);
}