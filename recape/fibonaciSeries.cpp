#include<bits/stdc++.h>
using namespace std;

int f[3];
int fibo(int n){
    if(n<=1){
        f[n] =n;
        return n;
    }
    else{
        if(f[n]==-1){
            f[n-2]=fibo(n-2);
        }
        if(f[n-1]==-1){
            f[n-1]=fibo(n-1);
        }
        return f[n-2] +f[n-1];
    }
}

int main(){
    f[3]={-1};
    cout<<fibo(3);
    return 0;
}