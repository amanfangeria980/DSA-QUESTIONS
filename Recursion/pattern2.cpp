#include<bits/stdc++.h>
using namespace std;

void print(int row,int col){
    if(row==0)return;
    if(col<row){
        print(row,col+1);
        cout<<"* ";
    }
    else{
        print(row-1,0);
        cout<<endl;
    } 
}

int main(){
    int r=4;
    int c=0;
    print(r,c);
    return 0;
}