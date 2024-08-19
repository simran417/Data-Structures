#include<iostream>
using namespace std;
// palindrome:
bool checkPalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s]!=a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

// reverse a string:
void reverse(char ch[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(ch[s],ch[e]);
        s++;
        e--;
    }
}
// length of string:
int getLength(char ch[]){
    int count=0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<"your name is : "<<name<<endl;
    int length=getLength(name);
    cout<<"length is "<<length<<endl;
   reverse(name,length);
   cout<<"reverse: "<<name<<endl;
  int p= checkPalindrome(name,length);
  cout<<p<<endl;

}