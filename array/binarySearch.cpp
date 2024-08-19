#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s=0;
    int e=n-1;
    int mid=s+((e-s)/2);
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+((e-s)/2);
    }
    return -1;
}
// void printarr(int arr[],int n){
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }
int main(){
    int arr[6]={1,2,3,4,5,6};
    int key;
    cin>>key;
   int ans= binarySearch(arr,6,key);
   cout<<ans;
    
}