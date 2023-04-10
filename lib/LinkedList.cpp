#ifndef LINKED_LIST_CPP
#define LINKED_LIST_CPP

#include "LinkedList.hpp"

template <typename T>
LinkedList<T>::LinkedList() : _size(0), _head(nullptr), _tail(nullptr) {}

template <typename T>
LinkedList<T>::LinkedList(LinkedList<T> &&other) : _size(other._size),
                                                   _head(other._head),
                                                   _tail(other._tail)
{
    other._size = 0;
    other._head = nullptr;
    other._tail = nullptr;
}

// TODO: Implement all other methods defined in LinkedList.hpp here

#endif
