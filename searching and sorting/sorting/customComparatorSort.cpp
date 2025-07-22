#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int& a, int& b){
    return a>b;
}

int main(){
    vector<int> arr{1,2,3,4,5};
    sort(arr.begin(),arr.end(), cmp);
    
    for(int ele:arr)
        cout<<ele<<" ";

    return 0;
}