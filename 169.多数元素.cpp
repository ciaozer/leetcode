/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for( int i=0; i<nums.size(); i++ )
        {
            if( mp.find(nums[i]) != mp.end() )
                mp[nums[i]]++;
            else 
                mp[nums[i]] = 1;
            if( mp[nums[i]]*2 >= nums.size() )
                return nums[i];
        }
        return 0;
    }
};
// @lc code=end

