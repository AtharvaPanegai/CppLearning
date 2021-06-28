#include<bits/stdc++.h>
using namespace std;

int binaraySearch(int arr[],int n,int key){

    int starting=0;
    int ending = n;
    while (starting<=ending)
    {
        int mid = (starting+ending)/2;
        if (arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key){
            ending = mid-1;

        }
        else{
            starting = mid+1;
        }

    }
    return -1;

}


int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i <n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    cout<<binaraySearch(arr,n,key);
    

}