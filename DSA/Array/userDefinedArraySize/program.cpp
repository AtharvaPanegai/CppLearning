#include<bits/stdc++.h>
using namespace std;

int main(){

    int sizeofArray;
    cin>>sizeofArray;
    int arr[sizeofArray];
    int input;
    for (int i = 0; i <sizeofArray; i++)
    {
        int input;
        cin>>input;
        arr[i] = input;
        
    }
    // Array Reverse
    for (int j = sizeofArray-1; j>=0; j--)
    {
        cout<<arr[j]<<" ";
    }
    
    return 0;
}