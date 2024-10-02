#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top1;
    int top2;

    // constructor:
    stack(int n){
        this->size=n;
        top1=-1;
        top2=n;
        arr=new int[n];
    }

    // push in stack 1
    void push1(int num){
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    // push in stack2
        void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"overflow"<<endl;
        }
    }
    // pop from stack1
    int pop1(){
        if(top1>=1){
            int ans=arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    // pop from stack2
    int pop2(){
        if(top2>=1){
            int ans=arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
};

int main(){
    stack st(6);
    st.push1(2);
    st.push2(5);

}