#include<bits/stdc++.h>
using namespace std;

int main(){
    string s ="aabbcccdddd";
    /*sort(s.begin(),s.end());
    char c = s[0];
    int maxF = 0;
    int curF = 0;
    int st,stM =0 ;
    for(int i =0 ; i<s.length() ; i++){
        if(s[i] == c){
            curF ++;
            st =i;
        }
        maxF = max(maxF ,curF);
        if(s[i]!=c) {
            c = s[i];
            curF = 1;
        }
    }
    cout<<maxF<<endl;*/
    int freq[26];
    for(int i =0 ; i<26 ; i++){
        freq[i] =0;
    }
    for(int i =0 ; i<s.length() ; i++){
        freq[s[i] -'a']++;
    }
    char ans = 'a';
    int maxF =0;
    for(int i =0 ; i<26 ; i++){
        if(freq[i]> maxF){
            maxF = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxF <<" "<<ans<<endl;
    return 0;
}