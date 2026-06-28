#include "StringOps.hpp"

/// @brief Splits a string into a vector
/// @param source Source string
/// @param delimeter Delimeter character
/// @return Vector of split text
std::vector<std::string> utils::splitString(const std::string &source, char delimeter)
{
    std::vector<std::string> result;
    std::string acc;
    
    for(const char c : source) {
        if(c == delimeter) {
            result.emplace_back(acc);
            acc = "";
        } else acc += c;
    }

    result.emplace_back(acc);
    return result;
}
