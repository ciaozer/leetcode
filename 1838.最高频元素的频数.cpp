/*
 * @lc app=leetcode.cn id=1838 lang=cpp
 *
 * [1838] 最高频元素的频数
 */

// @lc code=start
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

/*//排序+滑动窗口
class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        int ans = 1, left = 0;
        ll sum = 0;
        for (int right = 1; right < nums.size(); right++)
        {
            sum += (ll)(nums[right] - nums[right - 1]) * (right - left);
            while (sum > k)
            {
                sum = sum - nums[right] + nums[left];
                left++;
            }
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};*/

class Solution
{
public:
    int maxFrequency(vector<int> &nums, int k)
    {
        sort(nums.begin(), nums.end());
        
    }
};

// @lc code=end
