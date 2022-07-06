#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
    cin>>N;
    string A ,B;
    cin>>A>>B;
    int H1[N] ={0};
    for(int i=0;i<N;i++){
        if(A[i] != B[i]){
            H1[i] =1;
        }
    }
    int H2[26] = {0};
    for(int i =0;i<N;i++){
        if(H1[i]){
            H2[B[i]-97]++;
        }
    }
    int n =0 ;
    for(int i =0 ;i<26;i++){
        if(H2[i]!=0){
            n++;
        }
    }
    cout<<n<<endl;
    }
    
    return 0;
}