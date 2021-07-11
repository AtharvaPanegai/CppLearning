#include<bits/stdc++.h>
using namespace std;

void generateSubStr(string s,string ans){
    if (s.length() == 0)
    {
        cout<<ans<<" ";
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    generateSubStr(ros,ans);
    generateSubStr(ros,ans+ch);
    
}


int main(){

    generateSubStr("abc","");
    return 0;
}