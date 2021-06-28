#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum =0;
    // taken number from user
    for (int counter = 0; counter <=n; counter++)
    {
        
        sum = sum+counter;
        
    }
    cout<<"Sum is "<<sum;

    return 0;
}