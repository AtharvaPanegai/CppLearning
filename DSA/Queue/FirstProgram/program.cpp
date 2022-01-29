#include "bits/stdc++.h"
using namespace std;
#define n 100
class queuee
{
    int *arr;
    int front;
    int back;

public:
    queuee()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue is Full\n";
            return;
        }
        back++;
        arr[back] = x;

        // for the very first time of inserting element front should be increased from -1 to 0

        if (front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty";
            return;
        }

        front++;
    }

    int peek()
    {
        if (front == -1 || front > back)
        {
            cout << "Queue is empty";
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
    queuee q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(5);
    q.enqueue(34);
    cout << q.peek();
    q.dequeue();
    cout << q.peek();
    return 0;
}