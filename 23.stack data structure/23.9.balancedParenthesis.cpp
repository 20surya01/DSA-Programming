#include<bits/stdc++.h>
using namespace std;

bool BalancedParenthsis(string s){
    stack<char> st;
    bool ans =true;
    if (s[0]==')'||s[0]=='}'||s[0]==']'){
            return false;
        }
    for(int i =0 ; i<s.length() ; i++){

        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
            
        }
        else if(!st.empty()&&s[i]==')'){
            if(st.top()=='('){
                st.pop();    
            }
            else{
                ans =false;
                break;
            }
        }
        else if(!st.empty()&&s[i]==']'){
            if(st.top()=='['){
                st.pop();    
            }
            else{
                ans =false;
                break;
            }
        }
        else if(!st.empty()&&s[i]=='}'){
            if(st.top()=='{'){
                st.pop();    
            }
            else{
                ans =false;
                break;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    //[({})]
    string s;
    cin>>s;
    if(BalancedParenthsis(s)){
        cout<<"valid Parenthesis";
    }
    else{
        cout<<"Invalid Parenthesis";
    }
    return 0;
}