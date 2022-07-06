#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int diff;
        int n=0;
        if(a>b) diff= a-b;
        if(b>a) diff =b-a;
        int i;
    
        for(i=1; i <= diff/2; i++) {
            if (diff % i == 0)
                n++;
            
        }
        n++;
        cout<<n<<endl;
    }
    
    return 0;
}