#include "bits/stdc++.h"
using namespace std;

int postFixEvaluation(string s)
{
    stack<int> st;
    stack<long long> st;
    int op1=0, op2=0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
            // -0 becasue we want to push an integer
        }
        else
        {
            op2 = st.top();
            st.pop();
            op1 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;
            case '*':
                st.push(op1 * op2);
                break;
            case '/':
                st.push(op1 / op2);
                break;
            case '^':
                st.push(op1 ^ op2);
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout << postFixEvaluation("46+2/5*7+");

    return 0;
}