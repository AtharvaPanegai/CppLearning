#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n){

    int spf[100] = {0};
    for (int i = 2; i <=n; i++)
    {
        spf[i] = i;

    }
    
    for (int i = 0; i <=n; i++)
    {
        if (spf[i]==i)
        {
            for (int j = i*i; j <=n; j+=i)
            {
                    if (spf[j]==j)
                    {
                        spf[j] = i;
                    }
                    
            }
            
        }
        
    }
    
}

int main(){

    return 0;
}