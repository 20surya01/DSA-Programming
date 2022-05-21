/*
time complexity better then merge sort and quick sort

1.find the count of every distinct element in the array
2.calculate the position of each element in sorted array

e.g arr = 1 ,3 ,2 ,3 ,4 ,1 ,6 ,4 ,3

  count = 0 ,2 ,1 ,3 ,2 ,0 ,1
  index = 0 ,1 ,2 ,3 ,4 ,5 ,6

  for finding postion of a element we have to add its count with previous element count
  position=0,2 ,3 ,6 ,8 ,8 ,9
*/

#include<bits/stdc++.h>
using namespace std;

void countSort(int arr[],int n){
    int k =arr[0];

    for(int i =0;i<n ;i++){
        k = max(k ,arr[i]);
    }
    int count[15] ={0};
    // for(int i =0 ; i<k ; i++){
    //     int temp = 0;
    //     for(int j =0;j<n ;j++){
    //         if(arr[j] == i){
    //             temp ++;
    //         }
    //     }
    //     count[i] =temp;
    // }
    for(int i =0 ; i<n ; i++){
        count[arr[i]]++;
    }
    for(int i =1;i<=k ;i++){
        count[i] +=count[i-1];
    }
    int output[n];
    for(int i =n-1 ; i>=0 ; i--){
        output[--count[arr[i]]] =arr[i];
    }
    for(int i =0 ; i<n ; i++){
        arr[i] =output[i];
    }

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i =0 ; i<n ; i++){
        cin>>arr[i];
    }
    // int arr[] = {1,3,2,3,4,1,6,4,3} ;
    countSort(arr,n);
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
