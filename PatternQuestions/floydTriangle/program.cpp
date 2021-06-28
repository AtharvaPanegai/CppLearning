// // floyd triangle
// 1
// 23
// 456
// 78910
// 1112231415

#include<iostream>
using namespace std;

int main(){
    int n,count;
    count = 1;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;   
    }
    
    return 0;
}
