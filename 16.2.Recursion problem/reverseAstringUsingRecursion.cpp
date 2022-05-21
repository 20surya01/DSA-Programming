#include<bits/stdc++.h>
using namespace std;

void reverse(string a){
    if(a.length() ==0) return ;
    reverse(a.substr(1));
    cout<<a[0];
}

int main(){
    string a;
    cin>>a;
    reverse(a);
    return 0;
}