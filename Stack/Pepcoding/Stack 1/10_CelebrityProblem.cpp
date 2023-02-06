//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> st;
        for(int i=0;i<M.size();i++) st.push(i);
        while(st.size()>=2){
            int i=st.top();
            st.pop();
            int j=st.top();
            st.pop();
            if(M[i][j]==1)st.push(j); //if i knows j then i is not a celebrity
            else if(M[j][i]==1)st.push(i); //j is not a celebrity
        }
        int potential_celeb=st.top();
        st.pop();
        for(int i=0;i<M.size();i++){
            if(i!=potential_celeb){
                if(M[i][potential_celeb]==0 || M[potential_celeb][i]==1){
                    return -1;
                }
            }
        }
        if(M[potential_celeb][potential_celeb]==1)return -1;
        return potential_celeb;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<vector<int> > M( n , vector<int> (n, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>M[i][j];
            }
        }
        Solution ob;
        cout<<ob.celebrity(M,n)<<endl;

    }
}

// } Driver Code Ends