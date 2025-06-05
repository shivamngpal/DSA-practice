#include<iostream>
#include<queue>
using namespace std;

// Making tree node
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        // ctor
        Node(int val):data(val),left(nullptr),right(nullptr){}  //initialization list
};

Node* createTree(){
    // tb tk chlega jb tk ek node ke dono child null na ho
    int value;
    cout<<"Enter value for root node : ";
    cin>>value;

    if(value==-1)
        return NULL;
    else{
        // Node Banao
        Node* root= new Node(value);
        // root ka left subtree
        cout<<"Adding left child for "<<value<<endl;
        root->left=createTree();
        // root ka right subtree
        cout<<"Adding right child for "<<value<<endl;
        root->right=createTree();
        return root;
    }
}

// TREE TRaversal
    void preOrderTraversal(Node* &root){
        if(root==NULL)
            return;
        
        // NLR
        // N -> current Node
        cout<<root->data<<endl;
        // L -> Left subtree
        preOrderTraversal(root->left);
        // R -> Right Subtree
        preOrderTraversal(root->right);
    }

    void inorderTraversal(Node* &root){
        if(root==NULL)
            return;
        
        // LNR
        // L
        inorderTraversal(root->left);
        // N
        cout<<root->data<<endl;
        // R
        inorderTraversal(root->right);
    }

    void postorderTraversal(Node* &root){
        if(root==NULL)
            return;

        // LRN
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<endl;
    }

    void levelorderTraversal(Node* &root){
        // no node in tree
        if(root==NULL)
            return;
        
        queue<Node*> q;
        q.push(root);
        q.push(NULL);   //NULL isliye push kiya kyoki current level complete hogya h

        while(!q.empty()){
            Node* front=q.front();
            q.pop();
            if(front==NULL){    //front NULL because level complete
                // so move to new line
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
// 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
int main(){
    Node* root;
    root=createTree();

    // cout<<root->data<<endl;

    preOrderTraversal(root);
    cout<<endl;
    inorderTraversal(root);
    cout<<endl;
    postorderTraversal(root);
    cout<<endl;
    levelorderTraversal(root);

    return 0;
}