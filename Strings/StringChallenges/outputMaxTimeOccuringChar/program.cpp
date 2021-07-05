#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    string s = "bhsvdkskrfkvbskjdvbaaaaaaaa";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
            freq[i] = 0;
    }
    for (int i = 0; i < s.size(); i++)
    {
        freq[s[i]-'a']++;
    }
    int maxFreq = -1;
    string maxChar = "a";

    for (int i = 0; i < 26; i++)
    {
        if(freq[i]>=maxFreq){
            maxFreq = freq[i];
            maxChar = i+'a';
        }
    }
    cout<<maxFreq<<" "<<maxChar;
    return 0;
}