#include<iostream>
using namespace std;

// BRUTE FORCE
// 1. make a copy
// 2. reverse the copy
// 3. compare copy with OG LL -> if both equal -> palindrome -> else Not a palindrome

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

// reverse copy of LL
// ye reverse isliye hai kyoki
// jo original LL hai usspr hm head se lekr tail tk iterate kr rhe h
// or head me last node jo daala hoga whi aayega 
// and copy m jo original ka first node hoga wo last me aayega
// that's why original ki copy hai yeh
void copyLL(Node* &head1, Node* &copyHead, Node* &copyTail){
    Node* temp = head1;
    while(temp!=NULL){
        insertAtHead(temp->data,copyHead,copyTail);
        temp=temp->next;
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

bool compareLL(Node*head1, Node* head2){
    Node* temp=head1;
    Node* copyTemp=head2;
    while(temp!=NULL){
        if(temp->data != copyTemp->data)
            return false;
        
        else{
            temp=temp->next;
            copyTemp=copyTemp->next;
        }
    }
    return true;
}

// ----------------------------------------------------
// APPROACH 2 -> PALINDROME LL
// ----------------------------------------------------
// S.C. = O(1)
// FIND MIDDLE NODE
// FROM START TO MIDDLE NODE SE PREV BREAK A LL
// THEN FROM MIDDLE NODE TO END OF LL MAKE ANOTHER LL
// NOW REVERSE ANY OF THE TWO LL
// COMPARE WITH EACH OTHER

// STEP 1: FIND MIDDLE NODE
Node* MiddleNode(Node* &head, Node* &MiddleNodeKaPrev){
    Node* fast=head;
    Node* slow=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            MiddleNodeKaPrev = slow;    //middle node ka prev is maintained by reference
            slow=slow->next;
        }
    }
    return slow;    //Middle node
}

Node* reverseLL(Node* &head){
    Node* prev=NULL;
    Node* curr=head;

    while(curr!=NULL){
        Node* fwd = curr->next;
        curr->next = prev;
        prev=curr;
        curr=fwd;
    }
    return prev;
}

bool compareLL2(Node* &head1, Node* &head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != NULL){
        if(temp1->data != temp2->data)
            return false;
        else{
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    return true;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(1,head,tail);
    insertAtHead(2,head,tail);
    insertAtHead(3,head,tail);
    insertAtHead(4,head,tail);
    insertAtHead(5,head,tail);
    insertAtHead(6,head,tail);
    
    print(head);

// Approach 2
    Node* MiddleNodeKaPrev = NULL;
    Node* middle = MiddleNode(head,MiddleNodeKaPrev);

    MiddleNodeKaPrev->next = NULL;

    Node* reverse = reverseLL(middle);

    bool ans = compareLL2(head,reverse);
    ans ? cout<<"LL is Palindrome"<<endl : cout<<"Not a Palindrome"<<endl;

// Approch-1
    // New LL -> copy of old LL -> head1
    // Node* copyHead=NULL;
    // Node* copyTail=NULL;

    // cout<<"Printing Reverse Copy of LL"<<endl;
    // copyLL(head1,copyHead,copyTail);
    // print(copyHead);

    // bool ans = compareLL(head1,copyHead);
    // ans ? cout<<"Palindrome"<<endl : cout<<"Not a Palindrome"<<endl;

    return 0;
}