#include<bits/stdc++.h>
using namespace std;

//p-> processed string and u->unprocesses string
vector<string> substring(string u,string p){
    if(u.empty()){
        vector<string> v;
        v.push_back(p);
        return v;
    }
    vector<string> left=substring(u.substr(1),p);
    vector<string> right=substring(u.substr(1),p+u[0]);
    vector<string> ascii=substring(u.substr(1),p+to_string(u[0]+0));
    left.insert(left.end(),right.begin(),right.end());
    left.insert(left.end(),ascii.begin(),ascii.end());
    return left;
}

int main(){
    string str="abc";
    // cin>>str;
    vector<string> ans=substring(str,"");
    for(auto it : ans){
        cout<<"\""<<it<<"\""<<endl;
    }
    return 0;
}