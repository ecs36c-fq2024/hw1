#ifndef STACK_HPP
#define STACK_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.hpp"

template <typename T>
class Stack
{
private:
    LinkedList<T> llist;

public:
    Stack();
    Stack(LinkedList<T> &&llist);
    T top();
    void push(T value);
    T pop();
};

#endif
