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
//checking from right to left
// pop ans push