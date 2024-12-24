#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);
    first.push_back(4);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);
    second.push_back(6);

// set_union
    // combine elements from both vector and eliminate duplicates
    vector<int> result;
    // set_union(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // for(int i:result){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

// set_intersection
    // common in both vectors
    // set_intersection(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // for(int i:result){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

// set_difference
    // difference of two ranges
    // set_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    // for(int i:result){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

// set_symmetric_difference
    // symmetric difference of two ranges
    set_symmetric_difference(first.begin(),first.end(),second.begin(),second.end(),inserter(result,result.begin()));
    for(int i:result){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}