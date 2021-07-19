/*
 * @lc app=leetcode.cn id=137 lang=cpp
 *
 * [137] 只出现一次的数字 II
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for( int i=0; i<32; i++ )
        {
            int sum=0;
            for( int num : nums )
                sum += (num>>i)&1;
            if( sum % 3 )
                ans |= (1<<i);
        }
        return ans;
    }
};
// @lc code=end

