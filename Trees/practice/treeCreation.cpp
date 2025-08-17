#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        // ctor
        Node(int val):data(val),left(NULL),right(NULL){}
};

Node* createTree(){
    cout<<"Enter value for root node : ";
    int value;
    cin>>value;

    if(value==-1){
        return NULL;
    }
    else{
        Node* root=new Node(value);
        cout<<"Adding left child for"<<value<<endl;    
        root->left=createTree();
        cout<<"Adding right child for"<<value<<endl;    
        root->right=createTree();
        return root;
    }
}

Node* levelOrder(Node* &root){
    if(root==NULL)
        return NULL;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front==NULL){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<front->data<<" ";
            if(front->left!=NULL)
                q.push(front->left);
            if(front->right!=NULL)
                q.push(front->right);
        }
    }
}

int main(){
    Node* root;
    root = createTree();

    if (root != NULL) {
        cout << "Root node value is: " << root->data << endl;
    }

    levelOrder(root);
    return 0;
}