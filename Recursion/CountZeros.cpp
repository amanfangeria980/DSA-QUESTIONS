#include<bits/stdc++.h>
using namespace std;
//Special Pattern : how to just pass values to above calls.
int count(int n,int cnt){
    if(n==0){
        return cnt;
    }
    if(n%10==0){
        return count(n/10,++cnt);
    }
    else{
        return count(n/10,cnt);
    }
}

int main(){
    int n=1258500100;
    int cnt=0;
    cout<<count(n,cnt);
    // cout<<cnt;
    return 0;
}