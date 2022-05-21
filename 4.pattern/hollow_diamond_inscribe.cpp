#include<iostream>
using namespace std;
    /*5
* * * * * * * * * 
* * * *   * * * *
* * *       * * *
* *           * *
*               *

*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * **/

int main(){
    int n;
    cin>>n;
    for(int i=0 ;i<n ;i++){
        if(i==0){
            for(int j= 1;j <=2*n-1 ;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j = 1;j<=n -i;j++){
                cout<<"* ";
            }
            for(int j =1;j<=2*i -1;j++){
                cout<<"  ";
            }
            for(int j = 1;j<=n -i;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i =n ;i>=0 ;i--){
        if(i==0){
            for(int j= 1;j <=2*n-1 ;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j = 1;j<=n -i;j++){
                cout<<"* ";
            }
            for(int j =1;j<=2*i -1;j++){
                cout<<"  ";
            }
            for(int j = 1;j<=n -i;j++){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}