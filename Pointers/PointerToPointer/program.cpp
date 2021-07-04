#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;;
    int *ptr;
    ptr=&a;
    cout<<*ptr;
    // a pointer that's pointing to ptr
    int **q = &ptr;
    cout<<*q<<endl;
    // value of ptr i.e = &a
    // if we pur **q it will give us the vakue of a
    cout<<**q;
     



    return 0;
}