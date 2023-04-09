#ifndef STACK_HPP
#define STACK_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.hpp"

template <typename T>
class Stack
{
private:
    LinkedList<T> _llist;

public:
    Stack();
    Stack(LinkedList<T> &&llist);
    size_t size();
    std::optional<T> top();
    void push(T value);
    std::optional<T> pop();
};

#endif
