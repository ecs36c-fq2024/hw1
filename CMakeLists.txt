cmake_minimum_required(VERSION 3.22)

project(hw1 VERSION 2.0.0)

set(CMAKE_CXX_STANDARD 17)

include_directories(lib)

# The code below sets up GoogleTest
# Reference: http://google.github.io/googletest/quickstart-cmake.html

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  run_tests
  tests/LinkedListTest.cpp
  tests/StackTest.cpp
  tests/QueueTest.cpp
)
target_link_libraries(
  run_tests
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(run_tests)
