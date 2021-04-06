/*
 * @lc app=leetcode.cn id=80 lang=cpp
 *
 * [80] 删除排序数组中的重复项 II
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())    return 0;
        int cnt = 1, tmp = nums[0];
        vector<int>::iterator it;
        for( int i=1; i<nums.size(); i++ )
        {
            if(nums[i] != tmp)
            {
                tmp = nums[i];
                cnt = 1;
            }
            else 
            {
                if( cnt < 2 )
                    cnt++;
                else
                {
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
        }
        return nums.size();
    }
};
// @lc code=end

