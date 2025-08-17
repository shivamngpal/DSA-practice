#include<iostream>
#include<unordered_map>
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

// -------------------------------------------------------------
// BRUTE FORCE
// -------------------------------------------------------------
// check cycle in LL
// unordered map banao
// ussme hrr node ke saath bool store karo
// agr koi node true hoga phle se mtlb wo visit ho chuka hai or dobara visit ho rha h
// mtlb cycle present hai
// return true
// else node true ni h toh usse visited mark kro , usse true kro
// agr last me bahar nikl gye LL se without returning true and temp=NULL hogya 
// so LL is iterated and no cycle present 
// return false
bool CycleLL(Node* &head){
    unordered_map<Node*, bool> m;
    Node* temp=head;
    while(temp!=NULL){
        if(m[temp]==true)   //already visited
            return true;    //cycle present hai
        else{   //not visited
            m[temp]=true;
        }
        // ye m hmesha bhool jaata hu
        // temp ko aage bhadao
        temp=temp->next;
    }
    // yaha pohch gye mtlb 
    // sbko true mark kiya
    // or temp NULL hogya
    // mtlb LL khtm hogya
    // CYCLE present ni hai
    return false;
}

// -------------------------------------------------------------
// OPTIMAL SOLUTION - FAST/SLOW POINTERS
// -------------------------------------------------------------
bool CycleOptimal(Node* &head){
    Node* fast= head;
    Node* slow= head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)  //agr dono ek jgh h toh CYCLE present hai
            return true;
    }
    return false;
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

    // tail->next = head->next;    //cycle banadi
    // cout<<tail->data<<endl;
    
    // print(head);
    bool ans = CycleOptimal(head);
    ans ? cout<<"Cycle Present"<<endl : cout<<"Cycle not present"<<endl;

    return 0;
}
