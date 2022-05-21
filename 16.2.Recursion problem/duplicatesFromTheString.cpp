#include<bits/stdc++.h>
using namespace std;

void duplicate(string a, int i){
    if(i ==a.length()) return;
    if(a[i] !=a[i+1]) cout<<a[i];
    duplicate(a,i+1);
}

int main(){
    string a ="aaaabbbeeecdddd";
    duplicate(a ,0);
    return 0;
}