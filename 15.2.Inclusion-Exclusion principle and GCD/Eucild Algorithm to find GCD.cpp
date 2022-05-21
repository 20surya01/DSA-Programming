/*
24 HCF = 2 x 2 x 2 x 3
42 HCF = 2 x 3 x 7 
GCD (greatest common divisor) = 2 x 3 =6
42 - 24 =18              42%24 = 18
24 - 18 =6               24%18 = 6
18 - 6  =12              18%6  = 0
12 - 6  =6
6 - 6   =0    hence last number 6 is GCD
*/ 

#include<bits/stdc++.h>
using namespace std;

int gcd(int a ,int b){
    int rem;
    while(b!= 0){
        rem = a%b;
        a =b;
        b=rem;
        
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}