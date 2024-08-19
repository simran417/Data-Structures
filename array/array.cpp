#include<iostream>
// #include<maths.h>
using namespace std;

// // find min max:
// int getmax(int arr[],int n){
//     int MAX = INT_MIN;
//    for(int i=0;i<n;i++){
//     if( arr[i]> MAX){
//          MAX = arr[i];
//     }
    
//    }
//    return MAX;
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int ans=getmax(arr,5);
//     cout<<ans;
// }

// linear search:
// int Ls(int arr[],int n , int key){
    
// for(int i=0;i<n;i++){
//     if(arr[i]==key){
//         cout<<i;
//     }
// }
// }
// int main(){
//     int arr[5]={1,2,3,4,5};
//    int key;
//    cin>>key;
//    Ls(arr,5,key);
// }

// reverse array:
// int reverse(int arr[],int n){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         swap(arr[s],arr[e]);
//         s++;
//         e--;
//     }
    
// }
// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
// int main(){
//     int arr[6]={1,2,3,4,5,6};
//     reverse(arr,6);
//     printarr(arr,6);
// }

// reverse alternate:
int revalt(int arr[],int n){
    int i=0;
    
    for(int i=0;i<n;i++){
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
        i++;
        
    }
}
 void printarr(int arr[],int n){
     for(int i=0;i<n;i++){
         cout<<arr[i];
    }
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    
    revalt(arr,6);
   printarr(arr,6);
    
}