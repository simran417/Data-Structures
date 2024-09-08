#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // constructor:
    node(int d){
        this->data=d;
        this->next=NULL;
    }

    // destructor:
    ~node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

// insertion:
void insertH(node* &tail,int element , int d ){
    if(tail==NULL){
        node* temp=new node(d);
        tail=temp;
        temp->next=tail;
    }
    else{
        // element found:  not empty linked list:
        node* curr=tail;
        while(curr->data !=element){
            curr=curr->next;
        }
        node* temp=new node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}
// print
void print(node* tail){
    node* temp=tail;
    if(tail==NULL){
        cout<<"empty list"<<endl;
    }
    do{
        cout<<tail->data<<" ";
        tail=tail->next;
    }while(tail!=temp);
}
// delete:
void deleteN(node* &tail,int element){
    if(tail==NULL){
        cout<<"empty list"<<endl;
        return;
    }
    else{
        node* prev=tail;
        node* curr=tail->next;
        while(curr->data!=element){
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
// for one node:
        if(tail==prev){
            tail=NULL;
        }
        // >2 node
        if(tail==curr){
            tail=prev;
        }
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    node* tail=NULL;
    insertH(tail,4,1);
    insertH(tail,1,2);
    insertH(tail,2,3);
    deleteN(tail,2);
    print(tail);
}