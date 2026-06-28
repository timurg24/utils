#include "FileOps.hpp"
#include <fstream>
#include <sstream>

/// @brief Reads a text file into a string
/// @param path Path
/// @return Text contents
std::string utils::readFile(const std::filesystem::path &path)
{
    std::fstream file(path);
    if(!file) return "";
    std::stringstream buffer;
    buffer << file.rdbuf();
    file.close();
    return buffer.str();
}