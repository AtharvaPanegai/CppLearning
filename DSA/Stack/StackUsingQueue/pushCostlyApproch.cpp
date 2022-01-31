#include "bits/stdc++.h"
using namespace std;

class Stack
{
    int N; // size of the stack
    queue<int> q1;
    queue<int> q2;

    // constructorf
    Stack()
    {
        N = 0;
    }

    void push(int x)
    {
        q2.push(x);
        // increasing the size of stack so that if asked we can return it
        N++;
        // now transfer all the elements from q1 to q2
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        // now swap both the queues
        queue<int> temp = q2;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        if (q1.empty())
        {
            cout << "Queue is empty\n";
            return;
        }
        q1.pop();
    }


    

};

int main()
{

    return 0;
}