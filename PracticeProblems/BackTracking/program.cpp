// // back tracking problem
// // rat in maze
// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

#include "bits/stdc++.h"
using namespace std;

// first we've to check if the block at right and at down is safe to move or not
// params are dynamic array , x&y for position ,n for the size of the maze
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
        // your safe to move
    }
}

// function

bool ratInMaze(int **arr, int x, int y, int n, int **solArr)
{
    // base conditon
    if (x == n - 1 && y == n - 1)
    {
        solArr[x][y] = 1;
        return true;
    }

    // recursive condition
    if (isSafe(arr, x, y, n))
    {

        // putting value of solArr
        solArr[x][y] = 1;
        // moving right
        if (ratInMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        // moving down
        if (ratInMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        // backTracking Conditions
        solArr[x][y] = 0;
        return false;
    }
    return false;
}

int main()
{

    // input of size
    int n;
    cin >> n;

    // declaring dynamic array
    int **arr = new int *[n];
    // memory allocation
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

    // input to the array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    // dynamic array for solution array

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        // initlize the sol array at 0
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }

    // print the sol array
    if (ratInMaze(arr, 0, 0, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}