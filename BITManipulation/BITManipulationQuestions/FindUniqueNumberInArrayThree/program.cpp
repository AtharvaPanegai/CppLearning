// write the program to find unique number in array where all the remaining elements are repeated 3 times
// {1,3,2,3,4,2,1,1,2,3}

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n,int pos){
    return ((n & (1 << pos)) != 0);
}

int uniqueThree(int arr[],int n){
    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(arr[j],i))
            {
                sum++;
            }
            
        }
        if (sum%3==0)
        {
            // reStudy the BITManipulation
            
        }
        
        
    }
    
}

int main()
{

    return 0;
}