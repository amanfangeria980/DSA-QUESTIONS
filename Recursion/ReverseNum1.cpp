#include<bits/stdc++.h>
using namespace std;

int reverseN(int n,int index){
    if(n%10==n){
        return n;
    }
    return (n%10)*(pow(10,index-1))+reverseN(n/10,index-1);
}

int main(){
    int n=511;
    int digits=log10(n)+1;
    int res=reverseN(n,digits);
    cout<<res<<endl;
    return 0;
}