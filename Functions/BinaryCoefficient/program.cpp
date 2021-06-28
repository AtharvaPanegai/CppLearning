#include<bits/stdc++.h>
using namespace std;

int factorialNumber(int num){


    int factorial=1;
    for (int i = 2; i <=num; i++)
    {
        factorial *=i;
    }
    return factorial;
}

int main(){

    int n,r;
    cin>>n>>r;

    int ans = factorialNumber(n)/(factorialNumber(r)*factorialNumber(n-r));
    cout<<ans;
    return 0;
}