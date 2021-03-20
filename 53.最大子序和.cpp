/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        const int INF = (1<<31);
        int maxsum=INF, currentsum=0;
        for( int i=0; i<nums.size(); i++ )
        {
            currentsum += nums[i];         
            maxsum = max(maxsum, currentsum);
            currentsum = max(currentsum, 0);
        }
        return maxsum;
    }
};
// @lc code=end

