#include "bits/stdc++.h"
using namespace std;

class A { 

    public : 
    void func(){
        cout<<"This is Function of class A";
    }

};

class B : public A {

    
};

int main()
{
    B b;
    b.func();

    return 0;
}