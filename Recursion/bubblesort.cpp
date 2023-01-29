#include<bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int pass,int index){
    if(pass==0)return;
    if(index<pass){
        if(arr[index]>arr[index+1]) swap(arr[index],arr[index+1]);
        bubblesort(arr,pass,index+1);
    }
    else{
        bubblesort(arr,pass-1,0);
    } 
}

int main(){
    int n=5;
    int arr[5]={70,68,45,32,1};
    int index=0;
    bubblesort(arr,n-1,index);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}