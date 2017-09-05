cmake_minimum_required(VERSION 3.8)
project(stack_lists)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/List.cpp include/List.h src/Node.cpp include/Node.h src/Stack.cpp include/Stack.h)
add_executable(stack_lists ${SOURCE_FILES})