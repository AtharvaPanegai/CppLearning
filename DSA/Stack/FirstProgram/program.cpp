#include "bits/stdc++.h"
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){
        if(top==n-1){
            cout<<"Stack OverFlow";
            return;
        }

        top++;
        arr[top] = x;
    }
    
    void pop(){
        if(top==-1){
            cout<<"Stack is Empty";
            return;
        }
        top--;
    }

    int Top(){
        if(top==-1){
            cout<<"NO element Found";
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        return top==-1;
    }
};

int main()
{

    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.Top()<<endl;
    s.pop();
    cout<<s.Top()<<endl;

    return 0;
}