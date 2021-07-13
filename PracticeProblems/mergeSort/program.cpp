#include "bits/stdc++.h"
using namespace std;

void mergeFunction(int arr[], int l, int mid, int r)
{
    // first we've to make the separated arrays as temp arrays
    // size of the arrays
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // declaring the arrays
    int tempArrOne[n1];
    int tempArrTwo[n2];

    // fill up the arrays
    for (int i = 0; i < n1; i++)
    {
        tempArrOne[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        tempArrTwo[i] = arr[mid + 1 + i];
    }

    // now let's iterate through the arrays
    // let's bring some pointers for this
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (tempArrOne[i] < tempArrTwo[j])
        {
            arr[k] = tempArrOne[i];
            i++, k++;
        }
        else
        {
            arr[k] = tempArrTwo[j];
            j++, k++;
        }
    }

    while (i < n1)
    {
        arr[k] = tempArrOne[i];
        i++, k++;
    }
    while (j < n2)
    {
        arr[k] = tempArrTwo[j];
        j++, k++;
    }
}

// merge sort function
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        // recursive function of merge sort
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // now merging two arrays
        mergeFunction(arr, l, mid, r);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    mergeSort(arr, 0, 4);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i];
    }
    cout << "\n";

    return 0;
}