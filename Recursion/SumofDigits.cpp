#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==0){
        return 0;
    }
    return n%10+sum(n/10);
}

int main(){
    int n=555;
    cout<<sum(n)<<endl;
    return 0;
}