// Partitions with Given Difference GFG
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countPartitions(int n, int d, vector<int>& arr) {
        int sum=0;
        int mod=1e9+7;
        for(auto it: arr){
            sum+=it;
        }
        //If sum is odd or sum is negative return 0
        if((d+sum)%2!=0 || sum-d<0)return 0;
        int w=(sum+d)/2;
        vector<vector<int>>t(n+1,vector<int>(w+1));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==0)t[i][j]=0;
                if(j==0)t[i][j]=1;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=(t[i-1][j-arr[i-1]]+t[i-1][j])%mod;
                }
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
        
        return t[n][w];
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends