#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int m,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[3][3];
    // taking input:
    /* // row wise:
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }*/

    /*// col wise input:
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
     }

    // printing output:
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
/*//    by default row wise input
   int arr1[2][3]={1,2,3,4,5,6};
   for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
   }

//    another method:
int arr2[2][3]={{1,2,3},{4,5,6}};
for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
   }*/

//   search for a particular item:

int arr3[3][3];
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>arr3[i][j];
    }
}

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr3[i][j];
    }
}
int target;
cout<<"enter target: ";
cin>>target;
int ans=ispresent(arr3,target,3,3);
cout<<ans;
}
