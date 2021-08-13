#include "bits/stdc++.h"
using namespace std;

int prefixEvaluation(string s){
    // let's declare the stack
    stack<int> st;

    // we 've to transverse through the String and get value from end to start
    for (int i = s.length()-1; i >=0; i--)
    {
        // now check if the element is operator or operand
        if(s[i]>='0' && s[i]<='9'){
            // if it is and operand push it into the stack
            st.push(s[i]-'0');
        }
        else{
            // now here we'll get the operands from the stack and will do the operations on those operands
            int op1= st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            // now according to the operator operations
            switch (s[i])
            {
            case '+':
                st.push(op1+op2);
                break;
            case '-':
                st.push(op1-op2);
                break;
            case '*':
                st.push(op1*op2);
                break;
            case '/':
                st.push(op1/op2);
                break;
            case '^':
                st.push(op1^op2);
                break;
            }
        }
    }
    
    return st.top();

}

int main()
{
    cout<<prefixEvaluation("-+7*45+20");

    return 0;
}
