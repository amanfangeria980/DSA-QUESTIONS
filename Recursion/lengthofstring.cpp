#include <bits/stdc++.h>
using namespace std;

int recLen(char* str)   
{
    if (*str == '\0')
        return 0;
    else
        return 1 + recLen(str + 1);
}

int main()
{
    char str[] = "Aman Fangeria";
    cout << recLen(str);
    return 0;
}