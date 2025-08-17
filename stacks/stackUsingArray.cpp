#include<iostream>
using namespace std;

class Stack{
    public:
    // attributes
        int* arr;
        int size;
        int top;

        // ctor
        Stack(int capacity) : arr(new int[capacity]), size(capacity), top(-1){}

        // behaviour
        void push(int val){
            if(top<size-1){
                top++;  
                arr[top]=val;
            } 
            else cout<<"Stack Overflow ->"<<val<<" insertion not possible"<<endl;
        }

        void pop(){
            if(top>-1){
                cout<<arr[top]<<endl;
                arr[top]=-1;
                top--;
            }
            else{
                cout<<"Stack Underflow"<<endl;
            }

        }

        int getSize(){
            return top+1;
        }
        
        bool isEmpty(){
            if(top==-1)
                return true;
            else    
                return false;
        }

        int getTop(){
            if(top==-1){
                cout<<"No element in stack";
                return -1;
            }
            else{
                return arr[top];
            }
        }

        // stack me print fxn ni hota ussme sirf upr k saare fxn hote hai
        void print(){
            cout<<"printing stack :";
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            } cout<<endl;
        }
};

int main(){
    Stack s(5);
    s.print();
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    // STACK OVERFLOW
    // s.push(60);  

    s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // STACK UNDERFLOW
    // s.pop();
    s.print();
    cout<<s.getSize()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}