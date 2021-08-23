#include "bits/stdc++.h"
using namespace std;

int main()
{

    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_front(4);
    dq.push_front(5);
    for (auto i : dq)
    {
        cout << i << " ";
    }
    cout<<"\n";
    return 0;
}