#include "bits/stdc++.h"
using namespace std;

int main(){

    vector<int> v;  
    // input in the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    // output the vector
    // 1
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    // output the vector
    // 2
    vector<int>::iterator it;
    for ( it = v.begin(); it !=v.end(); it++)
    {
        cout<<*it<<"\n";
    }
      // output the vector
    // 3
    for(auto element:v){
        cout<<element<<endl;
    }
    
    
    
    return 0;
}