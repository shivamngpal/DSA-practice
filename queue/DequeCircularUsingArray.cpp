#include<iostream>
using namespace std;

class DeCircularQueue{
    public:
        int* arr;
        int size;
        int front;
        int rear;

        // ctor
        DeCircularQueue(int n): arr(new int[n]), size(n), front(-1), rear(-1){}

        void push_front(int val){
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            } 
            else if(front==0 && rear!=size-1){
                front=size-1;
                arr[front]=val;
            }
            else if((front==0 && (rear==size-1)) || (rear==front-1)){
                cout<<"Queue Full...Overflow!!!"<<endl;
                return;
            }
            else{
                front--;
                arr[front]=val;
            }
        }

        // same as circular queue wala push
        void push_back(int val){
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            } 
            else if((front==0 && (rear==size-1)) || (rear==front-1)){
                cout<<"Queue is Full...Overflow"<<endl;
                return;
            }
            else if(rear==size-1 && front!=0){
                rear=0;
                arr[rear]=val;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }
        void pop_front(){
            if(front==-1 && rear==-1){
                cout<<"Queue is Empty...UnderFLow"<<endl;
                return ;
            }
            else if(front==rear){
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else if(front==size-1){
                arr[front]=-1;
                front=0;
            }
            else{
                arr[front]=-1;
                front++;
            }
        }
        void pop_back(){
            if(front==-1 && rear==-1){
                cout<<"Queue is Empty...UnderFLow"<<endl;
                return ;
            }
            else if(front==rear){   //single element
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else if(rear==0){
                arr[rear]=-1;
                rear=size-1;
            }
            else{
                arr[rear]=-1;
                rear--;
            }
        }

        void print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    DeCircularQueue dcq(5);
    dcq.push_front(10);
    dcq.push_front(20);
    dcq.push_front(30);
    dcq.push_back(40);
    dcq.push_back(50);
    dcq.print();
    
    dcq.pop_front();
    dcq.print();

    dcq.pop_back();
    dcq.pop_back();
    dcq.pop_back();
    dcq.pop_back();
    dcq.pop_back();
    dcq.print();

    return 0;
}