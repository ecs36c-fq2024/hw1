#ifndef QUEUE_HPP
#define QUEUE_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.hpp"

template <typename T>
class Queue
{
private:
    LinkedList<T> _llist;

public:
    Queue();
    Queue(LinkedList<T> &&llist);
    size_t size();
    void enqueue(T value);
    std::optional<T> dequeue();
};

#endif
