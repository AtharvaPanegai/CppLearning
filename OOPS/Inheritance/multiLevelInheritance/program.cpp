#include "bits/stdc++.h"
using namespace std;

class A{
    public:
    void funcA(){
        cout<<"This is function of class A\n";
    }
};

class B : public A {
    public : 
    void funcB(){
        cout<<"This is function of class B which is derived from class A\n";
    }
};

class C : public B { 
    public:
    void functionC(){
        cout<<"this is function of class C which is derived from class B\n";
    }
};

int main(){

    C obj;
    obj.funcA();
    obj.funcB();
    obj.functionC();

    return 0;
}