#include<bits/stdc++.h>
using namespace std;

//With only string as input
string RemoveAs(string s,int i){
    if(s[i]=='\0') return "";
    if(s[i]!='a'){
        return s[i]+RemoveAs(s,i+1);
    }
    else{
        return RemoveAs(s,i+1);
    }
}

//with string and result string as input arg

void skip(string s,string &ans,int i){
    if(s[i]=='\0')return ;
    if(s[i]!='a'){
        ans+=s[i];
        skip(s,ans,i+1);
    }
    else{
        skip(s,ans,i+1);
    }
}

int main(){
    string str;
    cin>>str;
    // cout<<RemoveAs(str,0);
    string ans;
    skip(str,ans,0);
    cout<<ans;
    return 0;
}