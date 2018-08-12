cmake_minimum_required(VERSION 3.2)
project(sort)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_BUILD_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")

include_directories(. ./bubble_sort ./quick_sort ./insert_sort ./shell_sort)
add_executable(bubble_sort ./bubble_sort/bubble_sort.cpp ./bubble_sort/main.cpp)
add_executable(quick_sort ./quick_sort/quick_sort.cpp ./quick_sort/main.cpp)
add_executable(insert_sort ./insert_sort/insert_sort.cpp ./insert_sort/main.cpp)
add_executable(shell_sort ./shell_sort/shell_sort.cpp ./shell_sort/main.cpp)
