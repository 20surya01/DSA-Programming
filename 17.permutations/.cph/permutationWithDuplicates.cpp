#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;cin>>n;
    vector<int> a(n);
    for(auto &i:a){
        cin>>i;
    }
    vector<vector<int>> res = permute(a);
    for(auto v : res){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}