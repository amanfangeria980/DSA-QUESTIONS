#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    int search_rec(int arr[],int s,int e, int key){
        if(s>e) return -1;
        int mid=s+(e-s)/2;
        if(arr[mid]==key) return mid;
        if(arr[s]<=arr[mid]){
            if(key>=arr[s] && key<arr[mid]) return search_rec(arr,s,mid-1,key);
            else return search_rec(arr,mid+1,e,key);
        }
        else{
            if(key>arr[mid] && key<=arr[e]) return search_rec(arr,mid+1,e,key);
            else return search_rec(arr,s,mid-1,key);
        }
    }
    
    int search(int A[], int l, int h, int key){
        return search_rec(A,l,h,key);
    }
};


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}