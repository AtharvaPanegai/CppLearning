// print all the prime number between a and b

#include<iostream>
using namespace std;

int main(){

    int a,b,i;
    cin>>a>>b;
    // this for loop for iterating from a to b
    for (int num = a; num <= b; num++)
    {
       for (int i = 2; i < num; i++)
       {
           if (num%i==0)
           {
               break;
           }
           
       }
       if (i==num)
       {
           cout<<num<<endl;
           
       }
       
       
    }
    
    return 0;
}