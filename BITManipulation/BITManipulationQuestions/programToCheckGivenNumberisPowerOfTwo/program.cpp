#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n && !(n & n - 1));
}

int main()
{
    cout<<isPowerOfTwo(4);

    return 0;
}