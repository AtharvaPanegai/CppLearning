#include "bits/stdc++.h"
using namespace std;

class Complex{

    private:
    int real,imaginary;
    public : 
    Complex(int r=0,int i=0){
        real = r;
        imaginary = i;
    } // constructor

    Complex operator+(Complex &obj){
        Complex res;
        res.imaginary = imaginary+obj.imaginary;
        res.real = real+obj.real;

        return res;
    }

    void display(){
        cout<<real<<"+ i"<<imaginary<<endl;
    }
};

int main()
{
    Complex c1(12,7);
    Complex c2(6,7);
    Complex c3 = c1+c2;
    c3.display();

    return 0;
}