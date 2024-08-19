#include<iostream>
using namespace std;
#include<vector>
// col wise sum
void printSum(int arr[][3],int n,int m){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
}

// max row sum:
int maxRow(int arr[][3],int n,int m){
    int maxi=INT_MIN;
    int RorIndex=-1;

    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        if(sum>maxi){
            maxi=sum; 
            RorIndex=i;
        }
    }
    cout<<"maximum sum is: "<<maxi<<endl;
     cout<<"row no. is: "<<RorIndex<<endl;
}

// print wave order:
int waveorder(int arr[][3],int nrow,int col){
    for(int col=0;col<3;col++){
        if(col&1){
            for(int row=nrow-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=0;row<nrow;row++){
                cout<<arr[row][col]<<" ";
        }
    }
}
}


std::vector<int> spiral(int arr[][3], int row, int col) {
    int count = 0;
    int total = row * col;
    std::vector<int> ans;

    int srow = 0;
    int scol = 0;
    int erow = row - 1;
    int ecol = col - 1;

    while (count < total) {
        // printing starting row:
        for (int index = scol; index <= ecol && count < total; index++) {
            ans.push_back(arr[srow][index]);
            count++;
        }
        srow++;

        // printing ending col:
        for (int index = srow; index <= erow && count < total; index++) {
            ans.push_back(arr[index][ecol]);
            count++;
        }
        ecol--;

        // print ending row:
        if (srow <= erow) {
            for (int index = ecol; index >= scol && count < total; index--) {
                ans.push_back(arr[erow][index]);
                count++;
            }
            erow--;
        }

        // print starting col:
        if (scol <= ecol) {
            for (int index = erow; index >= srow && count < total; index--) {
                ans.push_back(arr[index][scol]);
                count++;
            }
            scol++;
        }
    }
    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << " ";
    }
    return ans;
}

// // spiral print:
// int spiral(int arr[][3],int row,int col){
//     int count=0;
//     int total=row*col;
//     vector<int>ans;

//     // index initialize:
//     int srow=0;
//     int scol=0;
//     int erow=row-1;
//     int ecol=col-1;
//     while(count<total){

//         // printing starting row:
//         for(int index=scol;index<ecol && count<total;index++){
//             ans.push_back(arr[index][srow]);
//             count++;
//         }
//         srow++;

//         // printing ending col:
//         for(int index=srow;index<erow && count<total;index++){
//             ans.push_back(arr[index][ecol]);;
//             count++;
//         }
//         ecol++;

//         // print ending row:
//          for(int index=ecol;index<scol && count<total;index++){
//             ans.push_back(arr[index][erow]);
//             count++;
//         }
//         erow++;

//         // print starting col:
        
//          for(int index=ecol;index<srow && count<total;index++){
//             ans.push_back(arr[index][scol]);
//             count++;
//         }
//         scol++;
//     }
//     return ans;
//     cout<<count;
// }
int main(){
int arr[3][3]={1,2,3,4,5,6,7,8,9};

   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<arr[i][j]<<" ";
    }
   cout<<endl;
    }

  // printSum(arr,3,3);
  // maxRow(arr,3,3);
//    waveorder(arr,3,3);
spiral(arr,3,3);

}