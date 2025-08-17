#include<iostream>
// for heap, we need queue header file
#include<queue>

using namespace std;

int main(){
    // heap is implemented using priority_queue
    // by default max-heap is created
    priority_queue<int>pq;  //priority_queue banao jissme int store krenge and usska name pq hoga.

    // greater value = high priority
    pq.push(10);
    pq.push(20);
    pq.push(50);
    pq.push(60);    //highest priority, thus present at top

    cout<<pq.top()<<endl; //60
    pq.pop(); // 60 is deleted and now 50 has highest priority
    
    cout<<pq.top()<<endl; //50
    pq.pop();
    cout<<pq.top()<<endl; //20
    pq.pop();
    cout<<pq.top()<<endl; //10
    pq.pop();

    if(pq.empty())
        cout<<"Deletion not possible in empty Heap"<<endl;


    // TO create a min-heap
    // syntax - priority_queue<int,vector<int>,greater<int>>mpq;
    // priority_queue < datatype of elements to store, container to store data in, comparator> HeapName;
    
    priority_queue<int,vector<int>,greater<int>>mpq;
    mpq.push(90);
    mpq.push(40);
    mpq.push(1);

    cout<<"Element with highest priortity in Min-Heap : "<<mpq.top()<<endl;

    return 0;
}