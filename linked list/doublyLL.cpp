#include <iostream>
using namespace std;

class Node
{
public:
    Node *prev;
    int data;
    Node *next;

    // ctor
    Node(int value) : prev(NULL), data(value), next(NULL) {}
};

// insertion in DLL
void insertAtHead(int value, Node *&head, Node *&tail)
{
    // if LL is empty
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    else
    { // LL is not empty
        Node *newNode = new Node(value);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertAtTail(int value, Node *&head, Node *&tail)
{
    // LL is empty
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }

    // LL is not empty
    else
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

int getlength(Node *&head)
{
    int len = 0;
    Node *it = head;
    while (it != NULL)
    {
        it = it->next;
        len++;
    }
    return len;
}

void insertAtPos(int pos, int value, Node *&head, Node *&tail)
{
    int n = getlength(head);
    // insert at pos=1
    // means insert At head
    if (pos == 1)
        insertAtHead(value, head, tail);

    // pos=n+1
    // means insert at tail
    if (pos == n + 1)
        insertAtTail(value, head, tail);

    else
    {
        int count = 1;
        Node *it = head;
        while (count < pos - 1)
        {
            it = it->next;
            count++;
        }
        Node *newNode = new Node(value);
        newNode->next = it->next;
        it->next->prev = newNode;
        it->next = newNode;
        newNode->prev = it;
    }
}

bool SearchInDLL(Node *&head, int target)
{
    Node *it = head;
    while (it != NULL)
    {
        if (it->data == target)
            return true;

        it = it->next;
    }
    return false;
}

void deleteNode(int pos, Node *&head, Node *&tail)
{
    int n = getlength(head);
    // empty LL
    if (head == NULL && tail == NULL)
        cout << "Deletion not possible" << endl;

    // single node
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    else if (pos == 1)
    {
        Node *temp = head;
        head = temp->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }

    else if(pos==n){
        Node* temp = tail;
        tail=temp->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }

    else
    { // multiple nodes
        int count = 1;
        Node *temp = head;
        while (count < pos - 1)
        {
            temp = temp->next;
            count++;
        }
        Node *delNode = temp->next;
        temp->next = delNode->next;
        delNode->next->prev = temp;
        delNode->next = NULL;
        delNode->prev = NULL;
        delete delNode;
    }
}

void print(Node *&head)
{
    Node *it = head;
    while (it != NULL)
    {
        cout << it->data << "->";
        it = it->next;
    }
    cout << "NULL" << endl;
}

void ReversePrint(Node *&tail)
{
    Node *it = tail;
    while (it != NULL)
    {
        cout << it->data << "->";
        it = it->prev;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(10, head, tail);
    insertAtHead(20, head, tail);
    insertAtHead(30, head, tail);

    // print(head);
    // ReversePrint(tail);

    insertAtPos(3, 15, head, tail);

    insertAtTail(5, head, tail);
    insertAtTail(2, head, tail);

    print(head);
    ReversePrint(tail);

    bool ans = SearchInDLL(head, 715);
    ans ? cout << "Target Found" << endl : cout << "Target not FOund" << endl;

    deleteNode(3, head, tail);
    print(head);

    deleteNode(1, head, tail);
    print(head);

    deleteNode(4, head, tail);
    print(head);

    // int n = getlength(head);
    // cout<<n<<endl;

    return 0;
}