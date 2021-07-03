// palindrome is a word which is same when we read it by any side


#include <bits/stdc++.h>
using namespace std;

int main()
{
    // inputing length of word
    cout<<"Enter the length of word you want to check\n";
    int n;
    cin >> n;
    // char array init
    char arr[n + 1];
    cout<<"Enter the word\n";
    cin >> arr;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[n - 1 - i])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "Word is Palindrome" << endl;
    }
    else
    {
        cout << "Word is not a palindrome";
    }

    return 0;
}