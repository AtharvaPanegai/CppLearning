#include "bits/stdc++.h"
using namespace std;
#define n 100

class Stack
{
    int *arr;
    int top;

public:
    // allocatong memory
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow"
                 << "\n";
            return;
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty"
                 << "\n";
            return;
        }
        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }

        return arr[top];
    }

    bool empty()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return true;
        }
        return false;
    }
};

int main()
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);

    cout << st.Top();
    st.pop();
    cout << st.Top();
    return 0;
}