#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int value) : data(value), next(NULL){}
};


// returns head of the new LL after insertion
Node* insertAtHead(int value, Node* &head, Node* &tail){
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
    return head;
}

Node* insertAtTail(int value, Node* &head, Node* &tail){
    // LL is empty
    if(head==NULL && tail==NULL){
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }
    // if LL is not empty
    else{
        // naya node banao
        Node* newNode = new Node(value);
        // tail ke next ko newNode pr point karo
        tail->next = newNode;
        // tail ko newNode pr point kro
        tail=newNode;
    }
    return tail;
}

int getlength(Node* &head){
    int len=0;
    Node* it=head;
    while(it != NULL){
        len++;
        it=it->next;
    }
    return len;
}

void insertAtPos(int pos, int value, Node* &head, Node* &tail){
    int n = getlength(head);
    // insert at pos =1 ,i.e., insert at head
    if(pos==1){
        head = insertAtHead(value,head,tail);
    }
    else if(pos==n+1){
        tail = insertAtTail(value,head,tail);
    }
    else{   //pos -> 2 to n
        Node* newNode = new Node(value);
        Node* it =head;
        // Node* temp=head;
        int count=1;
        while(count<pos-1){
            it=it->next;
            count++;
        }
        newNode->next= it->next;
        it->next=newNode;
    }
}

// search in LL
bool Search(int target, Node* &head){
    Node* it=head;
    while(it!=NULL){
        if(it->data == target)
            return true;
        
        it = it->next;
    }
    // bahar nikl gye
    // mtlb LL khtm ho gyi
    // and LL khtm so we didn't find target
    return false;
}

void deleteNode(int pos, Node* &head, Node* &tail){
    // if LL is empty -> no node can be deleted
    if(head==NULL && tail==NULL){
        cout<<"No Node to delete"<<endl;
    }

    // single node hai
    // jab head or tail same node ko point kr rhe h
    if(head == tail){
        Node* temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }

    // multiple nodes inside LL
    else{
        if(pos==1){
            Node* temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else{
            Node* it=head;
            int count=1;
            while(count<pos-1){
                it=it->next;
                count++;
            }
            Node* temp = it->next;
            it->next=temp->next;
            temp->next = NULL;
            delete temp;
        }
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

int main(){
    // insertion at head
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(10,head,tail);
    insertAtHead(20,head,tail);
    insertAtHead(30,head,tail);
    insertAtHead(40,head,tail);
    insertAtHead(50,head,tail);

    insertAtPos(6,100,head,tail);

    insertAtTail(20,head,tail);
    insertAtTail(30,head,tail);
    insertAtTail(40,head,tail);

    print(head);

    bool ans = Search(1030,head);
    (ans) ? cout<<"Target Found "<<endl : cout<<"Target not Found "<<endl;

    deleteNode(6,head,tail);
    deleteNode(1,head,tail);
    deleteNode(7,head,tail);
    print(head);

    // int n= getlength(head);
    // cout<<"Length of Singly LL :"<<n<<endl;

    // static allocation
    // Node first;
    // dynamic allocation
    // Node *first = new Node(5);
    // Node *second = new Node(20);


    return 0;
}