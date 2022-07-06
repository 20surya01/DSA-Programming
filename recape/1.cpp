#include<bits/stdc++.h>
using namespace std;

int main(){
    int A[] ={1,2,3,4,5,6,7,8,9,10,11,12,13};
    // for(int i =0 ; i<13;i++)
    //     cin>>A[i];
    // int max= 0;
    // int min =INT_MAX;
    // for(int i =0; i<13;i++){
    //     if(max<A[i]) max=A[i];
    //     if(min>A[i]) min=A[i];
    // }
    // int H[max] ={0};
    // for(int i =0;i<13;i++){
    //     H[A[i]]++;
    // }
    // for(int i =0;i<max;i++){
    //     if(H[i]>=2) cout<<i<<" ";
    // }
    int i=0;
    int j =12;
    while(i<=j){
        if(A[i]+A[j]==10){
            cout<<A[i]<<"+"<<A[j]<<"=10 ";
            i++;
            j--;
        } 
        if(A[i]+A[j]>10){
            j--;
        }
        if(A[i]+A[j]<10){
            i++;
        }
    }
    return 0;
}