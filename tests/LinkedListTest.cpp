#include <gtest/gtest.h>
#include "LinkedList.cpp"

TEST(LinkedListTest, InstantiateEmptyList)
{
    LinkedList<int> llist;

    ASSERT_EQ(llist.head(), nullptr);
    ASSERT_EQ(llist.tail(), nullptr);
    ASSERT_EQ(llist.size(), 0);
}

TEST(LinkedListTest, InstantiateFromVector)
{
    LinkedList<int> llist(std::vector<int>{17, 19, 23});

    ASSERT_EQ(llist.size(), 3);

    LinkedListNode<int> *node = llist.head();
    ASSERT_EQ(node->value, 17);
    ASSERT_EQ(node->next()->value, 19);
    ASSERT_EQ(node->next()->next()->value, 23);
    ASSERT_EQ(node->next()->next()->next(), nullptr);
}

TEST(LinkedListTest, AppendToEmptyList)
{
    LinkedList<int> llist;
    LinkedListNode<int> *node = llist.append(17);

    ASSERT_EQ(node, llist.head());
    ASSERT_EQ(node, llist.tail());
    ASSERT_EQ(node->value, 17);
    ASSERT_EQ(node->next(), nullptr);
    ASSERT_EQ(llist.size(), 1);
}

TEST(LinkedListTest, AppendToNonEmptyList)
{
    LinkedList<int> llist;
    LinkedListNode<int> *first = llist.append(17);
    LinkedListNode<int> *second = llist.append(19);

    ASSERT_EQ(first, llist.head());
    ASSERT_EQ(first->value, 17);
    ASSERT_EQ(first->next(), second);

    ASSERT_EQ(second, llist.tail());
    ASSERT_EQ(second->value, 19);
    ASSERT_EQ(second->next(), nullptr);

    ASSERT_EQ(llist.size(), 2);
}

// TODO: Add more tests for LinkedList here
