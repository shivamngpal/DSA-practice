#include<iostream>
#include<stack>
using namespace std;

int main(){
    //creation
    stack<int> st;

    //insertion
    st.push(10);    //10
    st.push(20);    //10,20
    st.push(30);    //10,20,30

    //size
    cout<<st.size()<<endl;

    //pop/deletion
    st.pop();
    cout<<st.size()<<endl;

    //top element -last element in stack
    cout<<st.top()<<endl;

    // check empty
    (st.empty()) ? cout<<"Stack is Empty"<<endl : cout<<"Stack is not Empty"<<endl;


    //traversal
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }



    return 0;
}