#include<iostream>
#include<queue>
using namespace std;
int main(){
    deque<int>q;
    q.push_front(1);
    q.push_front(11);
    q.push_back(2);
    q.push_back(22);
    // cout<<q.front()<<endl;
    // cout<<q.back()<<endl;
    q.pop_back();
    // cout<<q.back()<<endl;
    q.pop_back();
    q.pop_back();
    q.pop_back();
    cout<<q.back()<<endl;
    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"no empty"<<endl;
    }
}
