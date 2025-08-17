#include<iostream>
#include<stack>
#include <climits>

using namespace std;


bool checkSorted(stack<int>&s, int prev = INT_MAX){
    // base case
    if(s.empty())
        return true;    //stack empty means all elements are sorted

    // 1 case hm solve krenge
    int topElement = s.top();
    s.pop();
    
    if(topElement > prev)
        return false;
    
    // baaki recursion krega
    bool isSorted = checkSorted(s, topElement);

    // backtrack
    s.push(topElement);
    return isSorted;
}

void print(const stack<int>&s){
    stack<int> temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main(){
    stack<int> s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    // s.push(20);
    // s.push(60);
    // s.push(40);
    // s.push(50);
    // s= 50 40 30 20 10

    print(s);

    bool ans = checkSorted(s);
    (ans) ? cout<<"Stack is Sorted"<<endl : cout<<"Stack is Not Sorted"<<endl;
    
    return 0;
}