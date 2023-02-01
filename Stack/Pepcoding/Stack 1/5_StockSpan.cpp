//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

//using next greater element from left
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
        stack<int> st;
        st.push(0);
        vector<int> ans(n);
        ans[0]=1;
        for(int i=1;i<n;i++){
            while(!st.empty() && arr[i]>=arr[st.top()]){
                st.pop();
            }
            if(st.empty()) ans[i]=i+1;  //khud ka index+1
            else ans[i]=i-st.top(); //khud ka index - top wale ka index 
            st.push(i);
        }
        return ans;
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
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends