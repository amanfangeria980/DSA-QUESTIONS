//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    long long*lb(long long arr[],int n){
    long long *ans = new long long[n];
    stack<int> st;
    st.push(0);
    ans[0]=-1;
    for(int i=1;i<n;i++){
        while(!st.empty() && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.empty()) ans[i]=-1;
        else ans[i]=st.top();
        st.push(i);
    }
    return ans;
}

    long long *rb(long long arr[],int n){
    long long *ans = new long long[n];
    stack<int> st;
    st.push(n-1);
    ans[n-1]=n;
    for(int i=n-2;i>=0;i--){
        while(!st.empty() && arr[i]<=arr[st.top()]){
            st.pop();
        }
        if(st.empty()) ans[i]=n;
        else ans[i]=st.top();
        st.push(i);
    }
    return ans;
}


    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        long long maxArea=0;
        long long* l=lb(arr,n);
        long long* r=rb(arr,n);
        for(int i=0;i<n;i++){
            long long width=r[i]-l[i]-1;
            long long area=width*arr[i];
            if(area>maxArea)maxArea=area;
        }
        return maxArea;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends