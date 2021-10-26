#include "bits/stdc++.h"
using namespace std;

class Stack
{
    int N; //size
    queue<int> q1;
    queue<int> q2;

public:
    Stack()
    {
        N = 0;
    }

    void push(int val)
    {
        q2.push(val);
        N++;
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
        N--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {

        return N;
    }

    bool empty()
    {
        if (N != 0)
        {
            return false;
        }
        return true;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(123);
    st.push(67);
    st.push(3);

    cout << st.top() << "\n";
    st.pop();
    cout << st.top() << "\n";
    return 0;
}