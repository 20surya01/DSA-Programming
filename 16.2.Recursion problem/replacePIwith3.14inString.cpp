#include<bits/stdc++.h>
using namespace std;

void pi(string a ,int i){
    if(i==a.length()) return;
    if(a[i]=='p' && a[i+1] =='i') {
        cout<<"3.14";
        i++;
    }
    else cout<<a[i];
    pi(a,i+1);
}

int main(){
    string a = "pippppiiiipi";
    pi(a,0);
    return 0;
}