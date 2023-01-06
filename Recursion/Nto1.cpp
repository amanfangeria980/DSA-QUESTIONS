#include<bits/stdc++.h>
using namespace std;

void Nto1(int n){
    if(n==0){
        return;
    }
    cout<<n<<" ";
    Nto1(n-1);
}

int main(){
    int n=10;
    Nto1(n);
    return 0;
}