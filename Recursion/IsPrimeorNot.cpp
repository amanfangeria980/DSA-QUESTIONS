#include<bits/stdc++.h>
using namespace std;

    void Check(int N,int &cnt,int start){
        if(start>N/2) return;
        if(N%start==0){
            cnt++;
            return;
        }
        Check(N,cnt,start+1);
    }
    int isPrime(int N){
        int cnt=0;
        Check(N,cnt,2);
        if(cnt==0) return true;
        else return false;
    }
int main(){
    int n=15;
    cout<<isPrime(15);
    return 0;
}