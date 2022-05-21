#include<bits/stdc++.h>
using namespace std;

int setBit(int n ,int pos){ //n =0101 pos = 1 
    return (n | (1<<pos));  //(1<<pos) = 0001 left shifted by 1 position = 0010
}                           // 0101 | 0010 = (0111)base 2 = (7) base 10

int main(){
    cout<<setBit(5,1)<<endl;  
    return 0;
}