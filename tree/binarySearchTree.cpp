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
bool search(Node* &root,int x){
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

// find minimum value:
Node* minval(Node* root){
    Node* temp=root;
    while(temp->left !=NULL){
        temp=temp->left;
    }
    return temp;
}

// find maximum value:
Node* maxval(Node* root){
    Node* temp=root;
    while(temp->right !=NULL){
        temp=temp->right;
    }
    return temp;
}

// delete a node:
Node* deleteNodebst(Node* root,int val){
    // base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        // 0-child:
        if(root->left==NULL && root->right ==NULL){
            delete root;
            return NULL;
        }
        // 1-child:
        // left child:
        if(root->left !=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // right child:
        if(root->left==NULL && root->right !=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        // 2 child:
        if(root->left !=NULL && root->right !=NULL){
            int mini=minval(root->right)->data;
            root->data=mini;
            root->right=deleteNodebst(root->right,mini);
            return root;
        }
    }
    else if(root->data>val){
        // left part
        root->left=deleteNodebst(root->left,val);
        return root;
    }
    else{
        root->right=deleteNodebst(root->right,val);
        return root;
    }
}

int main(){
    Node* root=NULL;
    cout<<"enter data "<<endl;
    takeip(root);

    cout<<"printing the bst: "<<endl;
    levelOrderTraversal(root);

    int key=15;
    if(search(root,key)){
        cout<<key<<" is present"<<endl;
    }else{
        cout<<key<<" is not present"<<endl;
    }

  Node* ans=  minval(root);
  cout<<"min val is: "<<ans->data<<endl;

  Node* ans1=maxval(root);
  cout<<"max val is: "<<ans1->data;

  root=deleteNodebst(root,10);
  cout<<"printing the bst: "<<endl;
  levelOrderTraversal(root);

}