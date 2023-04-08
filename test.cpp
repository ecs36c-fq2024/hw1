/*
 * This file will not be included in the submission.
 * You can add more test cases here to improve test coverage.
 */
#include <cassert>
#include "LinkedList.cpp"
#include "Queue.hpp"
#include "Stack.hpp"

void test_linked_list()
{
    LinkedList<int> llist;

    assert(llist.size() == 0);
    assert(llist.head() == nullptr);
    assert(llist.tail() == nullptr);

    LinkedListNode<int> *node;

    node = llist.append(17);
    assert(node == llist.tail());
    assert(llist.size() == 1);
    assert(llist.head()->value == 17);
    assert(llist.tail()->value == 17);

    node = llist.append(19);
    assert(node == llist.tail());
    assert(llist.size() == 2);
    assert(llist.head()->value == 17);
    assert(llist.tail()->value == 19);
    assert(llist.head()->next == llist.tail());

    llist.prepend(13);
    assert(node == llist.head());
    assert(llist.size() == 3);
    assert(llist.head()->value == 13);
    assert(llist.tail()->value == 19);
    assert(llist.head()->next->next == llist.tail());
}

int main(int argc, char const *argv[])
{
    test_linked_list();
    return 0;
}
