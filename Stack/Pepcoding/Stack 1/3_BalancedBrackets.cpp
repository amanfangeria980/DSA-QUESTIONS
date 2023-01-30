#include<bits/stdc++.h>
using namespace std;

    bool ispar(string s)
    {
    stack<char> st;
    for(char ch : s){
        if(ch=='(' || ch=='[' || ch=='{'){
            st.push(ch);
        }
        else if(ch==')'){
            if(st.empty()) return false;
            if( st.top()=='(') st.pop();
            else return false;
        }
        else if(ch=='}'){
            if(st.empty()) return false;
            if( st.top()=='{') st.pop();
            else return false;
        }
        else if(ch==']'){
            if(st.empty()) return false;
            if( st.top()=='[') st.pop();
            else return false;
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;
    }

int main(){
    string str;
    getline(cin,str);
    if(ispar(str)){
        cout<<"balanced"<<endl;
    }
    else{
        cout<<"not balanced"<<endl;
    }
    return 0;
}