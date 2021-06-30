#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cout<<"Enter Two Size of Matrix";
    cin>>n>>m;
    int arr[n][m];
    // for loop for inserting array
    for (int i = 0; i < n; i++)
    {
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    // now code for searhing the element
    int elementTobeSearched;
    cout<<"Enter element to be searched";
    cin>>elementTobeSearched;
    
    // Loops for traversing the array and searching the elements
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j] == elementTobeSearched){
                cout<<i<<" "<<j<<"\n";
                flag = true;
            }
        }
        
    }
    if(flag){
        cout<<"Element Found";

    }else{
        cout<<"Element Not Found";
    }

    return 0;
}