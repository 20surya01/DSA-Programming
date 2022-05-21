#include<bits/stdc++.h>
using namespace std;

bool isPowerof2(int n){
    return (n && !(n&(n-1)));
}

int main(){
    cout<<isPowerof2(8)<<endl;
    return 0;
}
/*
when n =6 = (0110)2                 or n =8 = (1000)2
n-1 = 5 = (0101)2                    n-1 =7 = (0111)2

we can see the right most bit "1" is fliping with bits when we substract by 1
and when we and and n and n-1 i.e (n & n-1) 

when it is as power of "2" then n & n-1 = (1000) & (0111) =(0000)
for n =16 ,n-1 = 15 i.e                 = (10000) &(01111) =(00000)
for n=32 , n-1  = 31 i.e                = (100000) & (011111) = (000000)

hence we conclude when n is a power of "2" then that number AND one decrement will always 
give zero.
*/