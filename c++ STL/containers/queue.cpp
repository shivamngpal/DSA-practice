#include<iostream>
#include<queue>
using namespace std;

int main(){
//creation
    queue<int> q;   //queue <data_type> queue_name;

// insertion
    q.push(10); //10
    q.push(20); //10,20
    q.push(30); //10,20,30
    q.push(40); //10,20,30,40

    cout<<q.size()<<endl;

//to iterate a queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;

    // q.pop();    //pop from start -> 10 is popped -> 20,30,40
    // cout<<q.size()<<endl;

//front and back element
    // cout<<"Front element in Queue : "<<q.front()<<endl;
    // cout<<"Back element in Queue : "<<q.back()<<endl;

//to check if queue is empty or not
    (q.empty())?cout<<"Queue is empty"<<endl : cout<<"Queue is not empty"<<endl;

//swap
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);

    cout<<"Before Swapping : "<<first.front()<<" "<<first.back()<<endl;

    second.push(100);
    second.push(200);

    first.swap(second);

    cout<<"After Swapping : "<<first.front()<<" "<<first.back()<<endl;



    


    return 0;
}