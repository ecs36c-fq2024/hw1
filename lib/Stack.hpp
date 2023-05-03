#ifndef STACK_HPP
#define STACK_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.cpp"

template <typename T>
class Stack
{
private:
    LinkedList<T> _llist;

public:
    Stack();
    
    /// @brief push the items into the stack sequentially, where end of items is the top
    Stack(const std::vector<T> &items);

    /// @brief Returns the number of elements in the stack.
    /// @return The number of elements in the stack.
    size_t size() const;

    /// @brief Returns the top element of the stack.
    /// @return The value of the top element, or `std::nullopt` if the stack is empty.
    std::optional<T> top() const;

    /// @brief Adds an element to the top of the stack.
    /// @param value: the value to be added
    void push(T value);

    /// @brief Removes the top element from the stack and returns that element.
    /// @return The value of the popped element, or `std::nullopt` if the stack is empty.
    std::optional<T> pop();
};

#endif
