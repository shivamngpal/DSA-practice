#include<iostream>
#include<queue>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    // ctor
    Node(int val):data(val),left(nullptr),right(nullptr){} //initialization list
};

Node* buildBST(int val, Node* root){
    if(!root)
        return new Node(val);

    else if(val < root->data){
        root->left = buildBST(val,root->left);
    }
    else{
        root->right = buildBST(val,root->right);
    }
    return root;
}

void createTree(Node* &root){
    cout<<"Enter value for root : ";
    int value;
    cin>>value;
    
    while(value!=-1){
        root  = buildBST(value,root);
        cout<<"Enter value for root : ";
        cin>>value;
    }
}

void preOrder(Node* root){
    if(!root)
        return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){
    // LRN
    if(!root)
        return;

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

void inOrder(Node* root){
    // LNR
    if(!root)
        return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}


void levelOrder(Node* root){
    if(!root)
        return ;

    queue<Node*> q;
    q.push(root);
    q.push(nullptr);

    while(!q.empty()){
        Node* front = q.front();
        q.pop();

        if(front==nullptr){
            cout<<endl;
            if(!q.empty())
                q.push(nullptr);
        }
        else{
            cout<<front->data<<" ";
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
    }
}

// min/max value in BST
int minVal(Node* root){
    if(!(root->left))
        return root->data;
    
    return minVal(root->left);
}

int maxVal(Node* root){
    if(!(root->right))
        return root->data;
    
    return maxVal(root->right);
}

// search in BST
// somewhat similar to binary search
// if target>root->data, move right of tree
//  else move to left of tree

bool searchBST(Node* root, int target){
    if(!root)
        return false;

    if(root->data == target)
        return true;

    if(root->data > target)
        return searchBST(root->left,target);
    else
        return searchBST(root->right,target);
}


int main(){
    Node* root = nullptr;
    createTree(root);
    levelOrder(root);
    cout<<endl;

    cout<<"PreOrder Traversal :";
    preOrder(root);
    cout<<endl;
    cout<<"Inorder Traversal :";
    inOrder(root);
    cout<<endl;
    cout<<"PostOrder Traversal :";
    postOrder(root);
    cout<<endl;

    int minValue = minVal(root);
    cout<<"Minimum value in BST : "<<minValue<<endl;
    
    int maxValue = maxVal(root);
    cout<<"Maximum value in BST : "<<maxValue<<endl;

    int target = 1240;
    bool ans = searchBST(root,target);
    ans ? cout<<"Target found"<<endl : cout<<"Target Not found"<<endl;

    return 0;
}