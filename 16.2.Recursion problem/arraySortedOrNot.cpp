#include<bits/stdc++.h>
using namespace std;

bool sorted(int a[],int n){
    if(n==1) return true;
    bool restArray = sorted(a+1,n-1);      //a+1 gives the next index of a
    return (a[0]<a[1] && restArray);
}

int main(){
    int a[] ={1,2,4,1,4,2};
    cout<<sorted(a,6);
    return 0;
}