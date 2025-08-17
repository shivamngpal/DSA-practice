#include<iostream>
using namespace std;

class Node{
    public:
        Node* prev;
        int data;
        Node* next;

        // ctor
        Node(int value) : prev(NULL),data(value),next(NULL){}
};

void insertAtHead(int value, Node* &head, Node* &tail){
    // LL is empty
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }

    else{
        Node* newNode = new Node(value);
        newNode->next=head;
        head->prev=newNode;
        head=newNode;
        tail->next=newNode;
        head->prev=tail;
    }
}

void print(Node* &head){
    Node* it =head;
    while(it->next!=head){
        cout<<it->data<<"->";
        it=it->next;
    }
    cout<<it->data<<"->";
    cout<<"head"<<endl;
}

int getlength(Node* &head){
    int count=1;
    Node* it=head;
    while(it->next!=head){
        count++;
        it=it->next;
    }
    return count;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtHead(50,head,tail);

    print(head);

    int n = getlength(head);
    cout<<"Length of Circular Doubly LL :"<<n<<endl;

    return 0;
}