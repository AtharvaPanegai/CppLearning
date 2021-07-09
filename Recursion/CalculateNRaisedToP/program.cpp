#include <bits/stdc++.h>
using namespace std;

int raised(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    int prevPower = raised(n, p - 1);
    return n * prevPower;
}

int main()
{

    int n, p;
    cin >> n >> p;
    cout << raised(n, p);

    return 0;
}