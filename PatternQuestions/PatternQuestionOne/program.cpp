// draw a rectangular pattern of stars
// rows and columns user defined

#include <iostream>
using namespace std;

int main()
{
  int rows,col;
  cin>>rows>>col;
  // forloop for each row
  for (int i = 1; i <=rows; i++)
  {
    // this for loop for the printing of stars row by row in each column
    for (int j = 1; j <=col; j++)
    {
      cout<<"*";
    }
    cout<<endl;

    
  }
  

  return 0;
}