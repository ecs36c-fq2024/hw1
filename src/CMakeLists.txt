add_library(
    datastructure
    stack.cpp
    queue.cpp
    linked_list.cpp
    datastructure.hpp
)

# Create a insertion sort library
target_include_directories(datastructure PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")

# This command add the include path to the target linked from insertion_sort


