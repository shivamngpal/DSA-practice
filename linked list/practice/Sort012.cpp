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

// APPROACH 1 AND 2
// Node* sortnums(Node* &head){
//     int zerocount=0;
//     int onecount=0;
//     int twocount=0;

//     Node* temp=head;
//     while(temp!=NULL){
//         if(temp->data==0)
//             zerocount++;
//         if(temp->data==1)
//             onecount++;
//         if(temp->data==2)
//             twocount++;

//         temp=temp->next;
//     }
// // APPROACH 1
//     // Node* newHead=NULL;
//     // Node* newTail=NULL;
//     // for(int i=0; i<twocount; i++){
//     //     insertAtHead(2,newHead,newTail);
//     // }
//     // for(int i=0; i<onecount; i++){
//     //     insertAtHead(1,newHead,newTail);
//     // }
//     // for(int i=0; i<zerocount; i++){
//     //     insertAtHead(0,newHead,newTail);
//     // }

// // APPROACH 2
//     temp=head;
//     for(int i=0; i<zerocount; i++){
//         temp->data = 0;
//         temp=temp->next;
//     }
//     for(int i=0; i<onecount; i++){
//         temp->data = 1;
//         temp=temp->next;
//     }
//     for(int i=0; i<twocount; i++){
//         temp->data = 2;
//         temp=temp->next;
//     }
//     return head;
// }

void insertAtTailSort(Node* &head, Node* &tail, Node* &toMove){
    if(head==NULL && tail==NULL){
        head=toMove;
        tail=toMove;
    }
    else{
        tail->next = toMove;
        tail=toMove;
    }
}

Node* sortnum3(Node* &head){
    Node* zeroHead=NULL;
    Node* zeroTail=NULL;
    Node* oneHead=NULL;
    Node* oneTail=NULL;
    Node* twoHead=NULL;
    Node* twoTail=NULL;

    Node* temp=head;
    while(temp!=NULL){
        Node* toMove=temp;
        temp=temp->next;
        toMove->next=NULL;

        if(toMove->data==0){
            insertAtTailSort(zeroHead, zeroTail, toMove);
        }
        if(toMove->data==1){
            insertAtTailSort(oneHead, oneTail, toMove);
        }
        if(toMove->data==2){
            insertAtTailSort(twoHead, twoTail, toMove);
        }
    }
    zeroTail->next=oneHead;
    oneTail->next=twoHead;

    return zeroHead;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(0,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(0,head,tail);
    insertAtHead(1,head,tail);
    insertAtHead(1,head,tail);
    insertAtHead(0,head,tail);

    cout<<"LL before Sorting"<<endl;
    print(head);
    cout<<"LL after Sorting"<<endl;
    // Node* newHead = sortnums(head);
    // print(newHead);
    Node* newHead = sortnum3(head);
    print(newHead);
    print(head);

    return 0;
}