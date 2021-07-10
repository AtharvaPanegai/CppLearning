#include "bits/stdc++.h"
using namespace std;

void replacePi(string s){

    // base case
    if (s.size()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14"<<" ";
        // removing first two char 
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }

}

int main(){
    replacePi("pipippipipipippppppscdsjvdvjhcvdpi");

    return 0;
}