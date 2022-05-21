/*How many numbers between 1 and 1000 are divisible by 5 or 7
______________________________________
|div by 5 | div by both| div by 7     |
|_________|____________|______________|
*/

#include<bits/stdc++.h>
using namespace std;

int Divisible(int n,int a,int b){
    int c1 = n/a;
    int c2 = n/b;
    int c3 = n/(a*b);
    return c1+c2-c3 ;
}

int main(){
    int n,a,b;
    cin>>n>>a>>b;
    cout<<Divisible(n,a,b)<<endl;
    return 0;
}