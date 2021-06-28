// Insert an element from unsorted array to its correct position in sorted array

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 1; i <n; i++)
    {
        int currentNumber = arr[i];
        int j = j-1;
        while (arr[j]>currentNumber && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = currentNumber;

    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
    

    return 0;
}