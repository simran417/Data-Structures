#include<iostream>
using namespace std;
class queue{
    int *arr;
    int front;
    int rear;
    int size;
    public:
    // constructor:
    queue(){
        size=10001;
        arr=new int[size];
        front=rear=-1;
    }

    int enqueue(int data){
        if((front==0&&rear ==size-1) || (rear==(front-1)%(size-1))){
            cout<<"queue is full"<<endl;
        }
        else if(front==-1){
            arr[rear]=data;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
            arr[rear]=data;
        }
        else{
            rear++;
            arr[rear]=data;
        }
    }

    int dequeue(){
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
};
int main(){
    queue q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    // q.dequeue();

}