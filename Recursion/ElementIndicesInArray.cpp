#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    vector<int> check_(int arr[],int n,int target,int index){
        vector<int> v;
        if(index==n) return v;
        if(arr[index]==target) v.push_back(index);
        vector<int> AnsFromBelowCalls=check_(arr,n,target,++index);
        v.insert(v.end(),AnsFromBelowCalls.begin(),AnsFromBelowCalls.end());
        return v;
    }
};


int main() {
    int t=1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.check_(arr, n,5,0);
        for(auto it: ans){
          cout<<it<<" ";  
        } 
    }
    return 0;
}
