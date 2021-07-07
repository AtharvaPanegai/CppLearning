// Write a program to find 2 unique numbers in an array where all the numbers except two are present twice
// {2,4,6,7,4,5,6,2,}


#include <bits/stdc++.h>
using namespace std;

int setbit(int n,int pos){
    return ((n &(1<<pos))!=0);
}

void uniqueTwo(int arr[],int n){
    int xorSum=0;
    for (int i = 0; i < n; i++)
    {
        xorSum = xorSum ^ arr[i];
    }
    int tempXor = xorSum;
    int setBit = 0;
    int pos = 0;
    // to find the position or RSB
    while (setBit!=1)
    {
        setBit = xorSum&1;
        pos++;
        xorSum = xorSum>>1;
    }
    int newXor = 0;
    for (int i = 0; i < n; i++)
    {
        if(setbit(arr[i],pos-1)){
             newXor = newXor^arr[i];
        }
    }
    cout<<newXor<<endl;
    cout<<(tempXor^newXor);
    
}

int main()
{
    int arr[] = {2,4,6,7,4,5,6,2};
    uniqueTwo(arr,8);

    return 0;
}