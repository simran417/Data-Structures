// pointers in array, char array, functions:
#include<iostream>
using namespace std;
void print(int *p){
   *p=*p+1;
}
int main(){
   /* int arr[10]={1,2,3};
    // address of arr[0]
    cout<<arr<<endl;
    cout<<&arr[0]<<endl; //same as above
    cout<<arr+1<<endl;
    cout<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;
cout<<"for q"<<endl;
    int *q= &arr[0];
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<&q<<endl;

// for char array
// char ch[5]="abcd";
// cout<<ch<<endl;
// cout<<&ch<<endl;

char ch='z';
char *c= &ch;
cout<<c<<endl;*/

// int a=5;
// int *p=&a;
// cout<<a<<endl;
// print(p);
// cout<<a;

int i=5;
int *p=&i;
int **p1=&p;
cout<<p<<endl;
cout<<**p1<<endl;

}