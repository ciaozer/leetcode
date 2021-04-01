/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        ans.push_back(vector<int>());
        for( int i=0; i<nums.size(); i++ )
        {
            vector<int> tmp;
            tmp.push_back(nums[i]);
            for( int j=i+1; j<nums.size(); j++ )
            {
                tmp
            }
        }
        return ans;
    }
};
// @lc code=end

