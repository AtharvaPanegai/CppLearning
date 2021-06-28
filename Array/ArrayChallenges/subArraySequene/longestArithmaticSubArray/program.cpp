#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int answer = 2;
    int previousDifference = arr[1] - arr[0];
    int j = 2;
    int currentArithmaticSubArrayLenghth = 2;
    while (j < n)
    {
        if (previousDifference == arr[j] - arr[j - 1])
            currentArithmaticSubArrayLenghth++;
        else
        {
            previousDifference = arr[j] - arr[j - 1];
            currentArithmaticSubArrayLenghth = 2;
        }
        answer = max(answer, currentArithmaticSubArrayLenghth);
        j++;
    }
    cout<<answer<<endl;
    return 0;
}