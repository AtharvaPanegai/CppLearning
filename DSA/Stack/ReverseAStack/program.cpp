#include "bits/stdc++.h"
using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    int topEle = st.top();
    st.pop();
    insertAtBottom(st, ele);

    st.push(topEle);
}

void reverseStack(stack<int> &st)
{
    // base condition
    if (st.empty())
    {
        return;
    }

    // store the top value in a variable
    int ele = st.top();
    st.pop();
    reverseStack(st);
    // call the insert at Bottom Function
    insertAtBottom(st, ele);
}

void printStack(stack<int> st)
{
    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(1);
    st.push(4);
    st.push(2);
    st.push(6);

    reverseStack(st);

    printStack(st);
    return 0;
}