#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> findSubset(int arr[],int n){
    vector<vector<int>> outer;
    vector<int> empty;
    outer.insert(outer.end(),empty.begin(),empty.end());
    for(int i=0;i<n;i++){
        int outer_size=outer.size();
        for(int j=0;j<outer_size;j++){
            vector<int> internal=outer[i];
            internal.push_back(arr[i]);
            outer.insert(outer.end(),internal.begin(),internal.end());
        } 
    }
}

int main(){
    int arr[3]={1,2,3};
    vector<vector<int>> v=findSubset(arr,3);
    for(vector<int> it: v){
        for(auto num: it){
            cout<<num<<" ";
        }
        cout<<endl;
    }

    return 0;
}