#include<bits/stdc++.h>
using namespace std;

bool db(string &s){
    stack<char> st;
    for(char ch : s){
        if(ch==')'){
            if(st.top()=='('){
                return true;
            }
            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
        else{
            st.push(ch);
        }
    }
    return false;

}

int main(){
    string str;
    getline(cin,str);
    if(db(str)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}