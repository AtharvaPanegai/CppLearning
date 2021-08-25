#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;
    cin >> n;
    int target;
    cin >> target;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }
    bool found = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        int low = i + 1;
        int high = n - 1;
        while (low < high)
        {
            int curr = a[i] + a[low] + a[high];
            if (target == curr)
            {
                found = true;
            }
            if (curr < target)
            {
                low++;
            }
            else
            {
                high--;
            } 
        }
    }

    (found) ? cout << "True" : cout << "False";

    return 0;
}