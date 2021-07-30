#include<iostream>
using namespace std;

int main(){
    int n;
    int remaining;
    int part=0;
    cout<<"Enter the Number to check ";
    cin>>n;
    int originaln = n;

    while (n>0)
    {
        remaining =n%10;
        part=(remaining*remaining*remaining)+part;
        n/=10;
    }
    if (part==originaln)
    {
       cout<<originaln<<" is a Armstrong Number";
    }
    



    return 0;

}