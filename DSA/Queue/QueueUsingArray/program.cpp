#include "bits/stdc++.h"
using namespace std;
#define n 20

class queueClass
{
    int *arr;
    int front;
    int back;

public:
    queueClass()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        // check if the queue is full
        if (back == n - 1)
        {
            cout << "Queue is Full"
                 << "\n";
            return;
        }
        back++;
        arr[back] = x;

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "no elements found\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "no elements found\n";
            return -1;
        }

        return arr[front];
    }

    bool empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    queueClass q;
    q.enqueue(1);
    q.enqueue(8);
    q.enqueue(2);
    q.enqueue(4);
    q.dequeue();
    q.enqueue(3);
    q.enqueue(5);
    cout<<q.peek();
    q.dequeue();
    cout<<q.peek();
    q.enqueue(6);


    cout<<q.peek();

    return 0;
}