#include <bits/stdc++.h>
using namespace std;

int TimeComplexityOne()
{

    int n, m;
    cin >> n >> m;
    int a;
    for (int i = 0; i <= n; i++)
    {

        a = a + 1;
    }

    for (int j = 0; j <= n; j++)
    {

        a = a + 1;
    }
}

// we got the time complexity => O(m+n) for the above statement

int TimeComplexityTwo()
{

    int m, n;
    cin >> m >> n;
    int a;
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            a += 1;
        }
    }
}

// for the above statement the time complexity will be O(m*n)

int main()
{

    return 0;
}


