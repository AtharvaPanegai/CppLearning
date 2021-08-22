#include "bits/stdc++.h"
using namespace std;

class Stack{
    queue<int> q1;
    queue<int> q2;
    int N; //size

    Stack(){
        N=0;
    }

    void push(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
            // push remaining elements in the q2
            q2.push(q1.front());
            q1.pop();
        }

        // temp Queue to exchange 
        queue<int> temp = q1;
        q1 = q2;
        q2 = q1;
    }

    void pop(){
        q1.pop();
        N--;
    }

    int top(){
        return q1.front();
    }

    int size(){
        return N;
    }

};

int main()
{

    return 0;
}