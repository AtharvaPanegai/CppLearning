#include<iostream>
using namespace std;

int main(){
    int n;
    int rem;
    int part=0;
    cout<<"Enter the Number to check ";
    cin>>n;
    int originaln = n;

    while (n>0)
    {
        rem =n%10;
        part=(rem*rem*rem)+part;
        n/=10;
    }
    if (part==originaln)
    {
       cout<<originaln<<" is a Armstrong Number";
    }
    



    return 0;

}