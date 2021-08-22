#include "bits/stdc++.h"
using namespace std;

class myQueue
{
    stack<int> s1;

public:
    void push(int x)
    {
        s1.push(x);
        return;
    }

    int pop()
    {
        if (s1.empty())
        {
            cout << "Nothing to POP\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }

        int item = pop();
        s1.push(x);

        return item;
    }

    bool empty()
    {
        if (s1.empty())
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
    cout << q.pop() << "\n";
    q.push(2);
    q.push(3);

    cout << q.pop() << "\n";
    return 0;
    return 0;
}