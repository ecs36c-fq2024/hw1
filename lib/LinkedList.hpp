#include <cstddef>
#include <vector>

template <typename T>
struct LinkedListNode
{
    T value;
    LinkedListNode<T> *next;
};

template <typename T>
class LinkedList
{
private:
    size_t _size;
    LinkedListNode<T> *_head;
    LinkedListNode<T> *_tail;

public:
    LinkedList();

    explicit LinkedList(std::vector<T> items);

    /// @brief get the number of elements in the list
    /// @return the number of elements in the list
    size_t size();

    /// @brief get the head node
    /// @return the head node of the list if the list is not empty; nullptr otherwise
    LinkedListNode<T> *head();

    /// @brief get the tail node
    /// @return the tail node of the list if the list is not empty; nullptr otherwise
    LinkedListNode<T> *tail();

    /// @brief find the first occurrence of the specified value in the list
    /// @param value: the value we are trying to find
    /// @return the node that contains the value specified if exists; nullptr otherwise
    LinkedListNode<T> *find(T value);

    /// @brief add a new element to the beginning of the list
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *prepend(T value);

    /// @brief add a new element to the end of the list
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *append(T value);

    /// @brief insert a new element after the specified node
    /// @param node: the node before the insertion position
    /// @param value: the value to be added
    /// @return the new node created containing the specified value
    LinkedListNode<T> *insertAfter(LinkedListNode<T> *node, T value);

    /// @brief remove the first element from the list
    /// @return true if there was at least one element in the list; false otherwise
    bool removeHead();

    /// @brief removes the first occurrence of the given element if found
    /// @param value: the value to be removed
    /// @return true of the value is found and removed; false otherwise
    bool remove(T value);

    /// @brief remove all elements from the list
    void clear();

    ~LinkedList();
};
