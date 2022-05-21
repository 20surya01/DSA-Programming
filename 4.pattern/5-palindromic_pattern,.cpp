#include<iostream>
using namespace std;
    /*5
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5 */

int main(){
    int n;
    cin>>n;
    for(int i =1;i<=n ;i++){
        //space
        int k = i;
        for(int j=1;j<=n -i;j++){
            cout<<"  ";
        }
        //3-2-1
        for(int j=1;j<=i;j++){
            cout<<k--<<" ";
        }
        //1-2-3
        for(int j =2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}