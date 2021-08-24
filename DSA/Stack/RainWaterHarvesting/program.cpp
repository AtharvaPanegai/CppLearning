#include "bits/stdc++.h"
using namespace std;

int rainWaterSaved(vector<int> a)
{
    // size of the array
    int n = a.size();
    // left and right AUX array
    vector<int> right(n);
    vector<int> left(n);

    // let's put the left[0] = a[0] as both are same
    left[0] = a[0];
    // now transverse through and fill the left aux array
    for (int i = 1; i < n; i++)
    {
        // max of just left and current element
        left[i] = max(left[i - 1], a[i]);
    }

    // now again transeverse the a array and fill the right aux array
    // the last element of both arrays are same
    right[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = max(right[i + 1], a[i]);
    }

    int ans = 0;
    for(int i=0;i<n;i++){
        ans+=(min(left[i],right[i])) - a[i];
    }

    return ans;
}

int main()
{

    vector<int> a = { 0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1 };
    cout<<rainWaterSaved(a);

    return 0;
}