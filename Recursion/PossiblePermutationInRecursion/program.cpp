// print all the possible permutations of a string
// Permutations of ABC are
// ABC ACb bac bca cab cba 
#include "bits/stdc++.h"
using namespace std;

// input string s and empty string ans for storing the ans
void permutation(string s,string ans){
    // base condition
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    // recursive condition
    // here we make a loop to traverse from the string
    for (int i = 0; i < s.length(); i++)
    {
        // here we'll store the ith element in a char to fix it's positiona and move around the other elemnets
        char ch = s[i];
        // here we start the substr from 0 and take it till i + substr from i+1 and till the end
        string ros = s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }
    

}

int main()
{

    permutation("ABC","");

    return 0;
}