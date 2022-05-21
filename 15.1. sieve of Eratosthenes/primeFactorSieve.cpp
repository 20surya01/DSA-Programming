#include<bits/stdc++.h>
using namespace std;

void primeFactor(int n){               //for input n =12
    int spf[n+1] = {};
    for(int i =2 ; i<=n ; i++){
        spf[i] = i;
    }
    for(int i =2 ; i<=n ; i++){      //let spf = 2,3,4,5,6,7,8,9,10,11,12,13,14,15,...
        if(spf[i]==i){               // i      = 2,3,4,5,6,7,8,9,10,11,12,13,14,15,...
            for(int j =i*i ;j<=n ;j+=i){
                if(spf[j]==j){
                    spf[j]=i;         // spf   = 2,3,2,5,2,7,2,3,2,11,2,13,2,3,....
                }
            }
        }
    }

    
    while(n!=1){
        cout<<spf[n]<<" ";           //spf[12] = "2" ; n = 12/2 = 6; spf[6] = "2"; n = 6/2 = 3 ;spf[3] = "3"
        n=n/spf[n];                  //hence it returns 2 2 3
    }
}  

int main(){
    int n;
    cin>>n;
    primeFactor(n);
    return 0;
}