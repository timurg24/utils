#pragma once

// std
#include <string>
#include <vector>
#include <cstdint>

namespace utils {

    std::vector<std::string> splitString(const std::string& source, char delimeter);
    uint32_t hashString(const std::string& string);

}