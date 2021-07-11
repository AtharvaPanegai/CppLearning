#include "bits/stdc++.h"
using namespace std;

void subString(string s,string ans){

    // base case
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);
    subString(ros,ans);
    subString(ros,ans+ch);
    subString(ros,ans+to_string(code));

    
}

int main(){

    subString("AB","");

    return 0;
}