#include<bits/stdc++.h>
using namespace std;

void towerfHanoi(int n,char src,char dest ,char helper){
    if(n ==0 ){
        return; //base case
    }
    towerfHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerfHanoi(n-1,helper,dest,src);
}


int main(){
    towerfHanoi(3,'A','C','B');
    
    return 0;
}