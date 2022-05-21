/*Given an array an a value,find if there exist three number
whose sum is equal to the given value

input:
n = 6 , target =24
12 3 4 7 1 6 9

output:
True(12,3,9)

first sort the array

with timecomplexity of O(nlogn)
then time complexity of traversing the array is O(n)
final time complexity is O(n^2)
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin>>n;
    int target; cin>>target;
    vector<int> a(n);
    for(auto &i :a) cin>>i;
    bool found =false;
    sort(a.begin() ,a.end());
    for(int i =0 ;i<n;i++){
        int lo =i+1,hi =n-1;
        while(lo<hi){
            int current =a[i] + a[lo] + a[hi];
            if(current ==target){
                found = true;
            }
            if(current <target){
                lo++;
            }
            else{
                hi --;
            }
        }
    }
    if(found){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}