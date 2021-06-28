#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        sum = 0;
        for (int j = i; j < n-1; j++)
        {
            sum +=arr[j];
            cout<<sum<<" "<<endl;;
        }
        
    }
    
    

    return 0;
}