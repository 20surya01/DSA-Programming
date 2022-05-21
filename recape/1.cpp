#include<bits/stdc++.h>
using namespace std; 

int fun(int n){
    static int y =0;
    if(n>0){
        y++;
        return fun(n-1)+y;
    }
    return 0;
}
int main(){
    int x= 5;
    int r ;
    r =fun(x);
    cout<<r ;
    return 0;
    
}