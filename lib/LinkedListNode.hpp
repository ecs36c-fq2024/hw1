#ifndef LINKED_LIST_NODE_HPP
#define LINKED_LIST_NODE_HPP

// DO NOT CHANGE THIS FILE

template <typename T>
class LinkedListNode
{
private:
    // make constructors and `_next` field only available to `LinkedList` class
    // to avoid instantiating node and mutating `_next` outside `LinkedList` class.

    template <typename U>
    friend class LinkedList;

    LinkedListNode<T> *_next;

    explicit LinkedListNode(T value) : _value(value), _next(nullptr) {}
    LinkedListNode(T value, LinkedListNode<T> *next) : _value(value), _next(next) {}

public:
    T value;
    LinkedListNode<T> *next() { return _next; }
};

#endif
