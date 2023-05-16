// @before-stub-for-debug-begin
#include <vector>
#include <string>
// #include "commoncppproblem26.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n= nums.size();
        vector<int> sol;
        sol.push_back(nums.front());
        int count=0,j=0,i=1;
        while(i<=n){
            if(nums[j]==nums[i]) i++;
            if(nums[j]!=nums[i]){
                j++;
                count++;
                nums[j]=nums[i];
                i++;
            }
        }
        return count;
    }
};
// @lc code=end

