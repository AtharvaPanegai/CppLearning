#include "bits/stdc++.h"
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = arr[i];
}

int partition(int arr[], int l, int r)
{
    // initially decide the pivot elemt
    int pivot = r;
    int i = l - 1;
    for (int j = l; i < r; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr, i, j);
        }
    }
    swap(arr, i + 1, r);
}

void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        quickSort(arr, l, pi);
        quickSort(arr, pi + 1, r);
    }
}

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    quickSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;

    return 0;
}