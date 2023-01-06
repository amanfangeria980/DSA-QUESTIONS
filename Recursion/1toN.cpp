#include<bits/stdc++.h>
using namespace std;

void OnetoN(int n){
    if(n==0){
        return;
    }
    OnetoN(n-1);
    cout<<n<<" ";
}

int main(){
    int n=10;
    OnetoN(n);
    return 0;
}