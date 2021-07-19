/*
 * @lc app=leetcode.cn id=1035 lang=cpp
 *
 * [1035] 不相交的线
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(), m=nums2.size();
        int dp[n+1][m+1];
        for( int i=0; i<n+1; i++ )
            dp[i][0] = 0;
        for( int i=0; i<m+1; i++ )
            dp[0][i] = 0;
        for( int i=1; i<n+1; i++ )
        {
            for( int j=1; j<m+1; j++ )
            {
                if( nums1[i-1] == nums2[j-1] )
                    dp[i][j] = dp[i-1][j-1]+1;
                else 
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

