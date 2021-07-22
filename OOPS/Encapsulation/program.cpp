#include "bits/stdc++.h"
using namespace std;

// here we've restricted the direct access to the private functions this enCapsulation
class A
{
public:
    int a;
    void funcA()
    {
        cout << "Function A\n";
    }

private:
    int b;
    void funcB()
    {
        cout << "Function B\n";
    }

protected:
    int c;
    void funcC()
    {
        cout << "Function C\n";
    }
};

int main()
{
    A obj;
    obj.funcA();
    return 0;
}