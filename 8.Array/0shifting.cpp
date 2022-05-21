#include<bits/stdc++.h>
using namespace std;
/*
input                    output
2                       0 0 -2 4 1 
5                       0 0 -2 1 4 5 2
-2 0 4 1 0  
7
-2 1 0 4 0 5 2 
*/

int main(){
    int t ;
    cin>>t;
    for(int i =0 ; i<t ; i++){
        int n;
        cin>>n;
        int a[n];
        for(int j =0 ; j<n ; j++){
            cin>>a[j];
        }
        //algorithm
        for(int j =0 ;j<n ;j++){
            if(a[j] ==0){
                for(int k = 0 ;k<j ;k++){        // the loop run that much time where we find 0 
                    a[j - k] = a[j - k -1] ;     //a[n'] is replace by its previous element a[n' -1]

                }
                a[0] = 0;                        //first element is set to 0
            }
        }
        for(int j =0 ; j<n;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}