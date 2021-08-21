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
    public:
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
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void pop()
    {
        if (front == NULL)
        {
            cout << "queue is underFlow\n";
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
            cout << "Queue is NL"
                 << "\n";
            return -1;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    myQueue q;
    q.push(1);
    q.push(7);
    q.push(324);
    cout<<q.peek()<<"\n";
    q.pop();
    cout<<q.peek()<<"\n";
    q.push(245);
    q.push(2);
    return 0;
}