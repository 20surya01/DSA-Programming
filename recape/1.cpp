#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> s ={1,45,31,66,22};
    cout<<s.at(2)+s.at(0)<<" "<<s[2]+s[0]<<" ";
    if(s[2]+s[0]<=32) cout<<true;
    else cout<<false;
    return 0;
}