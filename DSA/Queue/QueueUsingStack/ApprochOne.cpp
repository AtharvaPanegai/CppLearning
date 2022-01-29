#include "bits/stdc++.h"
using namespace std;

class myQueue
{
    // s1 is the main stack
    stack<int> s1;
    // stack s2 is used while delete element
    stack<int> s2;

    void enQueue(int x)
    {
        s1.push(x);
    }

    void deQueue()
    {
        // check if both the stacks are empty
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty";
            return;
        }
        // if s2 is empty
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        cout << s2.top() << "  Deleted";
        s2.pop();
    }

    int peek()
    {
        // check if both the stacks are empty
        if (s1.empty() && s2.empty())
        {
            cout << "Queue is empty";
            return -1;
        }
        // if s2 is empty
        if (s2.empty())
        {
            while (!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty()
    {
        return (s1.empty() && s2.empty());
    }
};

int main()
{

    return 0;
}