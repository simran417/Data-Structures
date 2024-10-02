#include<iostream>
using namespace std;
class stack{
    public:
    int size;
    int *arr;
    int top;
    // constructor:
    stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"stack overflow"<<endl;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    void peek(){
        if(top>=0){
            cout<<"arr top: "<<arr[top]<<endl;
        }
        else{
            cout<<"empty"<<endl;
        }
    }
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    stack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.peek();
    st.pop();
    st.peek();

}