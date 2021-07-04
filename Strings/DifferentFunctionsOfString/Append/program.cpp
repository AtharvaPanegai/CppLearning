// Appending is combining Two different words 

#include "bits/stdc++.h"
using namespace std;

int main(){

    string s1 = "fam";
    string s2 = "ily";

    // first Way to Append 
    s1.append(s2);
    cout<<s1<<"\n";
    // second way
    cout<<s1+s2;
    // third way
    s1 = s1+s2;
    cout<<s1<<endl;
    // getting particular character of string
    cout<<s2[2];

    return 0;
}