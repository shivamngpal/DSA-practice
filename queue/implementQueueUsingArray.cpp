#include<iostream>
using namespace std;
// all operation should be in O(1)
// so dont use for loop in push/pop
// dont shift elements
// else TC will be O(n)
class Queue{
    private:
        int* arr;
        int size;
        int front;
        int rear;
        
    public:
        Queue(int n):arr(new int[n]), size(n), front(-1), rear(-1){}

        // behavior
        // void push_front(int val){
        //     if(front==-1 && rear==-1){
        //         front++;
        //         rear++;
        //         arr[front]=val;
        //     }
        //     else{
        //         if(front<size-1 && rear<size-1){
        //             rear++;
        //             if(rear-1 == front){
        //                 arr[rear]=arr[front];
        //                 arr[front]=val;
        //             }
        //             else{
        //                 int index=rear;
        //                 for(int i=rear-1; i>=0; i--){
        //                     arr[index]=arr[i];
        //                     index--;
        //                 }
        //                 arr[front]=val;
        //             }
        //         }
        //         else{
        //             cout<<"Queue Full..OverFlow"<<endl;
        //             return;
        //         }
        //     }
        // }

        void push(int val){
            if(front==-1 && rear==-1){
                front++;
                rear++;
                arr[front]=val;
            }
            else{
                if(front<size-1 && rear<size-1){
                    rear++;
                    arr[rear]=val;
                }
                else{
                    cout<<"Queue Full..OverFlow"<<endl;
                    return;
                }
            }
        }

        void pop(){     //deletion from front
            if(front==-1 && rear==-1){
                cout<<"Empty Queue...UNDERFLOW"<<endl;
                return;
            }
            else if(front==rear){   //single element
                arr[front]=-1;
                front--;
                rear--;
            }
            else{
                // int index=front+1;
                // for(int i=0; i<=rear; i++){
                //     arr[index-1]=arr[index];
                //     index++;
                // }
                // arr[rear]=-1;
                // rear--;
                // ----------------OR---------------
                arr[front]=-1;
                front++;
            }
        }

        int length(){
            return rear-front+1;
        }

        bool empty(){
            if(front==-1 && rear==-1)
                return true;
            else    
                return false;
        }

        int getfront(){
            return arr[front];
        }

        int getback(){
            return arr[rear];
        }

        void print(){
            // print
            for(int i=front; i<=rear; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // q.push(10);

    q.print();

    q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();
    // q.pop();

    q.print();
    cout<<q.length()<<endl;
    cout<<q.empty()<<endl;
    cout<<q.getfront()<<endl;
    cout<<q.getback()<<endl;
    return 0;
}