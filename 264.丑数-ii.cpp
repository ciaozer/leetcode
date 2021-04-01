/*
 * @lc app=leetcode.cn id=264 lang=cpp
 *
 * [264] 丑数 II
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int nthUglyNumber(int n) {
        int dp[1700];
        int pos2=0, pos3=0, pos5=0;
        dp[0] = 1;
        for( int i=1; i<n; i++ )
        {
            int num2 = dp[pos2]*2;
            int num3 = dp[pos3]*3;
            int num5 = dp[pos5]*5;
            dp[i] = min(num2, min(num3, num5));
            if( dp[i] == num2 )     pos2++;
            if( dp[i] == num3 )     pos3++;
            if( dp[i] == num5 )     pos5++;
        }
        return dp[n-1];
    }
};
// @lc code=end

