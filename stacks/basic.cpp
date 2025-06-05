// #define endl e

#include<iostream>
#include<stack>

using namespace std;

int main(){
    // creation
    stack<int> s;

    // insertion
    s.push(10);     //10
    s.push(20);     //20->10
    s.push(30);     //30->20->10

    // size 
    cout<<s.size()<<endl;

    // check if empty
    cout<<s.empty()<<endl;  //returns bool

    // peek -> top element of stack
    cout<<s.top()<<endl;
    
    // deletion
    s.pop();
    
    cout<<s.top()<<endl;

    return 0;
}