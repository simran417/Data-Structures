//basic function:
#include<iostream>
using namespace std;
// void fun(int n){  //in this first we print value of n then calling
//     if(n>0){
//         cout<<n<<endl;
//         fun(n-1);
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
// }

// void fun(int n){  //in this we first call the function then return it
//     if(n>0){
//         fun(n-1);
//         cout<<n<<endl;
//     }
// }
// int main(){
//     int x=3;
//     fun(x);
// }

//global and static variable in recursion:
// int x=0;      //global
// int fun(int n){            
//    // static int x=0;  //static
//     if(n>0){
//         x++;
//       return fun(n-1)+x;
// }
// return 0;
// }
// int main(){
//     int a=5;
//    int r=fun(a);
//    cout<<r<<endl;
// }

//tree recursion:

// int fun(int n){
//   if(n>0){
//     cout<<n<<endl;
//     fun(n-1);
//     fun(n-1);
//   }
//   return 0;
// }
// int main(){
//   fun(3);
// }

//indirect recursion:
// void funB(int n);
// void funA(int n){
//   if(n>0){
//     cout<<n<<endl;
//     funB(n-1);
//   }
// }
// void funB(int n){
//   if(n>0){
//     cout<<n<<endl;
//     funA(n/2);

//   }
// }
// int main(){
//   int  n=20;
//     funA(n);
   
// }

//nested recursion:
// int fun(int n){
//   if(n>100)
//      return n-10;
// return fun(fun(n+11));
  
// }
// int main(){
//   int r=fun(95);
//   cout<<r<<endl;
// }

//sum of 1st n natural numbers:
// int sum(int n){
//   if(n==0){
//     return 0;
//   }
//   else{
//     return sum(n-1)+n;
//   }
// }
// int main(){
//   int n;
//   cin>>n;
//  int r= sum(n);
//  cout<<r<<endl;
// }

//factorial of a no.:

// int fact(int n){
//   if(n==0){
//     return 1;
//   }
//   else{
//     return fact(n-1)*n;
//   }
// }

// int main(){
//   int n;
//   cin>>n;
//   int r=fact(n);
//   cout<<r<<endl;
// }

// power function:
// int power(int m,int n){
//   if(n==0){
//     return 1;
//   }
//   else{
//      return power(m,n-1)*m;
//   }
// }

// int main(){
//   int r=power(5,4);
//   cout<<r<<endl;
// }

//taylors series:
// double e(int x,int n){
//   static int p=1,f=1;
//   int r;
//   if(n==0)
//    return 1;

// else{
//   r=e(x,n-1);
//   p=p*x;
//   f=f*n;
//   return r+p/f;
// }   
// }
// int main(){
//   int a=e(1,10);
//   cout<<a<<endl;
// }

// taylors series using horner method:
// int e(int x,int n){
//   int static s=1;
//   if(n==0)
//    return s;
//   else
//    s=1+x/n*s;
//    return e(x,n-1); 
// }
// int main(){
//   int r=e(4,5);
//   cout<<r<<endl;
// }

// using loop:
// int e(int x,int n){
//   int s=1;
//   for(;n>0;n--){
//     s=1+x/n*s;
//   }
//   return s;
// }
// int main(){
//   int r=e(4,5);
//   cout<<r<<endl;i
// }

// fibonacci series:
// int fib(int n){
//   if(n==0||n==1){
//     return n;
//   }
//   else{
//     return fib(n-2)+fib(n-1);
//   }
// }
// int main(){
//   int r=fib(4);
//   cout<<r<<endl;
// }

// combination:
// int c(int n,int r){
//   if(r==0||n==r){
//     return 1;
//   }
//   else{
//     return c(n-1,r-1)+c(n-1,r);
//   }
// }
// int main(){
//   int r=c(4,2);
//   cout<<r<<endl;
// }

//tower of hanoi problem:
void Toh(int n,int a,int b,int c){
  if(n>0){
    Toh(n-1,a,c,b);
    cout<<a<<"to"<<c<<endl;
    Toh(n-1,b,a,c);
  }
}
int main(){
   Toh(3,1,2,3);
 
}