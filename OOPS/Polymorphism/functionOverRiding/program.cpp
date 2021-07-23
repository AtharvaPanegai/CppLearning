#include "bits/stdc++.h"
using namespace std;

class base{
    public:
    virtual void functionOne(){
        cout<<"This is Base class function one\n";
    }
    void functionTwo(){
        cout<<"This is base class function two\n";
    }

};

class derived : public base{
    void functionOne(){
        cout<<"This is Derived class function one\n";
    }
    void functionTwo(){
        cout<<"This is Derived class function two\n";
    }
};

int main(){

    base *basePtr;
    derived d;
    basePtr = &d;

    basePtr->functionOne();
    basePtr->functionTwo();

    // here without the virtual word in the base class it is printing functions of base class ignoring the functions of derived class 
    // after putting the virtual word in front of the functions of base class those functions are ignored

    return 0;
}