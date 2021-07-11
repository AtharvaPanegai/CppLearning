#include "bits/stdc++.h"
using namespace std;

string keyPadArray[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    // base case
    if (s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    // let's get the first character
    char ch = s[0];
    // now we've to get the letters corresponding to the character
    string code = keyPadArray[ch-'0']; // to convert the char to int we've subtracted the ascii code of zero from char
    string ros = s.substr(1);
    // now loop
    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros,ans+code[i]);
    }
    
}

int main(){
    keypad("23","");

    return 0;
}