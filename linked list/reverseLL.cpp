#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int value) : data(value), next(NULL){}
};

void insertAtHead(int value, Node* &head, Node* &tail){
    // LL is empty
    // creating 1st node of LL
    
    // if head and tail are pointing to NULL, then LL is empty
    if(head == NULL && tail == NULL){
        // step1 : create a new node
        Node* newNode = new Node(value);
        // step2: head ko node pr lgado
        head = newNode;
        // step3: tail ko new node pr lgado
        tail = newNode;
    }
    // Phle se node present h LL me
    else{
        // naya node bnao
        Node* newNode = new Node(value);
        // naye node ke next ko head pr point kro
        newNode->next = head;
        // head ko naye node pr point kro
        head = newNode;
    }
}

void print(Node* &head){
    Node* it = head;
    while(it != NULL){
        cout<<it->data<<"->";
        it=it->next;
    }
    cout<<"NULL"<<endl;
}

void ReverseLL(Node* &head, Node* &tail){
    // base case
    Node* it=head;
    Node* back = tail;
    if(it==NULL)
        return ;

    
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtHead(50,head,tail);

    print(head);

    return 0;
}