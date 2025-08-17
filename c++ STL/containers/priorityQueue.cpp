#include<iostream>
#include<queue>
using namespace std;

int main(){
    // creation - max-heap
    // priority_queue<int> pq;
    // // creates a max-heap -> maximum value gets Highest priority

    // // push()
    // pq.push(10);    //10
    // pq.push(203);   //203,10
    // pq.push(34);    //203,34,10

    // //top()
    // cout<<pq.top()<<endl;   //top element -> highest priority -> maximum value

    // // pop()-> pops element with highest priority because we are using max-heap and in max-heap, largest value is popped.
    // pq.pop();
    // cout<<pq.top()<<endl;   //top becomes 34

    // // size
    // cout<<pq.size()<<endl;

    // // check empty
    // (pq.empty()) ? cout<<"Priority-Queue is Empty"<<endl : cout<<"Priority-Queue is not Empty"<<endl;


// creation - min-heap -> minimum value -> highest priority
    priority_queue<int, vector<int>, greater<int>> pq;  //priority_queue<data_type, container_used, comparator_used> min_heap_pq_name;

    // push
    pq.push(100);
    pq.push(234);
    pq.push(24);
    pq.push(354);

    // top
    cout<<pq.top()<<endl;   //24 because it is minimum and we have used min-heap

    // pop -> pops minimum element
    pq.pop();
    cout<<pq.top()<<endl;   //top becomes 100


    return 0;
}