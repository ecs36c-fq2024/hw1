cmake_minimum_required(VERSION 3.22)

project(hw1 VERSION 2.0.0)

add_executable(test test.cpp lib/LinkedList.cpp lib/Stack.cpp lib/Queue.cpp)

include_directories(lib)
