#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;


int main(){
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

// accumulate
    // total sum of elements -> specify initial value of sum,i.e., 0
    int totalSum = accumulate(arr.begin(),arr.end(),0); //here 0 is the initial value, we can give any other value instead of 0
    cout<<"Total Sum (accumulate) : "<<totalSum<<endl;


// inner_product
    // MULTIPLIES element of one container with other
    // and then sum all the result to give final answer
    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);

    int res = inner_product(first.begin(),first.end(),second.begin(),0);
    cout<<"Inner Product : "<<res<<endl;

// partial_sum
    // partial sum of a container

    vector<int> result(first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    // partial sum of first -> start from begin to end and store answers in result vector

    cout<<"Partial Sum : ";
    for(auto a:result){
        cout<<a<<" ";
    }
    cout<<endl;


// iota
    // fills a range with incrementing values
    vector<int> temp(5);

    iota(temp.begin(),temp.end(),101);

    cout<<"Filling values using iota : "; 
    for(auto i:temp){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}