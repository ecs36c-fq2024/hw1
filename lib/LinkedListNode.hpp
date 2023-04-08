#ifndef LINKED_LIST_NODE_HPP
#define LINKED_LIST_NODE_HPP

// DO NOT CHANGE THIS FILE

template <typename T>
class LinkedListNode
{
private:
    // make constructors and fields only available to LinkedList class.

    template <typename U>
    friend class LinkedList;

    T _value;
    LinkedListNode<T> *_next;

    explicit LinkedListNode(T value) : _value(value), _next(nullptr) {}
    LinkedListNode(T value, LinkedListNode<T> *next) : _value(value), _next(next) {}

public:
    T value() { return _value; }
    LinkedListNode<T> *next() { return _next; }
};

#endif
