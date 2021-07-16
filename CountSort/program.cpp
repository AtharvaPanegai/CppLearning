// 1.Find the number of every distinct element in the array
// 2.calculate position of each element in the sorted array

#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n){
    // max element
    int k = arr[0];
    for (int i = 0; i < n; i++)
    {
        k = max(k,arr[i]);

    }
    int count[10] = {0};
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    for (int i = 1; i<=k; i++)
    {
        count[i]+=count[i-1];
    }
    int outputArr[n];
    for (int i = n-1; i>=0; i--)
    {
        outputArr[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = outputArr[i];
    }
    
    
    
    
}

int main(){
    int arr[] = {13,2,3,4,1,6,4,3};
    countSort(arr,9);
    for (int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}