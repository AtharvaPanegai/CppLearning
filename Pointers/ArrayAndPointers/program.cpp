#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[]= {10,20,30};
    cout<<*arr<<endl;
    // when we cout *arr we get the zeroth element

    // printing array by using pointer
    int *ptr = arr;
    for (int i = 0; i < 3; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    // printing array without using pointer ptr
    for (int i = 0; i < 3; i++)
    {
        cout<<*(arr+i)<<endl;
    }
    

    return 0;
}