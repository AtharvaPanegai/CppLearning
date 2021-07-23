#include "bits/stdc++.h"
using namespace std;

class A{
    public :
    void functionA(){
        cout<<"This is function of class A\n";
    }
};

class B : public A {
    public : 
    void functionB(){
        cout<<"this is function of class B\n";
    }

};

class C {
    public:
    void functionC(){
        cout<<"This is function of Class C\n";
    }
};

class D : public B,public C {
    
};

int main()
{
    D obj;
    obj.functionA();
    obj.functionB();
    obj.functionC();
    return 0;
}