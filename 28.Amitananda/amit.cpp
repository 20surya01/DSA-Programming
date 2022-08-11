#include<bits/stdc++.h>
using namespace std;
class SumFun{
    private:
        
    public:
    vector<int> twosum(vector<int> &nums , int target){
        int i =0;
        int j =nums.size()-1;
        vector<int>  temp ,copy;
        int keyEl1 ,keyEl2;
        for(auto x:nums) copy.push_back(x) ;
        sort(copy.begin(),copy.end());
        while(i<=j){
            if((copy[i] + copy[j]) ==target){
                keyEl1 =copy[i];
                keyEl2 =copy[j];
                break; 
            }
            if((copy[i] + copy[j] )<target) i++;
            if((copy[i] + copy[j] )>target) j--;
        }
        for(int i =0; i<nums.size();i++){
            if(nums[i]==keyEl1 or nums[i] ==keyEl2){
                temp.push_back(i);
            }
        }
        return temp;
    }
};


int main(){
    int target;
    cin>>target;
    
    vector<int> A ={3,2,3};
    SumFun s;
    vector<int> t =s.twosum(A ,target);
    for(auto x:t) cout<<x<<" ";
    
    return 0;

}