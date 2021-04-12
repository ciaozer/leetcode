/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        for( int i=0; i<nums.size()-1; i++ )
            if( nums[i] > nums[i+1] )
                return nums[i+1];
        return nums[0];
    }
};
// @lc code=end

