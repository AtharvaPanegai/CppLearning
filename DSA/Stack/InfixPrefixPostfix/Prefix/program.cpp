#include "bits/stdc++.h"
using namespace std;

int prefixEvvaluation(string s)
{
    stack<int> st;
    for (int i = s.length()-1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            // we are pushing the integer value into the stack
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.top();
            st.pop();
            int op2 = st.top();
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
                st.push(pow(op1, op2));
                break;
            }
        }
    }
    return st.top();
}

int main()
{
    cout<<prefixEvvaluation("-+7*45+20");

    return 0;
}

// -+7*45+20