#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void print(queue<int> &q){
    queue<int> temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}

void reverseQueueRecursive(queue<int> &q){
    // base case
    if(q.empty()){
        return;
    }
    // 1 case
    int element=q.front();
    q.pop();

    // recursive call
    reverseQueueRecursive(q);

    // backtrack
    q.push(element);
}

void reverseQueueIterative(queue<int> &q){
    stack<int> st;
    while(!q.empty()){
        st.push(q.front());
        q.pop();
    }

    // queue is empty
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    print(q);

    reverseQueueIterative(q);

    print(q);

    return 0;
}