#include<bits/stdc++.h>
using namespace std; 

bool IsPresent(int arr[] ,int key ,int f ,int l){
    if(l>f){ 
        if(arr[f] == key) return true;
        else return IsPresent(arr,key, f+1 ,l);
    }
    return false;
    
}
bool isPresent(int arr[] ,int key ,int f ,int l){
    if(l>=f){
        int i = (f+l)/2;
        if(key == arr[i]) return true;
        else if(key > arr[i]){
            return isPresent(arr, key ,i+1 ,l);
        }
        else if (key < arr[i]){
            return isPresent(arr,key ,f,i-1);
        }
    }
    return false;
}
int main(){
    int arr[] ={1,2,3,4,5,6,7,8,9,10};
    int key ;
    cin>>key;
    if(isPresent(arr , key ,0,9)){
        cout<<"element is there"<<endl;
    } 
    // if(IsPresent(arr , key ,0,9)){
    //     cout<<"element is there";
    // }
    else cout<<"element not found";
    return 0;
}