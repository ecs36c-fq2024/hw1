#ifndef QUEUE_HPP
#define QUEUE_HPP

// DO NOT CHANGE THIS FILE

#include "LinkedList.cpp"

template <typename T>
class Queue
{
private:
    LinkedList<T> _llist;

public:
    Queue();
    Queue(LinkedList<T> &&llist);

    /// @brief Returns the number of elements in the queue.
    /// @return The number of elements in the queue.
    size_t size() const;

    /// @brief Adds an element to the queue.
    /// @param value: the value to be added
    void enqueue(T value);

    /// @brief Removes the oldest element from the queue and returns that element.
    /// @return The value of the dequeued element, or `std::nullopt` if the queue is empty.
    std::optional<T> dequeue();
};

#endif
