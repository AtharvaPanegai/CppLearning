#include "bits/stdc++.h"
using namespace std;

class A
{
public:
    void funcA()
    {
        cout << "This is Function in Class A\n";
    }
};

class B
{
public:
    void funcB()
    {
        cout << "This is function of class B\n";
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    obj.funcA();
    obj.funcB();
    return 0;
}