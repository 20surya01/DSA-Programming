/*subarray and subsequence
subarray is a subset of sebsequence 
a[1,3,4,5,2,6]
subarray = [1],[1,3,4],[5,2,6],[4,5,2] etc ********** 
total number of subarray from array "n" = nC2 + n =n(n+1)/2
total number of subsequence from array "n" = 2^n */


//Qus- maximum sum of elements form subarray 

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum = 0;
    int finalSum = 0;
    for(int i=0;i<n ;i++){
        for(int j =i;j<n;j++){
            sum +=a[j];
            cout<<sum<<" ";
            finalSum +=sum;
        }
        sum =0;
    }
    cout<<"\n"<<finalSum<<endl;

    
    return 0;
}