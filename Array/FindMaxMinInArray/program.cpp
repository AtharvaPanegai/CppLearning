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
    int maxNumber,minNumber;
    maxNumber =INT_MIN;
    minNumber = INT_MAX;

    for (int j = 0; j <n; j++)
    {
        // if (arr[j]>maxNumber)
        // {
        //     maxNumber = arr[j];
        // }
        // if (arr[j]<minNumber)
        // {
        //     minNumber = arr[j];
        // }
        maxNumber = max(maxNumber,arr[j]);
        minNumber = min(minNumber,arr[j]);
        
    }
    cout<<"This is Max NUmber : "<<maxNumber<<endl;
    cout<<"This is Min NUmber : "<<minNumber;
    
    
    return 0;
}