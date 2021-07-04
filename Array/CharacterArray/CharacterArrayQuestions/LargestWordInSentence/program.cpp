// a sentence is given we've to find the largest word in the given sentene

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    char arr[n + 1];
    // inputing sentence
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currentLength = 0, maxLength = 0;
    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currentLength>maxLength)
            {
                maxLength = currentLength;
            }
            currentLength=0;
        }
        else
        currentLength++;
        if (arr[i] != '\0')
        {
            break;
        }
        i++;
    }

    cout<<maxLength;
    return 0;
}