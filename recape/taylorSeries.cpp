#include<bits/stdc++.h>
using namespace std;

// int pow(int m , int n){
//     if(n==0) return 1;
//     return fun(m,n-1)*m;
// }
// int sum(int n){
//     if(n==0) return 0;
//     return sum(n-1)+n;
// }
// int facto(int n){
//     if(n==1) return 1;
//     return facto(n-1)*n;
// }

double e(int x,int n){
    static double p =1,f =1;
    double r ;
    if(n==0) return 1;
    else{
        r = e(x,n-1);
        p = p*x;
        f=f*n;
        return r+p/f;
    }

}
double  E(double x,double n){
    double r =1;
    while(n>0){
        r=(x/n)*r +1;
        n--;
    }
    return r;
}
double eE(double x,double n){
    static double s =1;
    if(n==0) return s;
    s = 1+(x/n)*s;
    return eE(x,n-1);
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    cout<<e(a,b)<<" "<<E(a,b)<<" "<<eE(a,b);
    return 0;

}