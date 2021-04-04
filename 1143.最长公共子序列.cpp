/*
 * @lc app=leetcode.cn id=1143 lang=cpp
 *
 * [1143] 最长公共子序列
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size(), m = text2.size();
        int dp[n][m], pos=n;
        for( int i=0; i<n; i++ )
        {
            if( text1[i] == text2[0] )
            {
                dp[i][0] = 1;
                pos = i+1;
                break;
            }
            dp[i][0] = 0;
        }
        for( int i=pos; i<n; i++ )
            dp[i][0] = 1;
        pos=m;
        for( int i=0; i<m; i++ )
        {
            if( text2[i] == text1[0] )
            {
                dp[0][i] = 1;
                pos = i+1;
                break;
            }
            dp[0][i] = 0;
        }
        for( int i=pos; i<m; i++ )
            dp[0][i] = 1;
        for( int i=1; i<n; i++ )
        {
            for( int j=1; j<m; j++ )
            {
                if( text1[i] == text2[j] )
                    dp[i][j] = dp[i-1][j-1]+1;
                else
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
            }
        }
        // for( int i=0; i<n; i++ )
        // {
        //     for( int j=0; j<m; j++ )
        //     {
        //         printf("%d ", dp[i][j]);
        //     }
        //     printf("\n");
        // }
        return dp[n-1][m-1];
    }
};
// @lc code=end

