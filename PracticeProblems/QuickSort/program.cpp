#include "bits/stdc++.h"
using namespace std;

// partition Function
int partitionFunction(int arr[],int l,int r){
    // here we're taking the highest number as pivot element
    int pivot = arr[r];
    // we'll take index of smaller element
    int i = (l-1);
    // now we'll traverse from the low to high
    for (int j = l; j <=r; j++)
    {
        // if arr[j] < pivot then swap
        if (arr[j]<pivot)
        {
            swap(arr,i,j);
            i++;
        }
        
    }
    
}

// main function of quick sort
void quickSort(int arr[],int l,int r){
    if(l<r){
        // pivoat 
        int pi = partitionFunction(arr,l,r);
        // now after pivoting 
        // before the pivot element
        quickSort(arr,l,pi-1);
        // after the pivot element
        quickSort(arr,pi+1,r);
        
    }
}

int main(){

    return 0;
}