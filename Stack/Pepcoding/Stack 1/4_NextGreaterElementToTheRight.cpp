#include<bits/stdc++.h>
using namespace std;

vector<int> getNextGreaterElement (vector<int> &A) {
	int n=A.size();
	vector<int> ans(n);
	stack<int> st;
	st.push(A[n-1]);
	ans[n-1]=-1;
	for(int i=n-2;i>=0;i--){
		while(!st.empty() && A[i]>=st.top()){
			st.pop();
		}
		if(st.empty()){
			ans[i]=-1;
		}
		else{
			ans[i]=st.top();
		}
		st.push(A[i]);
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
//checking from right to left
// pop ans push