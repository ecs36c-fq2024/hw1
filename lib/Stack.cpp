#ifndef STACK_CPP
#define STACK_CPP

#include "Stack.hpp"

template <typename T>
Stack<T>::Stack(LinkedList<T> &&llist) : _llist(std::move(llist)) {}

template <typename T>
Stack<T>::Stack() : Stack(LinkedList<T>()) {}

// TODO: Implement all other methods defined in Stack.hpp here

#endif
