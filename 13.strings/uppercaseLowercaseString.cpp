/*Givem a string s with both uppercase and lowercase latin caharacers('a'-'z').
your task to convert whole string into 
(1) lower case
(2) upper case */
#include<bits/stdc++.h>
using namespace std;

int main(){
    string str = "asajaAMSCMdcka";
    // cout<<'a'-'A'<<endl;  every lower case char is 32 ahead of upper case in ASCHI
    
    //anycase to uppercase;

    for(int i =0 ; i<str.size() ; i++){
        if(str[i] >='a'&& str[i]<='z'){
            str[i] -=32;
        }
    }
    cout<<str<<endl;
    //upper case to lower case
    for(int i =0 ; i<str.size() ; i++){
        if(str[i] >='A'&& str[i]<='Z'){
            str[i] +=32;
        }
    }
    cout<<str<<endl;



    //inbuilt function to transform --transform()--
    string s = "cajcjdbvsjkrdkg";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    return 0;
}