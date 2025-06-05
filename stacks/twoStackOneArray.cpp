#include<iostream>
using namespace std;

class Stack{
    public:
        int* arr;
        int size;
        int top1;
        int top2;

        // ctor
        Stack(int capacity) : arr(new int[capacity]), size(capacity), top1(-1), top2(size){}

        void push1(int val){
            if(top1==size-1 || top2-top1==1){
                cout<<"STack full -> OVERFLOW"<<endl;
            }
            // if(top1==top2)
            //     cout<<"Stack full"<<endl;
            else{
                top1++;
                arr[top1]=val;
            }
        }
        void push2(int val){
            if(top2==0 || top2-top1==1){
                cout<<"STACK FULL -> OVERFLOW"<<endl;
            }
            else{
                top2--;
                arr[top2]=val;
            }
        }
        void pop1(){
            if(top1==-1)
                cout<<"STACK 1 EMPTY -> UNDERFLOW"<<endl;
                
                else{
                    cout<<arr[top1]<<endl;
                    arr[top1]=-1;
                    top1--;
                }
            }
            void pop2(){
                if(top2==size)
                cout<<"STACK 2 EMPTY -> UNDERFLOW"<<endl;
                
                else{
                    cout<<arr[top2]<<endl;
                    arr[top2]=-1;
                    top2++;
                }
        }
        
        void print(){
            cout<<"Top1 :"<<top1<<endl;
            cout<<"Top2 :"<<top2<<endl;

            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;

        }
};


int main(){
    Stack s(6);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push2(90);
    s.push2(80);
    s.push2(70);
    s.push1(0);
    // s.push1(0);
    // s.push2(0);

    s.print();

    s.pop1();
    s.pop1();
    s.pop1();
    s.pop1();
    s.pop2();
    s.pop2();
    s.pop2();
    s.pop2();
    s.print();

    return 0;
}