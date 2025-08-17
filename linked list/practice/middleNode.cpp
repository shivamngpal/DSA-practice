#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int val) : data(val), next(NULL){}
};

void insertAtHead(int value, Node* &head, Node* &tail){
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{
        Node* newNode = new Node(value);
        newNode->next=head;
        head=newNode;
    }
}

void print(Node* head){
    Node* it = head;
    while(it!=NULL){
        cout<<it->data<<"->";
        it=it->next;
    }
    
    cout<<"NULL"<<endl;
}

int getlength(Node* &head){
    int count=0;
    Node* temp = head;

    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
    // in case of odd gives the middle...as odd no. of nodes has only one middle 
// in case of even gives second odd
// BRUTE FORCE
// void findMiddle(Node* &head, Node* &middle){
//     int n = getlength(head);
//     int half = n/2;
//     middle=head;
//     for(int count=0; /*(n&1) && */count<half; count++){
//         middle=middle->next;
//     }
//     // for(int count=0; (n&1)==0 && count<half-1; count++){
//     //     middle=middle->next;
//     // }
// }

Node* findMiddle(Node* &head){
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(6,head,tail);
    insertAtHead(5,head,tail);
    insertAtHead(4,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(1,head,tail);
    
    print(head);

    cout<<"LL from Middle Node"<<endl;
    Node* middle = findMiddle(head);
    print(middle);

    return 0;
}