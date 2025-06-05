#include<iostream>
using namespace std;

class CircularQueue{
    private:
        int* arr;
        int size;
        int front;
        int rear;
        int count;

    public:
        CircularQueue(int n):arr(new int[n]), size(n), front(-1), rear(-1){}

        void push(int val){
            // 4 cases bnte h sbme 
            // 1. empty queue
            // 2. queue full
            // 3. circular nature
            // 4. normal flow
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            } 
            else if((front==0 && (rear==size-1)) || (rear==front-1)){
                cout<<"Circular Queue is Full...Overflow"<<endl;
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

        void pop(){
            if(front==-1 && rear==-1){
                cout<<"Circular Queue is Empty...UnderFLow"<<endl;
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

        int getfront(){
            if(front==-1){
                cout<<"Queue is Empty"<<endl;
            }
            else{
                return arr[front];
            }
        }
        int getSize(){
            if(front==-1 && rear==-1)
                return 0;
            else if(rear>=front)
                return rear-front+1;
            else    
                return size-front+rear+1;
        }
        bool isEmpty(){
            if(front==-1 && rear==-1)
                return true;
            else 
                return false;
        }

        void print(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};


int main(){
    CircularQueue cq(5);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.push(40);
    cq.push(50);
    cq.print();
    
    cq.pop();
    cq.print();
    
    cq.push(90);
    cq.print();
    cout<<cq.getSize()<<endl;
    // cq.pop();
    // cq.pop();
    // cq.pop();
    // cq.print();
}