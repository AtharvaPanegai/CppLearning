#include<bits/stdc++.h>
using namespace std;

int factorialNumber(int num){


    int factorial=1;
    for (int i = 2; i <=num; i++)
    {
        factorial *=i;
    }
    return factorial;
}

int main(){
    int inputNumber;
    cin>>inputNumber;
    cout<<factorialNumber(inputNumber);
    return 0;
}