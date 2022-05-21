#include<bits/stdc++.h>
using namespace std;

int choc(int n,int remaining){
    int choclate =n;
    int rapper =n + remaining;

    if(n==0) return 0;
    return (choclate + choc(rapper/3 ,rapper%3 ));

}

int main(){
    int n;
    cin>>n;

    cout<<choc(n,0);
    return 0;
}