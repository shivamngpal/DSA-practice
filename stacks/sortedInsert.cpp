#include<iostream>
#include<stack>
#include<limits.h>

using namespace std;

// void sortedInsert(stack<int> &s, int value, int topElement, int prev=INT_MAX){
//     // base case
//     if(((value>topElement) && (value<prev)) || s.empty()){
//         s.push(value);
//         return ;
//     }

//     // 1 case hum krenge
//     s.pop();

//     // baaki recursion smbhaalega
//     sortedInsert(s,value,s.top(),topElement);

//     // backtrack
//     s.push(topElement);
// }

void sortedInsert(stack<int> &s, int value){
    // base case
    if(s.empty() || s.top()<=value){
        s.push(value);
        return ;
    }

    // 1 case
    int topElement = s.top();
    s.pop();

    // baaki recursion
    sortedInsert(s,value);

    // backtrack
    s.push(topElement);
}


void print(const stack<int> &s){
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
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    int value=5;
    sortedInsert(s,value);
    print(s);

    return 0;
}