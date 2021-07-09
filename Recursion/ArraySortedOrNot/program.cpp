#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    // strictly increasing array

    if (n==1)
    {
        return true;
    }
    
    // arr+1 put the initial pointer ahead and n-1 decreases the size of array
    bool reatArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && reatArray);
    
    
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<sorted(arr,n);

    return 0;
}