#include<bits/stdc++.h>
using namespace std;

bool ans=true;
bool pal(int arr[],int s, int e){
    if(s>e){
        return ans;
    }
    if(arr[s]!=arr[e]){
        ans=false;
        return ans;
    }
    return pal(arr,s+1,e-1);
}

int main(){
    int arr[]={0,1};
    int s=0;
    int e=2-1;
    if(pal(arr,s,e)) cout<<"TRUE";
    else cout<<"FALSE";
    return 0;
}