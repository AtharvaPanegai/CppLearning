// ****
// *  *
// *  *
// *  *
// **** 
// draw the above parttern of rectangle
// we've full stars where i == row  and i == 1
// also we've full stars in col = 1 and last col
// so we'll put * in i = 1 and i = row also same in the case of column
#include<iostream>
using namespace std;


int main(){
    int row,col;
    cin>>row>>col;
    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
            if (i==1 || i == row || j == 1 || j== col)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<"\n";
    }
    
    

    return 0;    
}
