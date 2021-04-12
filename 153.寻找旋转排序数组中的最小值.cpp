/*
 * @lc app=leetcode.cn id=153 lang=cpp
 *
 * [153] 寻找旋转排序数组中的最小值
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        if( nums[0] < nums.back() )     return nums[0];
        for( int i=0; i<nums.size()-1; i++ )
        {
            if( nums[i] > nums[i+1] )
                return nums[i+1];
        }
        return nums[0];
    }
};
// @lc code=end

