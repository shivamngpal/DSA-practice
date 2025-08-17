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

// iterative
// Node* reverse(Node* &head){
//     Node* prev=NULL;
//     Node* curr=head;
//     while(curr!=NULL){
//         Node* forward = curr->next;
//         curr->next = prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }

// recursive
Node* reverse(Node* prev, Node* curr){
    // base case
    if(curr==NULL){
        return prev;
    }

    // processing
    // ek case khud karo
    // baaki recursion sambhaal lega
    Node* fwd = curr->next;
    curr->next=prev;
    prev=curr;
    curr=fwd;

    return reverse(prev,curr);
}

void print(Node* head){
    Node* it = head;
    while(it!=NULL){
        cout<<it->data<<"->";
        it=it->next;
    }
    cout<<"NULL"<<endl;
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(5,head,tail);
    insertAtHead(4,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(1,head,tail);

    print(head);

    Node* prev = NULL;
    Node* curr=head;
    Node* rev = reverse(prev,curr);
    cout<<"After reversing(Recursive way)"<<endl;
    print(rev);

    return 0;
}