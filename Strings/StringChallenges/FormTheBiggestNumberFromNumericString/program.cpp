#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string inputString;
    cin>>inputString;
    sort(inputString.begin(),inputString.end(),greater<int>());
    cout<<inputString;

    return 0;
}