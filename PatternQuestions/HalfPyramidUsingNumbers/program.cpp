// print half pyramid using numbers
// 1
// 22
// 333
// 4444
// 55555
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    // loop for rows
    for (int i = 1; i <=n; i++)
    {
        // loop for columns
        for (int j = 1; j <=i; j++)
        {
            cout<<i;
        }
        cout<<endl;

        
    }
    
    return 0;
}

