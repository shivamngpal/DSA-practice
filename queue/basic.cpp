#include<iostream>
#include<queue>

using namespace std;

int main(){
    // // simple queue
    // // creation
    // queue<int> q;

    // // insertion 
    // q.push(10); 
    // q.push(20);
    // q.push(30);
    // q.push(40);

    // // we can directly access front and back element of queue
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;

    // // deletion-> front end
    // q.pop();
    // cout<<q.front()<<endl;

    // // size
    // cout<<q.size()<<endl;

    // // check empty - bool
    // cout<<q.empty()<<endl;
// -----------------------------------------------------------
    // DEQUE - doubly ended queue
    deque<int> dq;

    dq.push_front(10);  //10
    dq.push_front(20);  //20 10
    dq.push_front(30);  //30 20 10
    dq.push_front(40);  //40 30 20 10
    dq.push_back(5);    //40 30 20 10 5

    deque<int> temp=dq;
    // printing deque
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop_front();
    }
    cout<<endl;

    // front/ back
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;
    dq.pop_back();
    cout<<dq.back()<<endl;

    return 0;
}