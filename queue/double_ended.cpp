#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    queue(){
        size=10001;
        arr=new int [size];
        front=-1;
        rear=-1;
    }
    bool push_f(int x){
        if((front ==0 && rear=size-1) || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear !=size-1){
            front=size-1;
        }
        else{
            front--;
        }
        arr[front]=x;
    }

    bool push_r(int x){
        if((front ==0 &&rear=size-1) || (rear==(front-1)%(size-1))){
            return false;
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
    }
    int pop_f(){
         if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans=arr[front];
        arr[front]=-1;

        if(front==rear){
            front=rear=-1;
        }
        else if(front=size-1){
            front=0;
        }
        else{
            front++;
        }
    return ans;
    }
    int pop_r(){
         if(front==-1){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;

        if(front==rear){
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;
        }
        else{
            front++;
        }
    return ans;
    }
};
