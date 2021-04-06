/*
 * @lc app=leetcode.cn id=5 lang=cpp
 *
 * [5] 最长回文子串
 */

// @lc code=start
#include<string>
#include<cstring>
using namespace std;
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int dp[n][n], left=0, right=0, maxdp=0;
        memset(dp, 0, sizeof(dp));
        for( int i=0; i<n; i++ )
            dp[i][i] = 1;
        for( int i=0; i<n-1; i++ )
            if( s[i] == s[i+1] )
                dp[i][i+1] = 1;
        for( int j=2; j<n; j++ )
        {
            for( int i=0; i<n-2; i++ )
            {
                if( dp[i+1][j-1] == 1 && s[i] == s[j] )
                    dp[i][j] = 1;
            }
        }
        // for( int i=0; i<n; i++ )
        // {
        //     for( int j=0; j<n; j++ )
        //     {
        //         printf("%d ", dp[i][j]);
        //     }
        //     printf("\n");
        // }
        for( int i=0; i<n; i++ )
            for( int j=i; j<n; j++ )
                if( dp[i][j] )
                {
                    if(j-i>maxdp)
                    {
                        maxdp = j-i;
                        left = i;
                        right = j;
                    }
                }
        //printf("%d %d", left, right);
        return s.substr(left, right-left+1);
    }   
};
// @lc code=end

