#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    // constructor:
    node(int d){
        this->data=d;
        this->next= NULL;
    }
    
    // destructor:
    ~node(){
        int val=this->data;
        while(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};
    void insert(node* &head,int d){
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
        int count(node* &head){
        node*temp=head;
        int cnt=1;
        while(temp!=NULL){
            temp=temp->next;
            cnt++;
        }
        return cnt;
    }
    node* sort(node* head){
        int Zcnt=0;
        int ocnt=0;
        int Tcnt=0;
        node* temp=head;
        while(temp!=NULL){
            if(temp->data==0){
                Zcnt++;
            }
            else if(temp->data==1){
                ocnt++;
            }
            else if(temp->data==Tcnt){
                Tcnt++;
            }
            temp=temp->next;
        }
        temp=head;
        while(temp!=NULL){
            if(Zcnt !=0){
                temp->data=0;
                Zcnt--;
            }
            else if(ocnt!=1){
                temp->data=1;
                ocnt--;
            }
            else if(Tcnt !=2){
                temp->data=2;
                Tcnt--;
            }
            temp=temp->next;
        }
        return head;
    }

    void partition(node* &head){
     int len=count(head);
     int half=len/2;
     node*p=head;
     int cnt=1;
     while(cnt<=half){
        cout<<p->data<<" ";
        p=p->next;
        cnt++;
     }
     cout<<endl;
     while(cnt>half && p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
     }
    }
// check palindrome :
node* getMid(node* head){
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}

node* reverse(node* head){
    node* curr=head;
    node* prev=NULL;
    node* next=NULL;
    while(curr!=NULL){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool ispalindrome(node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }
    // find mid:
    node* middle=getMid(head);

    // reverse
    node* temp=middle->next;
    middle->next=reverse(temp);

    // comapare halfes
    node* head1=head;
    node* head2=middle->next;
    while(head2!=NULL){
        if(head1->data!= head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}

    void print(node* &head){
        node*temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    int main(){
        // node* n1=new node(10);
        // node* head=n1;
        // insert(head,9);
        // insert(head,8);
        // insert(head,7);
        // insert(head,6);
        // insert(head,5);
        node* n1=new node(1);
        node* head=n1;
        insert(head,2);
        insert(head,3);
        insert(head,3);
        insert(head,2);
        insert(head,1);
        print(head);
        // node* ans=sort(head);
        // head=ans;
        // print(head);
if(ispalindrome(head)){
    cout<<"yes"<<endl;
}else{
    cout<<"no"<<endl;
}
        // partition(head);
        // print(head);
    }
    
