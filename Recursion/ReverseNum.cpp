#include<bits/stdc++.h>
using namespace std;

int sum=0;
void reverse(int n){
    if(n==0){
        return ;
    }
    sum=(sum*10)+(n%10);
    reverse(n/10);
}

int main(){
    int n=511;
    reverse(n);
    cout<<sum<<endl;
    return 0;
}