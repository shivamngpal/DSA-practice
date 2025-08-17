#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class Node{
public:
    // attributes
    int data;
    Node* left;
    Node* right;

    // ctor
    // initialization list
    Node(int val): data(val),left(nullptr),right(nullptr){}
};

Node* createTree(){
    int value;
    cout<<"Enter value of root : ";
    cin>>value;

    if(value==-1)
        return nullptr;

    else{
        Node* root = new Node(value);
        cout<<"Creating Left Subtree of Node "<<value<<endl;
        root->left = createTree();
        cout<<"Creating Right Subtree of Node "<<value<<endl;
        root->right = createTree();
        return root;
    }
}

// TRAversal
// ---------------------------------------------------
// Preorder - NLR
void preorder(Node* root){
    if(root==nullptr)
        return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// Inorder
void inorder(Node* root){
    if(root==nullptr)
        return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// postorder - LRN
void postOrder(Node* root){
    if(root==nullptr)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

// levelOrder
void levelOrder(Node* root){
    if(root==nullptr)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(frontNode==nullptr){
            cout<<endl;
            if(!q.empty())
                q.push(NULL);
        }
        else{
            cout<<frontNode->data<<" ";
            if(frontNode->left!=nullptr)
                q.push(frontNode->left);
            if(frontNode->right!=nullptr)
                q.push(frontNode->right);
        }
    }
}

// levelOrder -> right to left
void levelOrderRightToLeft(Node* root){
    if(root==nullptr)
        return;

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(frontNode==nullptr){
            cout<<endl;
            if(!q.empty())
                q.push(nullptr);
        }
        else{
            cout<<frontNode->data<<" ";
            if(frontNode->right!=nullptr)
                q.push(frontNode->right);
            if(frontNode->left!=nullptr)
                q.push(frontNode->left);
        }
    }
}

void levelOrderZigZag(Node* root){
    if(root==nullptr)
        return;

    int level=0;
    queue<Node*> q;
    stack<Node*> st;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* frontNode = q.front();
        q.pop();

        if(!(level&1)){ //even
            while(!st.empty()){
                cout<<st.top()->data<<" ";
                st.pop();
                if(st.empty())
                    cout<<endl;
            }
        }

        if(frontNode==nullptr){
            level++;
            cout<<endl;
            if(!q.empty())
                q.push(nullptr);
        }
        else{
            if(level&1){    //odd
                st.push(frontNode);
                if(frontNode->left!=nullptr)
                    q.push(frontNode->left);
                if(frontNode->right!=nullptr)
                    q.push(frontNode->right);
            }
            else{
                cout<<frontNode->data<<" ";
                if(frontNode->left!=nullptr)
                    q.push(frontNode->left);
                if(frontNode->right!=nullptr)
                    q.push(frontNode->right);
            }
        }
    }
    while(!st.empty()){
        cout<<st.top()->data<<" ";
        st.pop();
    }
}

int heightOfTree(Node* root){
    if(root==nullptr)
        return 0;

    int leftHeight = heightOfTree(root->left);
    int rightHeight = heightOfTree(root->right);

    return max(leftHeight,rightHeight)+1;
}

int main(){
    Node* root = createTree();

    cout<<"PREORDER TRAVERSAL"<<endl;
    preorder(root);
    cout<<endl;

    cout<<"INORDER TRAVERSAL"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"POSTORDER TRAVERSAL"<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"LEVEL ORDER"<<endl;
    levelOrder(root);

    cout<<"LEVEL ORDER(RIGHT TO LEFT)"<<endl;
    levelOrderRightToLeft(root);

    cout<<"LEVEL ORDER(ZIG ZAG)"<<endl;
    levelOrderZigZag(root);
    cout<<endl;

    cout<<"Height of a Tree : ";
    cout<<heightOfTree(root)<<endl;


    return 0;
}