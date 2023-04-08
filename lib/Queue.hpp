#ifndef QUEUE_HPP
#define QUEUE_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.hpp"

template <typename T>
class Queue
{
private:
    LinkedList<T> llist;

public:
    Queue();
    Queue(LinkedList<T> &&llist);
    void enqueue(T value);
    T dequeue();
};

#endif
