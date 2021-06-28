#include<iostream>
using namespace std;

int main(){

    int i,j,k;
    i=1;
    j=2;
    k = i + j + i++ + j++ + ++i + ++j;
    cout<<k;
    


    return 0;
}