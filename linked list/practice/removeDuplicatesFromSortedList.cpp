#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int value) : data(value),next(NULL){}
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

void RemoveDuplicatesFromSortedLL(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data==temp->next->data){
            Node* duplicate = temp->next;
            temp->next = duplicate->next;
            duplicate->next = NULL;
            delete duplicate;
        }
        else{
            temp=temp->next;
        }
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    // insertAtHead(6,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(1,head,tail);
    insertAtHead(1,head,tail);
    insertAtHead(1,head,tail);

    print(head);

    RemoveDuplicatesFromSortedLL(head);
    print(head);
    return 0;
}