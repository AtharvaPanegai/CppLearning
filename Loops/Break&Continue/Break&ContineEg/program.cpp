// print numbers from 1 to 100 
// except those who are divisible by 3

#include<iostream>
using namespace std;

int main(){
    int number;
    for (int number = 0; number <=100; number++)
    {
        if (number%3==0)
        {
            continue;
        }
        cout<<number<<endl;
    }
    

    return 0;
}