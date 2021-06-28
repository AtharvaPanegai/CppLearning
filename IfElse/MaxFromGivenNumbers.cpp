#include <iostream>
#include <cstdio>
using namespace std;

void max(int a,int b,int c,int d){
    if(a>b){
        if(a>c){
            if(a>d){
                cout<<a;
            }
        }
    }
    if(c>a){
        if(c>b){
            if(c>d){
                cout<<c;
            }
        }
    }
    if(b>a){
        if(b>c){
            if(b>d){
                cout<<b;
            }
        }
    }
    if(d>a){
        if(d>b){
            if(d>c){
                cout<<d;
            }
        }
    }
}

int main() {

    int a;
    int b;
    int c;
    int d;
    cin>>a>>b>>c>>d;
    max(a,b,c,d);
    
    return 0;
}
