#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);    
    st.push(30);    
    st.push(40);
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl;  
    return 0;
}