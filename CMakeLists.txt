add_library(utils STATIC
    src/StringOps.cpp
    src/FileOps.cpp
)

target_include_directories(utils
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}/include
)
