#include<bits/stdc++.h>
using namespace std;

int main(){
    // int a =10;int *ptr =&a;
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;
    // cout<<&a<<endl;
    // *ptr =20;
    // ptr +=20;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    int arr[] ={10,20,30};
    cout<<*arr<<endl;

    int *ptr =arr;
    for(int i =0;i<3;i++){
        cout<<*ptr<<endl; 
        ptr++;
    }
    for(int i =0 ; i<3 ; i++){
        cout<<*(arr+i)<<endl;
    }
    
    return 0;
}