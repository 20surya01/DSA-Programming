/*
Given an array, transform the array such that
arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= .....
Input: Given an array.
Output: print the sorted array.
Time Complexity: O(N), single pass
Space Complexity: O(1)

algo:-
for(i=1 to n-1){
    if arr[i] > arr[i-1]
        swap(arr,i,i-1)
    if arr[i]>arr[i+1] &&i=n-2
        swap(arr,i,i+1)

    i+=2
}

*/
#include<bits/stdc++.h>
using namespace std;

void swap(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] =arr[j];
    arr[j] = temp;
}

void waveSort(int arr[],int n){
    int i=1;
    while(i<n-1){
        if(arr[i] >arr[i-1]){
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1]){
            swap(arr,i,i+1);
        }
        i+=2;
    }
}

int main(){
    int n; cin>>n;
    int arr[n];
    for(int i =0 ;i<n;i++){
        cin>>arr[i];
    }
    waveSort(arr,n);
    for(int i =0 ;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
