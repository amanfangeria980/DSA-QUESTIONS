#include<bits/stdc++.h>
using namespace std;

void remove_duplicates(char *s){
    if(s[0]=='\0') return;
    if(s[0]==s[1]){
        int i=0;
        while(s[i]!='\0'){
            s[i]=s[i+1];
            i++;
        }
        remove_duplicates(s);
    }
    remove_duplicates(s);
}

int main(){
    char s[]="GeeksForGeeks";
    remove_duplicates(s);
    cout<<s<<endl;
    return 0;
}