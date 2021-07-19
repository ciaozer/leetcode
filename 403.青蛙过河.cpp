/*
 * @lc app=leetcode.cn id=403 lang=cpp
 *
 * [403] 青蛙过河
 */

// @lc code=start
#include<vector>
#include<string.h>
using namespace std;
class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        int dp[n][n];
        memset(dp, 0, sizeof(dp));
        dp[0][0] = 1;
        for( int i=0; i<n-1; i++ )
            if( stones[i+1]-stones[i] > i+1 )
                return false;
        for( int i=1; i<n; i++ )
        {
            for( int j=i-1; j>=0; j-- )
            {
                int k = stones[i]-stones[j];
                if( k>j+1 )     break;
                dp[i][k] = dp[j][k-1] || dp[j][k] || dp[j][k+1];
                if( i==n-1 && dp[i][k] )
                    return true;
            }
        }
        return false;
    }
};
// @lc code=end

