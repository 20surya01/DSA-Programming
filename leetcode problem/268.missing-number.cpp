// @before-stub-for-debug-begin
#include <vector>
#include <string>
#include "commoncppproblem268.h"

using namespace std;
// @before-stub-for-debug-end

/*
 * @lc app=leetcode id=268 lang=cpp
 *
 * [268] Missing Number
 */

// @lc code=start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i =0; i < nums.size();i++){
            if(nums[0]!=0){
                return 0;
            }
            else if ((nums[i]+1)!=nums[i+1]){
                return i+1;
            }

        }
        return -1;

    }
};
// @lc code=end

