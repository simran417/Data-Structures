
#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for left tree: "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the data for right tree: "<<data<<endl;
    root->right=buildTree(root->right);

    return root;
}

void levelOrderTraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        // cout<<temp->data<<" ";
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

// inorder traversal:
void inorder(node* root){
    // base code
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// preorder traversal
void preorder(node* root){
    // base code
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal
void postorder(node* root){
    // base code
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node* buildfromLevelOrder(node* root){
    queue<node*>q;
    cout<<"enter data for root: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"enter data for left node: "<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(data !=-1){
            temp->left= new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter data for right node: "<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(data !=-1){
            temp->right= new node(rightdata);
            q.push(temp->right);
        }

    }
}


int main(){
    node* root=NULL;
    root= buildTree(root);
    cout<<"level order traversal"<<endl;
    // levelOrderTraversal(root);
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
}