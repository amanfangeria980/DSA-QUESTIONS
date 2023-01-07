#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    bool check_(int arr[],int n,int index){
        if(index==n-1) return true;
        return (arr[index]<=arr[index+1]) && check_(arr,n,++index);
    }
  
    bool arraySortedOrNot(int arr[], int n) {
        return check_(arr,n,0);
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        bool ans = ob.arraySortedOrNot(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
