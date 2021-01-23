/* 
* DO NOT CHANGE THIS FILE
*/
#include <iostream>
#include <fstream>
using namespace std;

typedef struct Node
{
   int val;
   bool flag;
   Node *next;
} Node;

/**
 * Stack Operations 
 */
class Stack
{
private:
   Node *head;
   unsigned int s_size;

public:
   Stack();
   void push(int e);
   int pop();
   static void solution(const char *input_path, const char *output_path);
};

/**
 * Queue
 */
class Queue
{
private:
   Node *head;
   unsigned int s_size;

public:
   Queue();
   void enqueue(int e);
   int dequeue();
   static void solution(const char *input_path, const char *output_path);
};

/**
 * Linked List
 */

class LinkedList
{
private:
   Node *head;

public:
   LinkedList(int v);
   void insert(int v);
   void del(int v);
   void reverse();
   void link(int a, int b);
   void create_new(int a, int b);

   bool is_circular();
   string print();
   string print(int i, int j);
   static void solution(const char *input_path, const char *output_path);
};

/* 
* DO NOT CHANGE THIS FILE
*/
