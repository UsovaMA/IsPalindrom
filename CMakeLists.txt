cmake_minimum_required(VERSION 3.0)

project(IsPalindrom)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(include)

add_subdirectory(3rdparty)
add_subdirectory(src)
add_subdirectory(test)


