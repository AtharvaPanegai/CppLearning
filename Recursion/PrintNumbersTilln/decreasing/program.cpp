#include<bits/stdc++.h>
using namespace std;

int printNumbers(int n){
    if (n==0)
    {
        return 0;
    }
    
    cout<<n<<endl;
    printNumbers(n-1);

}

int main(){

    int n;
    cin>>n;
    printNumbers(n);

    return 0;
}