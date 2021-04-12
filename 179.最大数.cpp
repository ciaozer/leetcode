/*
 * @lc app=leetcode.cn id=179 lang=cpp
 *
 * [179] 最大数
 */

// @lc code=start
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(int a, int b)
{
    string ab = to_string(a) + to_string(b);
    string ba = to_string(b) + to_string(a);
    return ab>ba;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans;
        sort(nums.begin(), nums.end(), cmp);
        for( auto x:nums )
            ans += to_string(x);
        if(ans[0] == '0')   return "0";
        return ans;
    }
};
// @lc code=end

