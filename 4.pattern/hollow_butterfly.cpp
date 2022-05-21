#include<iostream>
using namespace std;
    /*5
*                 * 
* *             * *
*   *         *   * 
*     *     *     *
*       * *       *
*       * *       *
*     *     *     *
*   *         *   *
* *             * *
*                 * */

int main(){
    int n;
    cin>>n;
    for(int i =n-1;i>=0;i--){
        for(int j= 1;j<=n-i;j++){
            if(j==1||j==n-i){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        for(int j =1;j<=2*i;j++){
            cout<<"  ";
        }
        for(int j= 1;j<=n-i;j++){
            if(j==1||j==n-i){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j =1 ;j<=n-i;j++){
            if(j==1||j==n-i){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        for(int j =1;j<=2*i;j++){
            cout<<"  ";
        }
        for(int j= 1;j<=n-i;j++){
            if(j==1||j==n-i){
                cout<<"* ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }
}