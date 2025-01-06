#include<iostream>
using namespace std;
class queue{
    int *arr;
    int qfront;
    int rear;
    int size;

    public:
    queue(){
        size=100001;
        arr=new int[size];
        qfront=0;
        rear=0;
    }
    void enqueue(int data){
        if(rear==size){
            cout<<"full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    int dequeue(){
        if(qfront==rear){
            cout<<"empty"<<endl;
            return -1;
        }
        else{
            int ans=arr[qfront];
            arr[qfront]=-1;
            qfront++;
            if(qfront==rear){
                qfront=0;
                rear=0;
            }
            return ans;
        }
    }

    int front(){
        if(qfront==rear){
            return -1;
        }
        else{
            return arr[qfront];
        }
    }
    bool isEmpty(){
        if(qfront==rear){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    queue q;
    q.enqueue(5);
    // q.dequeue();
    int ans=q.front();
    cout<<ans<<endl;
    
}