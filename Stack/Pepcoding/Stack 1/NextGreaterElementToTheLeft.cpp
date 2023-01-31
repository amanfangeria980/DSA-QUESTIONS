#include<bits/stdc++.h>
using namespace std;
vector<int> getNextGreaterElement (vector<int> &arr) {
	stack<int> st;
	int n=arr.size();
	vector<int> ans(n);
	st.push(0);
    ans[0]=-1;   
	for(int i=1;i<n;i++){
		while(!st.empty() && arr[st.top()]<arr[i]){
			st.pop();
		}
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=arr[st.top()];
        }
		st.push(i);
	}
	return ans;
}

int main(){
	vector<int> v={1,2,3,4,2,9,8,5,6};
	vector<int> ans=getNextGreaterElement(v);
	for(auto it : ans){
		cout<<it<<" ";
	}
	return 0;
}
