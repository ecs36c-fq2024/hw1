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
