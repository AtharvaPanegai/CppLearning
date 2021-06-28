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
    int n;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            cout<<factorialNumber(i)/(factorialNumber(j)*factorialNumber(i-j));
        }
        cout<<"\n";
    }
    

    return 0;
    
}