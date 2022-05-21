#include<bits/stdc++.h>
using namespace std;

void swap(int *a,int *b){    //refrencing the address        
    int temp =*a; //dereferancing the value
    *a =*b ;
    *b = temp;
}

int main(){
    int a =2;
    int b =4;
    swap(&a ,&b); //passing the address of variable    ---calling by refrence
    cout<<a<<" "<<b<<endl;
    return 0;
}