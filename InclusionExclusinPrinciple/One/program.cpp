// How Many Numbers are divisible by a&b in between 1 and n

#include <bits/stdc++.h>
using namespace std;

int divisible(int a, int b, int n)
{
    int divisibleByA = n/a;
    int divisibleByB = n/b;

    int divisibleByBoth = n/(a*b);

    return divisibleByA+divisibleByB-divisibleByBoth;
}

int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<divisible(a,b,n);


    return 0;
}