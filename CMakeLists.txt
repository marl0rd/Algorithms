cmake_minimum_required(VERSION 3.6)
project(Algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/QuickUnionUF.cpp src/QuickFindUF.cpp src/main.cpp)
add_executable(Algorithms ${SOURCE_FILES})