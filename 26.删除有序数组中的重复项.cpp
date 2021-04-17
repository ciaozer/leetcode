/*
 * @lc app=leetcode.cn id=26 lang=cpp
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>::iterator it;
        if(nums.empty())    return 0;
        for( it=nums.begin(); it!=nums.end()-1; it++ )
        {
            if( *it == *(it+1) )
                nums.erase(it--);
        }
        return nums.size();
    }
};
// @lc code=end

