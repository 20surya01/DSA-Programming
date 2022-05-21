#include<bits/stdc++.h>
using namespace std;

void cunjucsor(int n){
    if(n==1) return;
    if(n%2!=0){
        n=3*n +1;
    }
    else if(n%2==0){
        n /=2;
    }
    cout<<n<<" ";
    cunjucsor(n);
}

int main(){
    int a ;
    cin>>a;
    cunjucsor(a);
    return 0;
}
