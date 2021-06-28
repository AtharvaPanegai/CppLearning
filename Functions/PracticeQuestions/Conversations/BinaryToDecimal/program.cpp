#include<bits/stdc++.h>
using namespace std;


int binaryToDecimalConversion(int num){

    int ans = 0;
    int x = 1;
    while (num>0)
    {
        int y = num%10;
        // here x represents 2^1 2^2 2^3...
        ans += x*y;
        x *=2;
        num/=10;


    }
    return ans;



}

int main(){

    int a;
    cin>>a;
    cout<<binaryToDecimalConversion(a);
    

    return 0;
}