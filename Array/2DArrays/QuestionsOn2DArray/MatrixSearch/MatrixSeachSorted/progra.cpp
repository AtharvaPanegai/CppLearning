// Given a nxm matrix.
// Write an algorithm to find that the given value exists in the matrix or not.
// Integers in each row are sorted in ascending from left to right.
// Integers in each column are sorted in ascending from top to bottom.

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    bool flag = false;
    int target;
    cin>>target;

    int r = 0,c = col-1;
    while (r<row && c>=0)
    {
        if(arr[r][c] == target){
            flag = true;
        }
        if(arr[r][c]>target){
            c--;
        }else{
            r++;
        }

    }
    if (flag)
    {
        cout<<"Element Found";
    }
    else{
        cout<<"Element Not Found";
    }
    
    

    return 0;
}