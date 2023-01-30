vector<int> getNextGreaterElement (vector<int> &A) {
	stack<int> st;
	int n=A.size();
	vector<int> ans(n);
	st.push(0);
	for(int i=1;i<n;i++){
		while(!st.empty() && A[i]>A[st.top()]){
			int pos=st.top();
			ans[pos]=A[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		int pos=st.top();
		ans[pos]=-1;
		st.pop();
	}
	return ans;
}
}
//checking from left to right
// pop ans (at the same time)
// then push