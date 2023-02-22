//Dp: Top-down matrix approach

// //{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;

// // } Driver Code Ends
// #include <bits/stdc++.h>
// using namespace std;
// //Position this line where user code will be pasted.

// class Solution{
// 	public:
// 	long long dp[201][201];
// 	int minimumCost(int cost[], int N, int W) 
// 	{ 
// 	    for(int i=0;i<N+1;i++){
// 	        for(int j=0;j<W+1;j++){
// 	            if(i==0)dp[i][j]=INT_MAX;
// 	            if(j==0)dp[i][j]=0;
	     
// 	        }
// 	    }
// 	    for(int i=1;i<N+1;i++){
// 	        for(int j=1;j<W+1;j++){
// 	            if(i<=j && cost[i-1]!=-1){
// 	                dp[i][j]=min(cost[i-1]+dp[i][j-i],dp[i-1][j]);
// 	            }
// 	            else{
// 	                dp[i][j]=dp[i-1][j];
// 	            }
// 	        }
// 	    }
// 	    long long ans=dp[N][W];
// 	    if(ans>=INT_MAX)return -1;
// 	    else return ans;
// 	} 
// };


// //{ Driver Code Starts.
// int main() 
// {
   	
   
//    	int t;
//     cin >> t;
//     while (t--)
//     {
//         int n, w;
//         cin >> n >> w;

//         int a[n];

//         for(int i = 0; i < n; i++)
//         	cin >> a[i];

       

// 	    Solution ob;
// 	    cout << ob.minimumCost(a, n, w) << "\n";
	     
//     }
//     return 0;
// }
// // } Driver Code Ends


//Dp: recursion + memoization

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
#include <bits/stdc++.h>
using namespace std;
//Position this line where user code will be pasted.

class Solution{
	public:
	long long dp[201][201];
	long long calc(int arr[],long long n, long long w){
	    if(n==0 || w<0)return INT_MAX;
	    if(w == 0) return 0;
	    if(dp[n][w]!=-1)return dp[n][w];
	    if(n<=w && arr[n-1]!=-1)return dp[n][w]=min(arr[n-1]+calc(arr,n,w-n),calc(arr,n-1,w));
	    return dp[n][w]=calc(arr,n-1,w);
	}
	int minimumCost(int cost[], int N, int W) 
	{ 
	    memset(dp,-1,sizeof(dp));
	    long long ans=calc(cost,N,W);
	    if(ans>=INT_MAX)return -1;
	    else return ans;
	} 
};


//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends