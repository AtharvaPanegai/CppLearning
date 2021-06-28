// neha is allowed to go out onlu on the odd days 
// she gets pocketmoney of 3000 of which she spends 300 on every outing 
// how many times she can go out => 15

#include<iostream>
using namespace std;

int main(){
    int numberOfTimes = 0;
    int pocketMoney = 3000;
    // for loop makes the counter for 30 days 
    for (int i = 0; i <=30; i++)
    {
        if (i%2==0)
        {
            // due to this if statement for loop will skip to the next iteration
            continue;

        }
        if (pocketMoney == 0)
        {
            // this will break the loop and will stop 
            break;
        }
        cout<<"Go Out today!"<<endl;
        pocketMoney = pocketMoney-300;
        
        numberOfTimes = numberOfTimes +1;
        
    }
    cout<<"The Outing Number will be : "<<numberOfTimes;

    return 0;
}