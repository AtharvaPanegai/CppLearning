// when we want to swap the values of variables we can't  just swap them by simply we've to swap their locations

#include <bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int a = 10, b = 20;
    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);
    cout << a << " " << b << endl;

    return 0;
}