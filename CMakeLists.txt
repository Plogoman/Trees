cmake_minimum_required(VERSION 3.27)
project(Trees)

set(CMAKE_CXX_STANDARD 20)

add_executable(Trees
        main.cpp
        Tree.cpp
        Tree.hpp
        types.hpp
)