#include<bits/stdc++.h>
using namespace std;

bool checkPali(char p[] ,int n,int i){
    
    if(p[i] ==p[n-1-i]){
        if(i==n-1-i){
            return true;
        }
        checkPali(p,n,i+1);
    }
    else return false;
}

int main(){
    int n;
    char a[n];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i =0;
    // while(a[i]==a[n-1-i]){  //for(init ;cond ;temina)  while(cond)
    //     if(i==n-1-i){
    //         cout<<"pali";
    //         return 0;
    //     }
    //     i++;
    // }
    // // cout<<i;
    // cout<<"not a pali";

    // for (int i = 0; i < n; i++)
    // {
    //     cout<<a[i];
    // }
    if(checkPali(a,n,i)){
        cout<<"is a pali";
    }
    else{
        cout<<"not a pali";
    }
    
    return 0;
}