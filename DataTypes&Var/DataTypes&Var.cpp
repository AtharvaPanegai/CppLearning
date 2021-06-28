#include<iostream>
using namespace std;

int main(){

    int a=12;
    long b = 1234567890;
    float c = 12.44;
    char ch;
    short s = 1;
    bool bo = true;


    cout<<"Size of Int : "<<sizeof(a)<<endl;
    cout<<"Size of long : "<<sizeof(b)<<endl;
    cout<<"Size of float : "<<sizeof(c)<<endl;
    cout<<"Size of char : "<<sizeof(ch)<<endl;
    cout<<"Size of short : "<<sizeof(s)<<endl;
    cout<<"Size of bool : "<<sizeof(bo)<<endl;

    return 0;
}