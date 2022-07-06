#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0) return 1;
    return n*fact(n-1);
}
float sin(float x ,int i ,int sign){
    if(i==1) return x;
    return sign*(pow(x,i)/fact(i)) + sin(x,i-2,-1*sign);
}

int main(){
    double x,n;
    cin>>x>>n;
    x *= (3.14/180);
    cout<<sin(x,2*n-1,1);
    // cout<<fact(3);
    return 0;
}