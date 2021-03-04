# cmake_minimum_required(VERSION <specify CMake version here>)
project(CPP_Contest)

set(CMAKE_CXX_STANDARD 14)

add_executable(CPP_Contest main.cpp CSES_Weird_Algorithm.cpp CSES_Missing_Number.cpp)
add_executable(CSES_Weird_Algorithm CSES_Weird_Algorithm.cpp)
add_executable(CSES_Missing_Number CSES_Missing_Number.cpp)