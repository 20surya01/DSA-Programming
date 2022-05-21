#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t ;
    for(int i =0 ; i<t ; i++){
        int N, m;
        cin>>N>>m;
        string n = to_string(N);
        if(m%2 != 0){
            for(int i=n.length()-1  ; i>=0 ; i--){
                cout<<n[i];
            }
        }
        else cout<<N<<endl;
    }
    
    return 0;
}