// remove duplicates from the given string

#include "bits/stdc++.h"
using namespace std;

string removeDuplicate(string s){
    if(s.length() == 0){
        return "";
    }
    char ch = s[0];
    string ans=removeDuplicate(s.substr(1));
    if (ch==ans[0])
    {
        return ans;
    }else{
        return(ch+ans);
    }
    

}

int main(){

    cout<<removeDuplicate("aaaaaabbbbbbbbcccccccccddddddddddd");

    return 0;
}