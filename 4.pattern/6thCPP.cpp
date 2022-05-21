#include<iostream>
using namespace std;
    /*5
    1
    12
    123
    1234
    12345*/
int main(){
    int n;
    int x;
    cin>>n;
    for(int i =0;i<n;i++){
        x= 0;
        for(int j = 0;j<=i ;j++){
            cout<<++x;
        }
        x--;
        cout<<endl;
    }
    return 0 ;
}