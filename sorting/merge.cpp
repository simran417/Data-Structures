#include<iostream>
using namespace std;
void print(int arr[], int size){
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}

void merge(int arr[],int s,int e){
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int[len1];
    int *second=new int[len2];

    int k=s;
    for(int i=0;i<=len1;i++){
        first[i]=arr[k++];
    }

    k=mid+1;
    for(int i=0;i<=len2;i++){
        second[i]=arr[k++];
    }

    // merge two sorted array:
    int idx1=0;
    int idx2=0;
    k =s;
    while(idx1<len1&& idx2<len2){
        if(first[idx1]<second[idx2]){
           arr[k++]=first[idx1++];
        }
        else{
            arr[k++]=second[idx2++];
        }
    }
        while(idx1<len1){
            arr[k++]=first[idx1++];
        }

         while(idx2<len2){
            arr[k++]=second[idx2++];
        }
    
   delete[] first;
   delete[] second;

}
void merge_sort(int arr[],int s,int e){
    if(s>=e){
        return ;
    }
    int mid=s+(e-s)/2;
    // left
    merge_sort(arr,s,mid);
    // right
    merge_sort(arr,mid+1,e);
    // merge
    merge(arr,s,e);
    
}
int main(){
    int arr[7]={1,5,2,3,7,5,9};
    merge_sort(arr,0,6);
    print(arr,7);
}