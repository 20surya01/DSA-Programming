/*Given a nxm matrix.
Write an algorithm to find 
that the given value exists 
in the matrix or not.
Integers in each row are sorted 
in ascending from left to right.
Integers in each column are sorted in 
ascending from top to bottom.

constraints
1<=N,M<=1000   */
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,tra;
    cin>>n>>m>>tra;
    int mat[n][m];
    for(int i =0 ; i<n ; i++){
        for(int j =0 ; j<n ; j++){
            cin>>mat[i][j];
        }
    }

    bool found = false ;
    int r = 0,c =n-1;
    while(r<m and c>=0){
        if(mat[r][c]==tra){
            found =true;
        }
        mat[r][c]>tra?c--:r++ ;
    }
    if(found)
        cout<<"found";
    else
        cout<<"Not found";

    return 0;
}