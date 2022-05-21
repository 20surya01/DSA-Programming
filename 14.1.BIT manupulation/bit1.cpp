#include<bits/stdc++.h>
using namespace std;

/*BITWISE OPERATOR
 &      bitwise AND
 |      bitwise OR
 ^      bitwise XOR
 ~      bitwise NOT (1's complement)
 <<     bitwise left shift
 >>     bitwise right shift*/

int getBit(int n,int pos){
    return ((n & (1<<pos)) !=0);  //n is converted into binary and opertion proceeded
}

int main(){
    cout<<getBit(5,2)<<endl;
    return 0;
}  