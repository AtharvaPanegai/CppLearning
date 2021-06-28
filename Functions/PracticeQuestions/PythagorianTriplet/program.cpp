#include <bits/stdc++.h>
using namespace std;

void isTriplet(
    int num1,
    int num2,
    int num3)
{
    if (num1 == sqrt(pow(num2,2)+pow(num3,2)))
    {
        cout<<"yes it is Triplet";
    }
    else if (num2 == sqrt(pow(num1,2)+pow(num3,2)))
    {
        cout<<"yes it is Triplet";
    }
    else if (num3 == sqrt(pow(num2,2)+pow(num1,2)))
    {
        cout<<"yes it is Triplet";
    }
    else{
        cout<<"It's not a triplet";
    }
}

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    isTriplet(a,b,c);
    return 0;
}