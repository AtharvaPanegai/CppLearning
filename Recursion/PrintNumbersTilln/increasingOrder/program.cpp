#include <bits/stdc++.h>
using namespace std;

int printNumbers(int n)
{
    // incresing Order
    if (n == 0)
    {
        return 0;
    }
    printNumbers(n - 1);
    cout << n << endl;
}

int main()
{

    int n;
    cin >> n;
    printNumbers(n);

    return 0;
}