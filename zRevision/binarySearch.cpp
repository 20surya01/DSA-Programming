#include<iostream>
using namespace std;

void binarySearch(int arr[] ,int st,int n,int key){
    
    int mid = (st+n-1)/2;
    if(arr[mid] == key ){
        cout<<mid<<endl;
        return ;
    }
    else if(arr[mid]>key){
        binarySearch(arr,st,mid,key);
    }
    else if(arr[mid]<key){
        binarySearch(arr,mid+1,n ,key);
    }
    return ;
}

int main(){
    int arr[] ={1,2,3,4,5,6,7,8};
    binarySearch(arr,0,8,5);
}