#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n =nums.size();
        int l =0;
        sort(nums.begin(),nums.end());

        for(int i =0 ;i<n;i++){
            if(nums[l]==nums[l+1]){
                return true;
            }
            else l++;
        }
        return false;
    }
};
int main(){
    Solution s;
    vector<int> v;
    int n ;
    cin>>n;
    for(int i=0 ;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<s.containsDuplicate(v)<<endl;
    return 0;
}