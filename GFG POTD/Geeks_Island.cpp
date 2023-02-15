//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
void find(vector<vector<int>>&mat,int i, int j, vector<vector<int>>&vis, int n, int m)
    {
        if(i<0 or j<0 or i>n or j>m or vis[i][j])return;
        
        vis[i][j]=1;
        if(i>0 and mat[i-1][j]>=mat[i][j])
        {
            find(mat,i-1,j,vis,n,m);
        }
        if(i<n-1 and mat[i+1][j]>=mat[i][j])
        {
            find(mat,i+1,j,vis,n,m);
        }
        if(j>0 and mat[i][j-1]>=mat[i][j])
        {
            find(mat,i,j-1,vis,n,m);
        }
        if(j<m-1 and mat[i][j+1]>=mat[i][j])
        {
            find(mat,i,j+1,vis,n,m);
        }
    }
    int water_flow(vector<vector<int>> &mat,int N,int M){
        vector<vector<int>>ind(N,vector<int>(M,0));
        vector<vector<int>>arab(N,vector<int>(M,0));
        
        for(int i=0;i<N; i++)
        {
            if(!ind[i][0])
            {
                find(mat,i,0,ind,N,M);
            }
        }
        
        for(int j=0; j<M; j++)
        {
            if(!ind[0][j])
            {
                find(mat,0,j,ind,N,M);
            }
        }
        
        for(int i=0;i<N; i++)
        {
            if(!arab[i][M-1])
            {
                find(mat,i,M-1,arab,N,M);
            }
        }
        
        for(int j=0;j<M; j++)
        {
            if(!arab[N-1][j])
            {
                find(mat,N-1,j,arab,N,M);
            }
        }
        
        int count=0;
        
        for(int i=0;i<N; i++)
        {
            for(int j=0; j<M; j++)
            {
                if(ind[i][j]==1 and arab[i][j]==1)
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>mat[i][j];
            }
        }
        Solution ob;
        cout << ob.water_flow(mat, n, m) << endl;
        
    }
}


// } Driver Code Ends