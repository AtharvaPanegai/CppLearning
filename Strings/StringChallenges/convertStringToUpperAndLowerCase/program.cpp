#include <bits/stdc++.h>
using namespace std;

int main()
{

    string str = "vhsiufefskjdc";
    // convert into upperCase
    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    // converting to lower case

    string strTwo = "ATHARVAPANEGAI";   
    for (int i = 0; i < strTwo.size(); i++)
    {
        if (strTwo[i] >= 'A' && strTwo[i] <= 'Z')
        {
            strTwo[i] += 32;
        }

    }
    cout<<strTwo<<endl;
    // built in function for changing case
    string strThree = "AJVKKKFVBKJDBVDEBKJBK";

    transform(strThree.begin(),strThree.end(),strThree.begin(),::tolower);
    cout<<strThree;

    

    return 0;
}