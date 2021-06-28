#include<bits/stdc++.h>
using namespace std;

int sum(int n){

    int ans=0;
    for (int i = 1; i<=n;++i)
    {
        
       ans = ans+i;
        
    }
    cout<<ans;
    return ans;
}

int main()
{

    int a;
    cin>>a;
    sum(a);
    return 0;
}