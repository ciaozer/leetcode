/*
 * @lc app=leetcode.cn id=1480 lang=cpp
 *
 * [1480] 一维数组的动态和
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int cursum = 0;
        vector<int> ans;
        for( int i=0; i<nums.size(); i++ )
        {
            cursum += nums[i];
            ans.push_back(cursum);
        }
        return ans;
    }
};
// @lc code=end

