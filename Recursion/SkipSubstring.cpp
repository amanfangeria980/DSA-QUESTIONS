#include<bits/stdc++.h>
using namespace std;

void skipSubs(string &str,string sub,int i=0){
    // int x=str.find(sub); pos of occurences 
    // cout<<x<<" ";
    if(str.find(sub)!=string::npos){
        str.erase(str.find(sub),sub.length());
        skipSubs(str,sub);
    }
}

int main(){
    string str="amanfamanngaman";
    skipSubs(str,"aman");
    cout<<str<<" ";
    return 0;
}