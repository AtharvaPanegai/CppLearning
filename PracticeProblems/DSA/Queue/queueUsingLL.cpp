#include "bits/stdc++.h"
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class myQueue
{
    node *front;
    node *back;

    myQueue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            front = n;
            back = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "Nothing to POP\n";
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "Nothing to peek\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            cout << "Nothing to POP\n";
            return true;
        }
        return false;
    }
};

int main()
{

    return 0;
}