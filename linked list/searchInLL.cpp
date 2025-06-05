#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int value) : data(value), next(NULL){}
};

Node* insertAtHead(int value, Node* &head, Node* &tail){
    if(head==NULL && tail==NULL){   //LL is empty
        Node* newNode = new Node(value);
        head=newNode;
        tail=newNode;
    }
    else{   //LL is not empty
        Node* newNode = new Node(value);
        newNode->next = head;
        head=newNode;
    }
    return head;
}

int SearchInLL(int target, Node* head, Node* &tail){
    if(head == NULL && tail == NULL)
        return -1;  //empty LL

    Node* it= head;
    int count=1;

    while(it != NULL){
        if(it->data == target)
            return count;

        it=it->next;
        count++;
    }
    return -1;  //target not found
}

void deleteNode(int value, Node* &head, Node* &tail){
    // empty LL
    if(head==NULL && tail==NULL)
        cout<<"Deletion not possible"<<endl;

    else if(head==tail){    //single node in LL
        Node* temp = head;
        head=NULL;
        tail=NULL;
        delete temp;
    }
    else{   //multiple nodes
        Node* it = head;
        if(it->data==value && it==head){    //delete head node
            head=it->next;
            it->next = NULL;
            delete it;
        }
        else{
            Node* temp = head;
            while(temp->next != NULL && temp->next->data != value){
                temp = temp->next;
            }
            if(temp->next == NULL){
                cout << "Value not found" << endl;
            }
            else {
                Node* nextTemp = temp->next;
                if(nextTemp == tail){  // update tail if deleting the last node
                    tail = temp;
                }
                temp->next = nextTemp->next;
                nextTemp->next = NULL;
                delete nextTemp;
            }
        }

    }
}

void print(Node* head){
    Node* it=head;
    while(it!=NULL){
        cout<<it->data<<"->";
        it=it->next;
    }
    cout<<"NULL"<<endl;
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

    int ans = SearchInLL(50,head,tail);
    (ans==-1) ? cout<<"Target Not Found"<<endl : cout<<"Target Found at pos : "<<ans<<endl;
    
    deleteNode(30,head,tail);
    print(head);


    return 0;
}