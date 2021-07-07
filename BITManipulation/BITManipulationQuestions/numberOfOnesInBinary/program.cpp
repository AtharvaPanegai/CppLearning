// write a program to count the number of ones in binary representation

#include <bits/stdc++.h>
using namespace std;

int numberOfOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & n - 1;
        count++;
    }
    return count;
}

int main()
{
    cout << numberOfOnes(2);

    return 0;
}