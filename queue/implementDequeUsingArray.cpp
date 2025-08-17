#include<iostream>
#include<vector>
using namespace std;
// all operation should be in O(1)
// so dont use for loop in push/pop
// dont shift elements
// else TC will be O(n)
class Deque{
    private:
        vector<int> arr;
        int size;
        int front;
        int rear;

    public:
        Deque(int n):arr(n,0), size(n), front(-1), rear(-1){}

        void pushFront(int val){
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            }
            else if(front==0){
                cout<<"OverFlow!!!"<<endl;
                return;
            }
            else{
                // rear++;
                // int index=rear;
                // for(int i=index; i>front; i--){
                //     arr[index]=arr[index-1];
                //     index--;
                // }
                // arr[front]=val;
// ---------------------------------------------------
                front--;
                arr[front]=val;
            }
        }

        void pushBack(int val){
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            }
            else if(rear==size-1){
                cout<<"OverFlow!!!"<<endl;
                return;
            }
            else{
                rear++;
                arr[rear]=val;
            }
        }

        void popFront(){
            if(front==-1 && rear==-1){
                cout<<"UnderFlow!!!"<<endl;
                return;
            }
            else if(front==rear){
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else{
                arr[front]=-1;
                front++;
            }
        }
        void popBack(){
            if(front==-1 && rear==-1){
                cout<<"UnderFlow!!!"<<endl;
                return;
            }
            else if(front==rear){
                arr[front]=-1;
                front=-1;
                rear=-1;
            }
            else{
                arr[rear]=-1;
                rear--;
            }
        }

        void print(){
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Deque dq(5);
    dq.pushFront(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.pushBack(50);
    // dq.push_back(40);

    dq.print();

    dq.popFront();
    dq.popBack();
    dq.print();

    return 0;
}