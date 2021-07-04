#include "bits/stdc++.h"

using namespace std;

int main(){

    // different type of declaring Strings
    
    // First way
    string strOne(5,'n');
    cout<<strOne<<endl;
    // Out put is Five Times n
    // nnnnn

    // Second Way
    string strTwo = "AtharvaPanegai";
    cout<<strTwo<<endl;

    // Third way
    string strThree;
    // for inputing whole Line we've to use the getline function
    getline(cin,strThree);
    cout<<strThree;

    return 0;
}