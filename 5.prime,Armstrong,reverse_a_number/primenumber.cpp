#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int c =0;
    for(int i =2;i<=n-1;i++){
        if(n%i==0){
            cout<<"the number is prime";
            c=1;
            break;
        }
    }
    if(c==0) cout<<"the number is composite";
    return 0;
}