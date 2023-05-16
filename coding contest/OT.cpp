#include<bits/stdc++.h>
using namespace std;

int stocks(int input1 ,int input2[]){
    int ans=0;
    int m =0;
    for(int i=0;i<input1;i++){
        if(input2[i]<0){
            m+=input2[i];
            
        }
        else{
            ans =min(ans,m);
            m =0;
        }
    }
    return ans;

}
int main(){
    
    
    return 0;
}