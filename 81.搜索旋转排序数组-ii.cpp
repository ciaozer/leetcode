/*
 * @lc app=leetcode.cn id=81 lang=cpp
 *
 * [81] 搜索旋转排序数组 II
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        for( int i=0; i<nums.size(); i++ )
            if( nums[i] == target )
                return true;
        return false;
    }
};
// @lc code=end

