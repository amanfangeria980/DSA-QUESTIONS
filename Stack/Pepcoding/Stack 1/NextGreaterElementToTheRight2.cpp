#include<bits/stdc++.h>
using namespace std;

vector<int> getNextGreaterElement (vector<int> &A) {
	stack<int> st;
	int n=A.size();
	vector<int> ans(n);
	st.push(0);
	for(int i=1;i<n;i++){
		while(!st.empty() && A[st.top()]<A[i]){  //i is aage wala element 0 1 , i is at 1
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

int main(){
	vector<int> v={1,2,3,4,2,9,8,5,6};
	vector<int> ans=getNextGreaterElement(v);
	for(auto it : ans){
		cout<<it<<" ";
	}
	return 0;
}
//checking from left to right
// pop ans (at the same time)
// then push

//playing with inde

//Different variants can be made from this ques like,
// 1.NextSmallerElementToTheRight
// 2.NextGreaterElementToTheLeft
// 3.NextSmallerElementToTheLeft


//Best Solution :

//right
/* 
vector<int> getNextGreaterElement (vector<int> &arr) {
	stack<int> st;
	int n=arr.size();
	vector<int> ans(n);
	st.push(n-1);
    ans[n-1]=-1;   
	for(int i=n-2;i>=0;i--){
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
 */