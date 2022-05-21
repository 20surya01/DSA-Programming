#include<iostream>
using namespace std;
    /*n: 5
    1 
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15 */

int main(){
    int x = 1;
    int n;
    cout<<"n: ";
    cin>>n;
    for(int i=0 ;i <n;i++){
        for(int j =0 ;j<=i;j++){
            cout<<x<<" ";
            x ++;
        }
        cout<<endl;
    }
}