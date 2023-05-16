#include<bits/stdc++.h>
using namespace std;

int maxSubArry(int arr[],int n, int k, int x){
    int st =0;
    int en =k-1;
    int ans=0;
    int sum =0;
    for(int i =0 ;i<k;i++){
        sum +=arr[i];
    }
    while(en!=n){
        if(sum>ans &&sum <x){
            ans =sum;
        }
        sum=(sum+(arr[en]-arr[st]));
        st++;
        en++;
        
    }
    return ans;
}

int main(){
    int a[]={7,5,4,6,8,9};
    cout<<maxSubArry(a,6,3,20);
    return 0;
}