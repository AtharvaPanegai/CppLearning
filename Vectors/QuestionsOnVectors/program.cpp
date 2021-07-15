// reduce the array 

#include<bits/stdc++.h>
#include <vector>
using namespace std;

bool comparator(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

int main(){
    int arr[] = {10,16,7,14,5,3,2,9};
    vector<pair<int,int>>v; 
    
    // pushing the element and it's index into above vector
    for (int i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
    {
        v.push_back(make_pair(arr[i],i));
    }
    // here the vector pair is created with element as first and prev index as second
    // sort the array
    sort(v.begin(),v.end(),comparator);
    for (int i = 0; i < v.size(); i++)
    {
        arr[v[i].second] = i;
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout<<arr[i]<<" ";
    }


    




    return 0;
}