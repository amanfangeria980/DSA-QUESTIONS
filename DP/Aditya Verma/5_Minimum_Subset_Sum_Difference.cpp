//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
    void subset_sum(vector<vector<bool>> &t,int arr[],int n,int w){
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
                else{
                    t[i][j]=t[i-1][j];
                }
            }
        }
    }
	int minDifference(int arr[], int n){
	    int range=0;
	    for(int i=0;i<n;i++){
	        range+=arr[i];
	    }
	    vector<vector<bool>> t(n+1,vector<bool>(range+1));
	    subset_sum(t,arr,n,range);
	    vector<int> v;
	    for(int i=0;i<=range/2;i++){
	        if(t[n][i])v.push_back(i);
	    }
	    int mn=INT_MAX;
	    for(auto it : v){
	        mn=min(mn,range-(2*it));
	    }
	    return mn;
        
	    
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends