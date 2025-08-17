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

    // creation
    vector<int>::iterator it = arr.begin();

    // traversing using iterator
    while(it!=arr.end()){
        cout<<*it<<" ";     // *it -> means value present at position of 'it'
        it++;   //incremnt 'it'
    }
    cout<<endl;

    

    return 0;
}