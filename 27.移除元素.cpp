/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>::iterator it;
        for( it=nums.begin(); it!=nums.end(); it++ )
            if( *it == val )
            {
                nums.erase(it);
                it--;
            }
        return nums.size();
    }
};
// @lc code=end

