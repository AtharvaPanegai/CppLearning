// draw inverted half pyramid
// always use 2 loops even if only one input is from the user 
// one loop to traverse through the numbers and one to print the numbers 


#include<iostream>
using namespace std;

int main(){

  int n;
  cout<<"enter the Number";
  cin>>n;
  for (int i = n; i >=1; i--)
  {
    for (int j = 1; j <=i; j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
  


  return 0;
}