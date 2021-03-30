/*
 * @lc app=leetcode.cn id=72 lang=cpp
 *
 * [72] 编辑距离
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    int minDistance(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        if( n1*n2 == 0 )    return n1+n2;
        vector<vector<int>> dp(n1+1, vector<int>(n2+1, 0));
        for( int i=0; i<=n1; i++ )      dp[i][0] = i;
        for( int i=0; i<=n2; i++ )      dp[0][i] = i;
        for( int i=1; i<=n1; i++ )
        {
            for( int j=1; j<=n2; j++ )
            {
                int num1 = dp[i-1][j]+1;
                int num2 = dp[i][j-1]+1;
                int num3 = dp[i-1][j-1];
                if( word1[i-1] == word2[j-1] )  dp[i][j] = min(num1, min(num2, num3));
                else                            dp[i][j] = min(num1, min(num2, num3+1));
            }
        }
        for( int i=0; i<=n1; i++ )
        {
            for( int j=0; j<=n2; j++ )
            {
                printf("%d ", dp[i][j]);
            }
            printf("\n");
        }
        return dp[n1][n2];
    }
};
// @lc code=end

