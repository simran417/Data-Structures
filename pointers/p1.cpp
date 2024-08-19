#include<iostream>
using namespace std;
int main(){
    int a=5;
    int *p=&a;
    // print a
    cout<<a<<endl;
    // print address of a
    cout<<p<<endl;
    // * value at adress
    cout<<*p<<endl;
    // increment in value
    (*p)++;
    cout<<a<<endl;
    // increment in integer memory
    p=p+1;
    cout<<p<<endl;
}