//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        stack<vector<int>> st;
        vector<vector<int>> ans;
        for(int i=0;i<inter.size();i++){
            if(i==0){
                st.push(inter[i]);
            }
            else{
                if(inter[i][0]<=st.top()[1]){
                    st.top()[1]=max(st.top()[1],inter[i][1]);
                }
                else{
                    st.push(inter[i]);
                }
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends