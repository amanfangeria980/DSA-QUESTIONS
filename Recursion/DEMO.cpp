#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        vector<long long> v;
        int arr[m];
        for(long long i=0;i<n;i++){
            long long d;
            cin>>d;
            v.push_back(d);
        }
        for(long long i=0;i<m;i++){
            long long d;
            cin>>d;
            arr[i]=d;
            v.push_back(d);
        }
        if(n==1 && m==1){
            cout<<v[1]<<endl;
            continue;
        }

        sort(v.begin(),v.end(),greater<long long>());
        long long sum=0;
        if(n==m){
            for(int i=0;i<m;i++){
                sum=sum+arr[i];
            }
            cout<<sum<<endl;
            continue;
        }
        for(long long i=0;i<n;i++){
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}