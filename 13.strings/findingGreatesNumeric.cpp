#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "1242457";
    sort(s.begin(),s.end());      //Or we can use   sort(s.begin(),s.end(),greater<int>()); to write it in decreasing order
    cout<<s[s.length()-1]<<endl; // then cout<<s[0]<<endl;
    return 0;
}