/*Given two 2-D arrays of size n1Xn2 and n2Xn3
you task is to multiply these matrices 
and output the multiplied matrix.

Constraints
1 <= n1,n2.n3 <=10^3 
time complexity = O(n1*n2*n3) */

#include<iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2],m2[n2][n3],ans[n1][n3];

    for(int i =0 ; i<n1 ; i++){
        for(int j =0 ;j<n2;j++)
        cin>>m1[i][j];
    }
    for(int i =0 ; i<n2 ; i++){
        for(int j =0 ;j<n3;j++)
        cin>>m2[i][j];
    }
    for(int i =0 ; i<n1 ; i++){
        for(int j =0 ;j<n3;j++)
        ans[i][j]=0;
    }
    for(int i =0;i<n1;i++){
        for(int j =0;j<n3;j++){
            for(int k =0;k<n2;k++){
                ans[i][j] +=m1[i][k]*m2[k][j];
            }
        }
    }
    for(int i =0 ; i<n1 ; i++){
        for(int j =0 ;j<n3;j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}