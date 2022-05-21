#include<bits/stdc++.h>
using namespace std;

int updateBit(int n ,int pos ,int value){     //n =0101
    int mask = ~(1<<pos);                     //~(0010) = 1101
    n = n & mask;                             //0101 & 1101 = 0101
    return (n | (value << pos));              // 0101 | 0010 = 0111 = (7) base 10
}

int main(){
    cout<<updateBit(5,1,1);
    return 0;
}