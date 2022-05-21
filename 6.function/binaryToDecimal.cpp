#include<iostream>
#include<math.h>
using namespace std;

//code is not correct


int deci(int n){
    int sum = 0;
    int x ;
    int y =1;
    while(n>0){
        x= n%10;
        sum = sum + x*y;
        y = 2*y;
        n=n%10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int m = deci(n);
    cout<<m;
    return 0;
}