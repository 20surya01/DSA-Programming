/*   {a,b,c}
000   {}              total 2^n -1 subset or n(n+1)/2 +1 subset
001   {c}                   2^n = 1<<n ; (1 left shift by n)
010   {b}
011   {b,c}
100   {a}
101   {a,c}
110   {a,b}
111   {a,b,c}
*/

#include<bits/stdc++.h>
using namespace std;

void subSet(int arr[],int n){
    for(int i =0 ; i<(1<<n) ; i++){        // i < 2^n 
        for(int j =0 ; j<n ; j++){
            if( i & (1<<j)){               //let i =2 i.e 010 & (1<<2) = 010 
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
        
    }
}

int main(){
    int a[4]= {1,2,3,4};
    subSet(a,4);
    return 0;
}