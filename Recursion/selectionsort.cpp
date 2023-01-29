#include<bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int row,int col,int max){
    if(row==0)return;
    if(col<row){
        if(arr[col]>arr[max]){
            max=col;
            selectionsort(arr,row,col+1,max);
        }
        else{
            selectionsort(arr,row,col+1,max);
        }
    }
    else{
        int temp=arr[max];
        arr[max]=arr[row-1];
        arr[row-1]=temp;
        selectionsort(arr,row-1,0,0);
    } 
}

int main(){
    int n=5;
    int arr[5]={70,68,45,32,1};
    int max=0;
    selectionsort(arr,n,0,max);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}