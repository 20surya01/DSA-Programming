#include<iostream>
using namespace std;
    /*5
        * * * * * 
      *       *   
    *       *     
  *       *       
* * * * * */

int main(){
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=1;j<n -i;j++){
            cout<<"  ";
        }
        if(i==0||i==n-1){
            for(int j=1;j<=n;j++){
                cout<<"* ";
            }
        }
        else{
            for(int j=1;j<=n;j++){
                if(j==1||j==n){
                    cout<<"* ";
                }
                else cout<<"  ";
            }
        }
        cout<<endl;
    }
}