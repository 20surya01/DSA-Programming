#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    cin.ignore();
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();
    int i =0;
    int curL =0;
    int maxL =0;
    int st =0 ,maxSt = 0;
    while(i<n){
        if(a[i] == ' '|| a[i] =='\0'){
            if(curL > maxL ){
                maxSt = st;
                maxL = curL;
            }
            st =i+1;
            curL = 0;
        }
        else curL ++;
        if(a[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<a<<endl;
    cout<<maxL<<endl;
    for(int i =0 ; i<maxL ; i++){
        cout<<a[maxSt +i];
    }
    return 0;
}