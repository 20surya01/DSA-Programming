#include<bits/stdc++.h>
using namespace std;

int* encode(string s){
    int *A = new int[s.length()];
    for(int i =0;i<s.length();i++){
        A[i]=int(s[i]);
    }
    return A;
}
void decode(int *enco ,int n){
    cout<<"\nencoded form: ";
    for(int i =0;i<n;i++) cout<<enco[i];
    cout<<"\ndecoded text: ";
    for(int i=0;i<n;i++) cout<<char(enco[i]);
    delete []enco;
}
int main(){
    string str;
    getline(cin,str);
    int n =str.length();
    int *enco = encode(str);
    decode(enco ,n);
    return 0;
}