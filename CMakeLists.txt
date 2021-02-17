# cmake_minimum_required(VERSION <specify CMake version here>)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP main.cpp calculator/calculator.cpp calculator/calculator.h fibonacci/fibonacci.cpp fibonacci/fibonacci.h)