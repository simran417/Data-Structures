#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;

    // constructor:
    node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    // destructor
    ~node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
// insert at head
void insertH(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
// insert at tail:
void insertT(node* tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
// insert at any position:
void insertM(node* &head,node* &tail,int pos,int d){
    if(pos==1){
        insertH(head,d);
        return;
    }
    else{
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
        p->next->prev=temp;
        p->next=temp;
        temp->prev=p;
    }
}
// for deleting:
void deleteN(node* &head,int pos){
    if(pos==1){
    node* temp=head;
    temp->next->prev=NULL;
    head=temp->next;
    temp->next=NULL;
    delete temp;
    }
    else{
        node* prev=NULL;
        node* curr=head;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
// print:
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node* n1=new node(2);
    node* head=n1;
    node* tail=n1;
    insertH(head,1);
    // insertT(head,tail,4);
    insertT(tail,4);
    insertM(head,tail,3,3);
    deleteN(head,2);
    print(head);
}