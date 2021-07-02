// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int row,col,target;
    cin>>row>>col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Enter the Target"<<endl;
    cin>>target;
    bool flag = false;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(target==arr[i][j]){
                flag = true;
                break;
            }
            
        }
        
    }
    if(flag){
        cout<<"Element Found";
    }else{
        cout<<"Element not Found";
    }
    
    return 0;
}