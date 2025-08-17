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

// min_element/max_element in a range

    // minimum/maximum value in a range
    auto it = min_element(arr.begin(),arr.end());
    cout<<"Minimum Value : "<<*it<<endl;

    auto it1 = max_element(arr.begin(),arr.end());
    cout<<"Maximum Value : "<<*it1<<endl;


    return 0;
}
