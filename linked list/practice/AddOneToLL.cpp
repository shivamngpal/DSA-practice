#include<iostream>
#include<string.h>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        // ctor
        Node(int val) : data(val),next(NULL){}
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
        head=newNode;
    }
}

void print(Node* &head){
    Node* it=head;
    while(it!=NULL){
        cout<<it->data<<"->";
        it=it->next;
    }
    cout<<"NULL"<<endl;
}

int getlength(int num){
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    return count;
}

// APPROACH 1 -> MAKE LL - ADD 1 - PUT VALUE IN LL
// Node* AddOneToLL(Node* &head){
//     Node* temp=head;
//     int num=0;
//     // int Oldnumlen=0;
//     while(temp!=NULL){
//         int digit = temp->data;
//         // Oldnumlen++;
//         num=num*10+digit;
//         temp=temp->next;
//     }

//     int addOne = num+1;
//     Node* newHead=NULL;
//     Node* newTail=NULL;

//     while(addOne>0){
//         int digit=addOne%10;
//         insertAtHead(digit,newHead,newTail);
//         addOne/=10;
//     }
//     return newHead;
// }

// APPROACH 2
void reverseStr(string str){
    int n=str.length();
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(str[i],str[j]);
        i++;
        j--;
    } 
    // cout<<str<<endl;
}
Node* AddOneToLL(Node* &head){
    string str="";
    Node* temp=head;
    while(temp!=NULL){
        str.push_back(temp->data + '0');
        temp=temp->next;
    }

    // reverseStr(str);
    // cout << str << endl;
    int n=str.length();
    int carry=1;
    for(int i=n-1; i>=0; i--){
        int digit = str[i]-'0';
        int sum = digit+carry;
        str[i]=(sum%10) + '0';
        carry=sum/10;

        if(carry==0) 
            break;
    }

    if(carry) 
        str = '1' + str;

    Node* newHead=NULL;
    Node* newTail=NULL;

    int newlen = str.length();
    for(int i=newlen-1; i>=0; i--){
        insertAtHead(str[i]-'0',newHead,newTail);
    }
    return newHead;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;

    // insertAtHead(9,head,tail);
    insertAtHead(9,head,tail);
    insertAtHead(9,head,tail);
    insertAtHead(9,head,tail);
    insertAtHead(1,head,tail);

    print(head);

    // reverseStr("4546");

    Node* ansHead = AddOneToLL(head);
    print(ansHead);

    return 0;
}