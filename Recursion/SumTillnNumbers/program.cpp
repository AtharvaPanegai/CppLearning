#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{

    // to stop this recursion we added a condition if the n becomes zero it will terminate the loop
    if (n == 0)
    {
        return 0;
    }

    // calling the same function inside of that function is recursion
    int prevSum = sum(n - 1);
    return n + prevSum;
}

int main()
{
    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}