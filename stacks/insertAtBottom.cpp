#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int> &s, int value){
    // base case
    if(s.empty()){
        s.push(value);
        return ;
    }

    // 1 case hum krenge
    int topElement = s.top();
    s.pop();

    // baaki recursion krega
    insertAtBottom(s,value);

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

    cout<<"Printing before Insertion :";
    print(s);
    
    insertAtBottom(s,5);
    cout<<"Printing after Insertion :";
    print(s);

    return 0;
}