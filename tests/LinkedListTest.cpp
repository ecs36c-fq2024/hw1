#include <gtest/gtest.h>
#include "LinkedList.cpp"

TEST(LinkedListTest, InstantiateEmptyList) {
    LinkedList<int> llist;

    ASSERT_EQ(llist.size(), 0);
    ASSERT_EQ(llist.head(), nullptr);
    ASSERT_EQ(llist.tail(), nullptr);
}

TEST(LinkedListTest, AppendToEmptyList) {
    LinkedList<int> llist;

    LinkedListNode<int> *node = llist.append(17);
    ASSERT_EQ(node, llist.tail());
    ASSERT_EQ(llist.size(), 1);
    ASSERT_EQ(llist.head()->value(), 17);
    ASSERT_EQ(llist.tail()->value(), 17);
}

TEST(LinkedListTest, AppendToNonEmptyList) {
    LinkedList<int> llist;
    llist.append(17);

    LinkedListNode<int> *node = llist.append(19);
    ASSERT_EQ(node, llist.tail());
    ASSERT_EQ(llist.size(), 2);
    ASSERT_EQ(llist.head()->value(), 17);
    ASSERT_EQ(llist.tail()->value(), 19);
}

// TODO: Add more tests for LinkedList here
