/*
Given an array nums ofdistinctintegers, 
print all the possible permutations.

pseudocode
if(idx == nums.size())
    ans.push_back(nums);
    return;
for(int i=idex;i<nums.size();i++){
    swap(nums[i],nums[idx]);
    solve(nums,ans,idx+1);
    swap(nums[i],nums[idx]);
}
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void permute(vector<int> &a,int idx){
    if(idx ==a.size()){
        ans.push_back(a);
        return;
    }
    for(int i =idx ;i<a.size();i++){
        swap(a[i],a[idx]);
        permute(a,idx+1);
        swap(a[i],a[idx]);
    }
    return;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &i :a){
        cin>>i;
    }
    permute(a,0);
    for(auto v:ans){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}