#include<iostream>
using namespace std;
void print(int arr[], int size){
   for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
   }
}

int partition(int arr[],int s,int e){
    int p=arr[s];
    int cnt=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=p){
            cnt++;
        }
    }

    // place pivot
    int pidx=s+cnt;
    swap(arr[pidx],arr[s]);

    // left and right part
    int i=s; 
    int j=e;
    while(i<pidx&&j>pidx){
        while(arr[i]<p){
            i++;
        }
         while(arr[j]>p){
            j--;
        }
        if(i<pidx&&j>pidx){
            swap(arr[i++],arr[j--]);
        }
        return pidx;
    }
}
void Qs(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    // partition
    int p=partition(arr,s,e);
    // left
    Qs(arr,s,p-1);
    // right
    Qs(arr,p+1,e);
}
int main(){
    int arr[5]={5,2,6,1,4};
    Qs(arr,0,4);
    print(arr,5);
}