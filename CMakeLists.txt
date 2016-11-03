cmake_minimum_required(VERSION 3.6)
project(Algorithms)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/week1/QuickUnionUF.cpp
        src/week1/QuickFindUF.cpp
        src/week1/main.cpp
        src/week1/QuickUnionImprovedUF.cpp
        src/week1/BinarySearch.cpp)
add_executable(Algorithms ${SOURCE_FILES})