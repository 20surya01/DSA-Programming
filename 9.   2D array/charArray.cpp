#include<bits/stdc++.h>
using namespace std;

int main(){
    //check palindrome
    int n ;
    cin>>n ;
    char a[n+1];
    cin>>a;
    bool palin  =true;
    int i =0;
    while(i<n){
        if(a[i]!=a[n-1-i])
            palin = false;
            break;
        i++;
    }
    if(palin){
        cout<<"palindrome word"<<endl;
    }
    else cout<<"not a palindrome word"<<endl;
    return 0;
}