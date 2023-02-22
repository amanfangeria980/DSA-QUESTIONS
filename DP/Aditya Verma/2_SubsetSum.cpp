    //Recursion with memoization //workat.tech

//     int calc(vector<vector<int>> &dp,vector<int> arr,int n, int w){
// 	if(w==0)return 1;
// 	if(n==0)return 0;
// 	if(dp[n][w]!=-1)return dp[n][w];
// 	if(arr[n-1]<=w)return (dp[n][w]=calc(dp,arr,n-1,w-arr[n-1]) || calc(dp,arr,n-1,w)) ;
// 	else return dp[n][w]=calc(dp,arr,n-1,w);
// }

// int subsetSum(vector<int> &v, int target) {
// 	int n=v.size();
// 	int w=target;
// 	vector<vector<int>> dp(n+1,vector<int>(w+1,-1));
// 	return calc(dp,v,n,w);
// }

    //Top-Down matrix approach
    
    //{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        int w=sum;
        int t[n+1][w+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<w+1;j++){
                if(i==0)t[i][j]=false;
                if(j==0)t[i][j]=true;
            }
        }
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<w+1;j++){
                if(arr[i-1]<=j){
                    t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
                }
                else t[i][j]=t[i-1][j];
            }
        }
        return t[n][w];
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends