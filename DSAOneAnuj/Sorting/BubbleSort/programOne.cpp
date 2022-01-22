#include "bits/stdc++.h"
using namespace std;

void swapFunction(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                swapped = true;
                swapFunction(arr, j, j + 1);
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {5, 2, 6, 1, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}