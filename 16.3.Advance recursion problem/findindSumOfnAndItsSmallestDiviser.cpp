/*
get 2 input n and k such that add the smallest diviser to that number till the k times
e.g n = 5
    k = 3
    at k=1 ; n = n+smallest diviser 
             n = 5+5
    at k =2 ;n = 10 +2 
    at k =3 ;n = 12 +2 = 14  
    hence ans is 14
*/

#include<bits/stdc++.h>
using namespace std;

int sum(int n ,int i,int j,int k){
    if(j==k){
        return n;
    }
    if(n%i ==0){
        n +=i;
        
        return sum(n,2,j+1,k)  ;
    }
    
    return sum(n,i+1,0,k);;
}

int main(){
    int t;
    cin>>t;

    for(int i =0 ; i<t ; i++){
        int n,k;
        cin>>n>>k;
        cout<<sum(n,2,0,k)<<endl;
    }
    return 0;
}