/*
Given an array A of 0s and 1s , we may change up to k values from 0 to 1.

return the length of the longest (contiguous) subarray that contains only 1s

SAMPLE TEST CASE
input: A= [1,1,1,0,0,0,1,1,1,1,0] , k =2 
Output: 6
Exlanation:
[1,1,1,0,0,"1",1,1,1,1,"1"]
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n  ;cin>>n;
    int k; cin>>k;
    vector<int> a(n);
    for(auto &i :a){
        cin>>i;
    }
    //a[i....j]   array window
    //a[i....j+1]  expanding window
    //a[i+1..j]    reducing window size
    int zerocnt =0 ,ans =0 ,i=0;
    for(int j =0;j<n;j++){ 
        if(a[j] ==0){
            zerocnt ++;
        }//[i....j]  jth element is included
        while(zerocnt>k){
            if(a[i] ==0){
                zerocnt --;
            }
            i++;
        }
        //zerocnt <=k
        ans=max(ans,j-i+1);
    }
    cout<<ans;
    return 0;
}

