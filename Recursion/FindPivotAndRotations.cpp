#include <bits/stdc++.h>
using namespace std;


int findPivot(int arr[],int s, int e){
    if(s>e) return -1;
    int mid=(s+e)/2;
    if(arr[mid]>arr[mid+1] && mid<e) return mid;
    if(arr[mid-1]>arr[mid] && mid>s) return mid-1;
    if(arr[mid]<arr[s]) return findPivot(arr,s,mid-1);
    else return findPivot(arr,mid+1,e);
}
int findKRotation(int arr[], int n) {
    int pivot= findPivot(arr,0,n-1);
    if(pivot==-1) return 0;
    return pivot+1;
}
int main() {

        int n=5;
        int arr[5]={5,1,2,3,4};
        int ans=findKRotation(arr, n);
        cout << ans << "\n";
        return 0;
    }
