/*
 * @lc app=leetcode.cn id=10 lang=cpp
 *
 * [10] 正则表达式匹配
 */

// @lc code=start
#include<string>
#include<cstring>
using namespace std;
class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(), m=p.size();
        bool dp[n+1][m+1];
        memset(dp, false, sizeof(dp));
        dp[0][0] = 1; //p为空串
        for( int i=2; i<=m; i+=2 )   dp[0][i] = (dp[0][i-2]) && (p[i-1]=='*'); //s为空串
        for( int i=1; i<=n; i++ )       //注意字符对应是i-1
        {
            for( int j=1; j<=m; j++ )
            {
                if( p[j-1] != '*' )
                {
                    if( p[j-1] == '.' )
                        dp[i][j] = dp[i-1][j-1];
                    else if( p[j-1] == s[i-1] )
                        dp[i][j] = dp[i-1][j-1];
                }
                else
                {
                    if( dp[i][j-2] )
                        dp[i][j] = 1;
                    else if( p[j-2] == s[i-1] )
                        dp[i][j] = dp[i-1][j];
                    else if( p[j-2] == '.' )
                        dp[i][j] = dp[i-1][j];
                }
            }
        }
        return dp[n][m];
    }
};
// @lc code=end

