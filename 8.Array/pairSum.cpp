/*Pair Target Sum Problem 
Find whether there exist 2 numbers that sum to K.
Important​:The Array should be sorted for two pointer approach.
Idea:keep a low and high pointer,decide which 
pointer to move on the basis of arr[low]+arr[high].
TimeComplexity:O(N)
SpaceComplexity:O(1)
*/
#include<iostream>
using namespace std;
bool pairsum(int arr[],int n,int k){
    int low =0;
    int high =n-1;
    while(low<high){
        int m =arr[low]+arr[high];
        if(m ==k){
            cout<<low<<" "<<high<<endl;
            return true ;
        }
        else if (m>k){
            high --;
        }
        else{
            low++ ;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        int current = a[i];
        int j = i-1;
        while(a[j]>current&&j>=0){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<pairsum(a,n,k)<<endl;


    return 0;
}