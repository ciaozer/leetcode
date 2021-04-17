/*
 * @lc app=leetcode.cn id=213 lang=cpp
 *
 * [213] 打家劫舍 II
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int rob(vector<int>& nums) {
        if( nums.size() == 1 )      return nums[0];
        if( nums.size() == 2 )      return max(nums[0], nums[1]);
        if( nums.size() == 3 )      return max(nums[0], max(nums[1], nums[2]));
        int prepre=nums[0], pre=max(nums[0], nums[1]), cur, ans;
        for( int i=2; i<nums.size()-1; i++ )
        {
            cur = max(pre, prepre+nums[i]);
            prepre = pre;
            pre = cur;
        }
        ans = cur;
        prepre = nums[1];
        pre = max(nums[1], nums[2]);
        for( int i=3; i<nums.size(); i++ )
        {
            cur = max(pre, prepre+nums[i]);
            prepre = pre;
            pre = cur;
        }
        ans = max(ans, cur);
        return ans;
    }
};
// @lc code=end

