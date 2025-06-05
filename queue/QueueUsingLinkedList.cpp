#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int val):data(val),next(NULL){}
};

class queue {
    public:
        int size;
        int count;
        Node* front;
        Node* rear;

        // ctor
        queue(int n):size(n),count(0),front(NULL),rear(NULL){}

        // behavior
        // push
        void push(int val){
            if(front==NULL && rear==NULL){  //empty queue
                Node* newNode= new Node(val);
                front=newNode;
                rear=newNode;
                count++;
            }
            else if(count==size){ //full queue
                cout<<"Queue if Full..OverFlow"<<endl;
                return;
            }
            else{   //non-empty queue
                Node* newNode=new Node(val);
                rear->next=newNode;
                rear=newNode;
                count++;
            }
        }

        void pop(){
            // empty queue
            if(front==NULL && rear==NULL){
                cout<<"Queue is Empty..UnderFlow"<<endl;
                return ;
            }
            // single Node
            else if(front==rear){
                Node* temp=front;
                front=NULL;
                rear=NULL;
                delete temp;
                count=0;
            }
            // multiple nodes
            else{
                Node* temp=front;
                front=temp->next;
                temp->next=NULL;
                delete temp;
                count--;
            }
        }

        int getSize(){
            // empty queue
            if(front==NULL && rear==NULL)
                return 0;

            // single node
            else if(front==rear)
                return 1;

            else return count;
        }

        int getFront(){
            if(front==NULL && rear==NULL)
                return -1;
            else    
                return front->data;
        }
        int getBack(){
            if(front==NULL && rear==NULL)
                return -1;
            else    
                return rear->data;
        }

        bool isEmpty(){
            // empty queue
            if(front==NULL && rear==NULL){
                return true;
            }
            else    
                return false;
        }

        void print(){
            Node* temp=front;
            while(temp!=NULL){
                // if(front==rear){
                //     cout<<front->data<<" ";
                //     break;
                // }
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
};

int main(){
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(10);

    q.print();

    q.pop();
    q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    q.print();

    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;

    cout<<q.getFront()<<endl;
    cout<<q.getBack()<<endl;

    return 0;
}