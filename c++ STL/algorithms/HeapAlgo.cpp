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

    // [10,20,30,40,50]

// creation -> T.C.=O(n)
    // to make max heap->make_heap()
    make_heap(arr.begin(),arr.end());
    cout<<"Max Heap : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

// inserting one more element in vector
    arr.push_back(80);
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl; 
    // after inserting element when vector is printed then it breaks the property of max heap as new element is at end , not placed according to its value
    // to avoid the above problem
    // run this function after inserting element
    // push_heap() -> T.C.=O(log n)
    push_heap(arr.begin(),arr.end());   //now max heap is created
    cout<<"After inserting : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

// we need to call push_heap() after inserting every element
    // arr.push_back(55);
    // arr.push_back(100);
    // arr.push_back(32);
    // push_heap(arr.begin(),arr.end());
    // for(int i:arr){
    //     cout<<i<<" ";
    // }
    // cout<<endl;

// deletion -> T.C.=O(1)
    pop_heap(arr.begin(),arr.end());    //shifts max element to last of vector
    // now pop element from vector
    cout<<"After deleting : ";
    arr.pop_back();
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;

// sorting -> T.C.=O(n)
    // sort the heap
    sort_heap(arr.begin(),arr.end());
    cout<<"After sorting : ";
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}