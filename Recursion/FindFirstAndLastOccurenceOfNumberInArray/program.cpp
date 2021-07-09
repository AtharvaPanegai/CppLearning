#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int i, int key)
{

    if (i == n)
    {
        return -1;
    }

    if (arr[i] == key)
    {
        return i;
    }
    return firstOccurence(arr, n, i + 1, key);
}
int lastOcc(int arr[], int n, int i, int key)
{
    // base condition
    if (i == n)
    {
        return -1;
    }
    int restAray = lastOcc(arr, n, i + 1, key);
    if (restAray != -1)
    {
        return restAray;
    }
    if (arr[i] == key)
    {
        return i;
    }

    return -1;
}

int main()
{
    int arr[] = {4, 2, 1, 2, 5, 2, 7};
    cout << firstOccurence(arr, 7, 0, 2);
    cout << lastOcc(arr, 7, 0, 7);

    return 0;
}