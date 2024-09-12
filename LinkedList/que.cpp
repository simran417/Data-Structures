#include<iostream>
#include<map>
using namespace std;
class node{
    public:
    int data;
    node* next;

    // constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }

    // destructor:
    ~node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

// insertion:
void insertN(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

// reverse:
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* forwrd=NULL;
    while(curr!=NULL){
        forwrd=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forwrd;
    }
    head=prev;
}

// reverse k nodes:
node* krev(node* head,int k){
    // base case:
    if(head==NULL){
        return NULL;
    }
// for k nodes:
node* next=NULL;
node* curr=head;
node* prev=NULL;
int cnt=0;
while(curr!=NULL && cnt<k){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    cnt++;
}
if(next!=NULL){
    head->next=krev(next,k);
}
return prev;
}

// to find length;
int len(node* head){
    node* temp=head;
    int cnt=0;
    while(temp!=NULL){
        cnt++;
        temp=temp->next;
    }
    return cnt;
}

// find middle element:
node* mid(node* head){
    int length=len(head);
    int ans=length/2;
    node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
// linked list is circular or not?
bool iscircle(node* head){
    if(head==NULL){
        return true;
    }
    node* temp=head->next;
    while(temp!=NULL&&temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }
    if(temp==NULL){
        return false;
    }
}

// find or detect loop:
bool dcir(node* head){
    if(head==NULL){
        return false;
    }
    map<node*,bool>visited;
    node* temp=head;
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}
// floyd detect cycle:
node* floydDetect(node* head){
    if(head==NULL){
        return NULL;
    }
    node* slow=head;
    node* fast=head;
    while(slow!=NULL&&fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}
// find starting node:
node* findSN(node * head){
    if(head==NULL){
        return NULL;
    }
    node* intersection=floydDetect(head);
    node* slow=head;
    while(slow!=intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

// delete duplicate from sorted list:
node* deleteN(node* head){
    if(head==NULL){
        return NULL;
    }
    node* curr=head;
    while(curr!=NULL){
        if((curr->next!=NULL)&& curr->data==curr->next->data){
            node* next1=curr->next->next;
            node* Ndelete=curr->next;
            delete(Ndelete);
            curr->next=next1;
        }
        else{
            curr=curr->next;
        }
    }
    return head;
}

// print:
void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
node* n1=new node(10);
node* head=n1;
insertN(head,9);
insertN(head,8);
insertN(head,8);
insertN(head,6);
print(head);
node* temp=deleteN(head);
head=temp;
print(head);
// if(dcir(head)){
//     cout<<"true"<<endl;
// }else{
//     cout<<"false"<<endl;
// }
// if(floydDetect(head)!=NULL){
//     cout<<"cycle detect"<<endl;
// }
// else{
//     cout<<"cycle not present"<<endl;
// }

// if(iscircle(head)){
//     cout<<"yes"<<endl;
// }
// else{
//     cout<<"no"<<endl;
// }
// // node* ans=krev(head,2);
// head=ans;
// reverse(head);
// node* ans=mid(head);
// cout<<ans->data<<endl;
// print(head);
}