/*
A   B   A^B
0   0   0             so xor of a number with its own number will give "0"
0   1   1              and if we xor a number with 0 then it will only give that number
1   0   1
1   1   0
*/

#include<bits/stdc++.h>
using namespace std;

int unique(int arr[] ,int n){
    int xorsum = 0;
    for(int i =0 ; i<n ; i++){
        xorsum = xorsum ^ arr[i];
    }
    return xorsum ;
}

int main(){
    int a[] = {1,2,3,4,1,2,3};
    cout<<unique(a,7)<<endl;
    return 0;
}