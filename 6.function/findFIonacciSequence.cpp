#include<iostream>
using namespace std;

void fib(int n ){
    int l1 = 0;
    int l2 = 1;
    int nextTerm ;
    for(int i=1;i<=n;i++){
        cout<<l1<<endl;
        nextTerm = l1 + l2;
        l1 =l2;
        l2 = nextTerm;
    }
    return ;
}

int main(){
    int n ;
    cin>>n;
    fib(n);
    return 0;
}