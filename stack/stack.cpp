// using STL:
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>s;
    // inserting an element (push):
    s.push(1);
    s.push(2);
    s.push(3);
    // deleting an element(pop):
    s.pop();
    // see first element:
    cout<<"top element: "<<s.top()<<endl;
    // to check stack is empty or not:
    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }
    // to check size:
    cout<<"size:"<<s.size()<<endl;
}
