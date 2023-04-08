template <typename T>
class Stack
{
private:
    LinkedList<T> llist;

public:
    Stack();
    Stack(LinkedList<T> &&llist);
    T top();
    void push(T value);
    T pop();
};
