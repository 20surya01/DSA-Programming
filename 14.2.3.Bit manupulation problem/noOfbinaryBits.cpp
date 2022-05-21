/*
let n =19 = (10011)       then proceed forward till n =0;  n =18 =(10010)          then   n=16  = (10000)
n-1 =18   = (10010)                                      n-1 =17 =(10001)              n -1 = 15= (01111)
n = n & n-1                                         n= n & n-1 = 10010 & 10001     n = n&n-1 = 10000 &01111
  = 10011 & 10010                                              = 10000 = 16                  = 0
  = 10010 = 18
*/

#include<bits/stdc++.h>
using namespace std;

int numberOfBinaryBit(int n){
    int sum = 0;
    while(n>0){
        n = n & (n-1);
        sum ++ ;
    }
    return sum ;
}

int main(){
    cout<<numberOfBinaryBit(19)<<endl;
    return 0;
}