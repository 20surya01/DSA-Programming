/*Find the smallest positive 
missing number in the given array.
Example:[0,-10,1,3,-20].Ans =2 */
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N = 1e4;
    bool check[N];
    for(int i =0;i<N ;i++){
        check[i] =false;
    }
    int j =0;
    while(j<n){
        if(a[j]>=0){
            check[a[j]] =true;
        }
        j++;
    }
    for(int i=0;i<N;i++){
        if(check[i]==false){
            cout<<i<<endl;
            return 0;
        }
    }
    
    return 0;
}