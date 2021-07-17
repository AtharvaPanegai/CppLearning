#include "bits/stdc++.h"
using namespace std;

int getInversion(int arr[],int n){

    int inversionCount = 0;

    // here the i loop traversing from 0 to n-1
    // and the j loop traversing from 1 to n
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
                if(arr[i]>arr[j]){
                    inversionCount++;
                }
        }
        
    }
    return inversionCount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Inversions are : ";
    cout<<getInversion(arr,n);

    return 0;
}