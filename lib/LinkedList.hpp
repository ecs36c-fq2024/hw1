#ifndef LINKED_LIST_HPP
#define LINKED_LIST_HPP

// DO NOT CHANGE THIS FILE

#include <cstddef>
#include <optional>
#include <vector>
#include "LinkedListNode.hpp"

template <typename T>
class LinkedList
{
private:
    size_t _size;
    LinkedListNode<T> *_head;
    LinkedListNode<T> *_tail;

public:
    /// @brief create a new empty list
    LinkedList();

    /// @brief copy constructor
    /// @param other: the other list to be copied
    /// @note the default copy constructor is deleted because it will only copy shallowly
    /// and may result in two inter-dependent lists.
    LinkedList(const LinkedList<T> &other) = delete;

    /// @brief move constructor
    /// @param other: the other list to be moved
    LinkedList(LinkedList<T> &&other);

    /// @brief create a new list from a vector
    /// @param items: the vector whose values should be copied
    explicit LinkedList(const std::vector<T> &items);

    /// @brief get the number of elements in the list
    /// @return the number of elements in the list
    size_t size() const;

    /// @brief get the head node
    /// @return the head node of the list if the list is not empty; nullptr otherwise
    LinkedListNode<T> *head() const;

    /// @brief get the tail node
    /// @return the tail node of the list if the list is not empty; nullptr otherwise
    LinkedListNode<T> *tail() const;

    /// @brief find the first occurrence of the specified value in the list
    /// @param value: the value we are trying to find
    /// @return the node that contains the value specified if exists; nullptr otherwise
    LinkedListNode<T> *find(T value) const;

    /// @brief add a new element to the beginning of the list
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *prepend(T value);

    /// @brief add a new element to the end of the list
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *append(T value);

    /// @brief insert a new element after the specified node
    /// @param node: the node before the insertion position.
    /// If nullptr, the new element will be added to the beginning of the list.
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *insertAfter(LinkedListNode<T> *node, T value);

    /// @brief remove the first element from the list
    /// @return the removed element if there was at least one element in the list; std::nullopt otherwise
    std::optional<T> removeHead();

    /// @brief removes the first occurrence of the given element if found
    /// @param value: the value to be removed
    /// @return true of the value is found and removed; false otherwise
    bool remove(T value);

    /// @brief remove all elements from the list
    void clear();

    ~LinkedList();
};

#endif
