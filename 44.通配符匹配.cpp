/*
 * @lc app=leetcode.cn id=44 lang=cpp
 *
 * [44] 通配符匹配
 */

// @lc code=start
#include<string>
#include<string.h>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(), m=p.size();
        bool dp[n+1][m+1];
        memset(dp, false, sizeof(dp));
        dp[0][0] = 1;   //s不空p空为false
        for( int i=1; i<=m; i++ )    //s空
            dp[0][i] = dp[0][i-1] && p[i-1] == '*';
        for( int i=1; i<=n; i++ )
        {
            for( int j=1; j<=m; j++ )
            {
                if( p[j-1] != '*' )
                {
                    if( p[j-1] == s[i-1] || p[j-1] == '?' )
                        dp[i][j] = dp[i-1][j-1];
                }
                else 
                {
                    dp[i][j] = dp[i-1][j] || dp[i][j-1];
                }
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

