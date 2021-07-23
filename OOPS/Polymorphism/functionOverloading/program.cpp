#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void fun()
    {
        cout << "function with no arguments\n";
    }
    void fun(int x)
    {
        cout << "function with int arguments\n";
    }
    void fun(double x)
    {
        cout << "function with double arguments\n";
    }
};

int main()
{
    A obj;
    obj.fun();
    obj.fun(4);
    obj.fun(5.2);

    return 0;
}