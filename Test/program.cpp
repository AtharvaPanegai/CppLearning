#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int n,a,countBefore=0,countAfter=0;
    float x;

    cout<<"Enter the number : ";
    scanf("%f",&x);

    n=(int)x;
    x=x-n;

    while(n!=0)
    {
        n=n/10;
        countBefore++;
    }
    while(x!=0)
    {
        x=x*10;
        n=(int)x;
        x=x-n;
        countAfter++;
    }
    cout<<"No. of digits before decimal point are : "<<countBefore<<endl;
    cout<<"No. of digits after decimal point are : "<<countAfter<<endl;
}