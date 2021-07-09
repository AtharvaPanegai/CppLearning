#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if (n==0)
    {
        return 1;

    }
    int prevMul = factorial(n-1);
    return n*prevMul;
    
}

int main(){

    int n;
    cin>>n;
    cout<<factorial(n);


    return 0;
}