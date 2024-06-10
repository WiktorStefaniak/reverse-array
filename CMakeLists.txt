cmake_minimum_required(VERSION 3.27)
project(dynamic_array)

set(CMAKE_CXX_STANDARD 17)

add_executable(dynamic_array main.cpp
        dynamic-array.cpp
        dynamic-array.h)
