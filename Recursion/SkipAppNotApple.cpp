#include<bits/stdc++.h>
using namespace std;
//skip am if not aman
void skipSubsNotAman(string &str,int i=0){      
    if(str.find("aman")==string::npos && str.find("am")!=string::npos){
        str.erase(str.find("am"),2);
        skipSubsNotAman(str);
    }
}

int main(){
    string str="amfangam";
    skipSubsNotAman(str);
    cout<<str<<" ";
    return 0;
}