#include<bits/stdc++.h>
using namespace std;

//p-> processed string and u->unprocesses string
void substring(string u,string p){
    if(u.empty()){
        cout<<"\""<<p<<"\""<<"\n" ;
        return ;
    }
    substring(u.substr(1),p);
    substring(u.substr(1),p+u[0]);
}

int main(){
    string str;
    cin>>str;
    substring(str,"");
    return 0;
}