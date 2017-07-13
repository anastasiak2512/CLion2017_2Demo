cmake_minimum_required(VERSION 3.8)
project(CLion2017_2Demo)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp)
add_executable(CLion2017_2Demo ${SOURCE_FILES})

add_subdirectory(Clang-Tidy)
add_subdirectory(Code_analysis)
add_subdirectory(debug)
add_subdirectory(misc)