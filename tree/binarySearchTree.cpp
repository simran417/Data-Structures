#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    // constructor:
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertIntoBST(Node* &root,int d){
    // base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}

void takeip(Node* &root){
    int data;
    cin>>data;

    while(data != -1){
        insertIntoBST(root,data);
        cin>>data;
    }
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
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

// search in bst:
bool search(Node* root,int x){
Node* temp=root;
while(temp !=NULL){
    if(temp->data==x){
        return true;
    }
    if(temp->data>x){
        temp=temp->left;
    }
    else{
        temp=temp->right;
    }
}
return false;
}

int main(){
    Node* root=NULL;
    cout<<"enter data "<<endl;
    takeip(root);

    cout<<"printing the bst: "<<endl;
    levelOrderTraversal(root);

    search(root,15);

}