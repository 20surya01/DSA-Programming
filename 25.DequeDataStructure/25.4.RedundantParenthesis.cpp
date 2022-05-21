#include<bits/stdc++.h>
using namespace std;

void parenthesis(string s){
    stack<char> st;
    int n =s.size();
    bool ans =false;
    for(int i= 0;i<n ;i++){
        if(s[i] == '(' or s[i] == '+' or s[i] == '-' or  s[i] == '/' or s[i] =='*'){
            st.push(s[i]);
        }
        if(s[i] ==')'){
            if(st.top()=='('){
                ans =true;
            }
            while(s[i] == '+' or s[i] == '-' or  s[i] == '/' or s[i] =='*'){
                st.pop();
            }
            st.pop();
        }
    }
    if(ans ==true) cout<<"redundant"<<endl;
    else cout<<"Non Redundant"<<endl;
}

int main(){
    string s = "((a+b))" ;
    parenthesis(s);
    return 0;
}