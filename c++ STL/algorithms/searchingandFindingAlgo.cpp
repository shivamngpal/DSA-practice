#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

// time complexity of all -> O(log n)
// binary_search
    // applied on monotonic data -> data needs to be sorted
    // returns bool value -> either 0 or 1
    int target = 140;
    auto it = binary_search(arr.begin(),arr.end(),target);
    (it==1) ? cout<<"Target Found"<<endl : cout<<"Target not Found"<<endl;   


// lower_bound
    // returns first element greater or equal to value in sorted range
    auto it1 = lower_bound(arr.begin(),arr.end(),31);
    cout<<"Lower Bound : "<<*it1<<endl;

// upper_bound
    // always returns greater element than value in sorted range
    auto it2 = upper_bound(arr.begin(),arr.end(),40);
    cout<<"Upper Bound : "<<*it2<<endl;

// equal_range
    // finds a range of elements equal to a value on sorted range
    
    return 0;
}