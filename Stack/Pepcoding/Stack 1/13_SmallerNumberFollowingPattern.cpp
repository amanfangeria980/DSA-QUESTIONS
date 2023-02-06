#include<iostream>
#include <string>
#include <stack>
#include<vector>
using namespace std;



int main() {
  string str;
  getline(cin,str);
  stack<int> st;
  int n=1;
  
  for(int i=0;i<str.size();i++){
      if(str[i]=='d'){
          st.push(n);
          n++;
       }
      else{
          st.push(n);
          n++;
          while(!st.empty()){
              cout<<st.top();
              st.pop();
          }
       }
  }
  st.push(n);
    while(!st.empty()){
      cout<<st.top();
      st.pop();
    }
}