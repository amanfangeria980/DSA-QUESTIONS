#include<bits/stdc++.h>
using namespace std;

int prec(char c){
    if(c=='+') return 1;
    if(c=='-') return 1;
    if(c=='/') return 2;
    if(c=='*') return 2;
}

int operation(int v1,int v2, char c){
    if(c=='+') return v1+v2;
    if(c=='-') return v1-v2;
    if(c=='/') return v1/v2;
    if(c=='*') return v1*v2;
}

int eval(string s){
    stack<int> operands;
    stack<int> operators;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            operators.push(s[i]);
        }
        else if(isdigit(s[i])){
            //char to int 
            operands.push(s[i]-'0');
        }
        else if(s[i]==')'){
            while(operators.top()!='('){
                char optor=operators.top();
                operators.pop();
                int v2=operands.top();
                operands.pop();
                int v1=operands.top();
                operands.pop();
                char res=operation(v1,v2,optor);
                operands.push(res);
            }
            operators.pop();
        }
        else if(s[i]=='+' || s[i]=='-' || s[i]=='/' || s[i]=='*'){
            while(!operators.empty() && operators.top()!='(' && prec(s[i]<=prec(operators.top()))){
                while(operators.top()!='('){
                    char optor=operators.top();
                    operators.pop();
                    int v2=operands.top();
                    operands.pop();
                    int v1=operands.top();
                    operands.pop();
                    char res=operation(v1,v2,optor);
                    operands.push(res);
                }
            operators.push(s[i]);
            }
        }
    }
}

int main(){
    
    return 0;
}