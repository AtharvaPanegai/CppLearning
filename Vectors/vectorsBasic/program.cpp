#include<vector>
#include<iostream>
#include "bits/stdc++.h"
using namespace std;

int main(){

    vector<int> v;  
    // input in the vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(120);
    v.push_back(119);
    v.push_back(132);
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
    v.pop_back();
    

    // we can get the array like this as well
    vector<int> v2(3,50);
    // 3 elements and each element is 50
    for(auto element:v2){
        cout<<element<<endl;
    }
    
    // we can swap the whole arrays using swap function
    // swap(v,v2);
    // // now printing v and v2
    // cout<<"swapped arrays\n";
    // for(auto element:v){
    //     cout<<element<<"\n";
    // }
    // for(auto element:v2){
    //     cout<<element<<"\n";
    // }

    // sort function
    sort(v.begin(),v.end());
    cout<<"Sort Function\n";
      for(auto element:v){
        cout<<element<<"\n";
    }

    return 0;
}