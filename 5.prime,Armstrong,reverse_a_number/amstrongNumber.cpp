#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c=0;
    const int b =n;
    while(n>0){
        int lastNumber = n%10;
        c += pow(lastNumber,3);
        n = n/10;
    }
    if(c==b) cout<<"the number is amstrong number";
    else cout<<"not a amstrong number";
}