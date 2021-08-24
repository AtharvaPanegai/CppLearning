#include "bits/stdc++.h"
using namespace std;

void StockSpan(vector<int> arr){
    int n = arr.size();
    vector<int> span(n,1);
    span[0] = 1;
    
    for (int i = 1; i < n; i++)
    {
        for (int j = i-1; (j>=0) && arr[j]<=arr[i]; j--)
        {
            span[i]++;
        }
        
    }   

    for (int i = 0; i < n; i++)
    {
        cout<<span[i]<<" ";
    }
    
    
}

int main()
{
    vector<int> arr = { 10, 4, 5, 90, 120, 80 };
    StockSpan(arr);
    return 0;
}