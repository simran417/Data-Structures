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
    ~node(){
        int value=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
// insert at head:
void insertH(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}
// insert at tail
void insertT(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=tail->next;
}
void insertM(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        insertH(head,d);
        return;
    }
    node* p=head;
    int cnt=1;
    while(cnt<pos-1){
        p=p->next;
        cnt++;
    }
    if(p->next==NULL){
        insertT(tail,d);
        return;
    }
      node* temp=new node(d);
        temp->next=p->next;
        p->next=temp;
}
void deleteN(node* &head,int pos){
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* n1=new node(5);
    node* head=n1;
    node* tail=n1;
    // insertH(head,4);
    insertT(tail,6);
    insertT(tail,7);
    insertM(head,tail,2,9);
    deleteN(head,2);
    print(head);
    
    // cout<<n1->data<<endl;
}