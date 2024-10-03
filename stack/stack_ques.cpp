#include<iostream>
#include<stack>
#include<string>
using namespace std;
/*
// reverse a string:
int main(){
    string str="simran";
    stack<char>s;
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        s.push(ch);
    }
    string ans=" ";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<ans<<endl;
}
*/

// delete middle element from stack:
void solve(stack<int>s,int cnt,int n){
    if(cnt==n/2){
        s.pop();
        return;
    }
    int num=s.top();
    s.pop();
    // recursive call:
    solve(s,cnt+1,n);
    s.push(num);
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    int cnt=0;
    int n=5; //size
    solve(s,cnt,n);


}
