/*
"ABC"    {                               constant|permutation 
    permutaion =                          |---->A,BC--------------->C,AB  B,AC
    ABC                     algo ABC -----|---->B,AC-------------->A,BC   C,BA
    ACB                                   |---->C,AB------------->A,CB  B,CA
    BAC
    BCA
    CAB
    CBA
}
*/
#include<bits/stdc++.h>
using namespace std;

void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i =0 ; i<s.length() ; i++){
        char ch =s[i];
        string ros = s.substr(0,i) +s.substr(i+1);          //first will add first index char and 2nd it will add 2nd next 2nd char

        permutation(ros,ans+ch);
    }
}

int main(){
    permutation("ABCd","");
    
    return 0;
}