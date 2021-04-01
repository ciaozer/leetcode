/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
#include<vector>
#include<deque>
using namespace std;
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> ans;
        deque<int> dq;
        for( int i=0; i<nums.size(); i++ )
        {
            while( !dq.empty() && dq.back()<nums[i] )      dq.pop_back();
            dq.push_back(nums[i]);
            if( i>=k-1 )
            {
                ans.push_back(dq.front());
                if( nums[i-k+1] == dq.front() )     dq.pop_front();
            }
        }
        return ans;
    }
};
// @lc code=end

