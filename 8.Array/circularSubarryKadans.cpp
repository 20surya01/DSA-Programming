#include<iostream>
#include<climits>
using namespace std;

int kadan(int ar[] ,int n){
    int maxSum = 0;
    int currSum = 0;
    for(int i=0;i<n;i++){
        currSum +=ar[i];
        if(currSum <0){
            currSum =0;
        }
        maxSum = max(maxSum ,currSum);
    }
    return maxSum ;
}

int main(){
    int n ;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int b[n];
    for(int i =0 ; i<n ; i++){
        b[i] = (-1)*a[i];
    }
    int maxSum=kadan(b,n);
    int sum = 0;
    for(int i =0 ; i<n ; i++){
        sum += a[i];
    }
    int wrapsum =sum + maxSum;
    cout<<wrapsum<<endl;
    

    return 0;
}