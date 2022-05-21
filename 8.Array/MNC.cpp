/*given an array a[] of size N. The task is 
to find the first repeating element in the array of 
integer,i.e.,an element that occurs more than once 
and whose index of first occurrence is smallest */

#include<iostream>
using namespace std;

//solution for O(n^2)

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    for(int i =0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                cout<<i+1<<endl;;
                return 0;
            }
        }
    }
    return 0;
}