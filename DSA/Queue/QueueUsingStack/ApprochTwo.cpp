#include "bits/stdc++.h"
using namespace std;

class myQueue
{
    stack<int> s1;

    void enQueue(int x)
    {
        s1.push(x);
    }

    int deQueue()
    {
        if (s1.empty())
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            cout << "Deleted Element is  : " << x << "\n";
            return x;
        }

        int item = deQueue();
        s1.push(x);

        return item;
    }
};

int main()
{

    return 0;
}