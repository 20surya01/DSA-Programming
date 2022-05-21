/*given a square matrix A & its number of rows 
(or columns)N ,return the transpose of A.
constraints
1<=N <=1000
time complexity = O(n^2)*/

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int a[N][N];
    for(int i =0 ; i<N ; i++){
        for(int j= 0;j<N;j++){
            cin>>a[i][j];
        }
    }
    for(int i =0 ; i<N ; i++){
        for(int j= i;j<N;j++){
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    for(int i =0 ; i<N ; i++){
        for(int j= 0;j<N;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}