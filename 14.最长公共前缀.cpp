/*
 * @lc app=leetcode.cn id=14 lang=cpp
 *
 * [14] 最长公共前缀
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        if( strs.empty() )      return ans;
        ans = strs[0];
        for( int i=1; i<strs.size(); i++ )
        {
            string tmp;
            for( int j=0; j<min(ans.size(), strs[i].size()); j++ )
            {
                if( ans[j] != strs[i][j] )
                {
                    ans = ans.substr(0, j);
                    break;
                }
                ans = ans.substr(0, min(ans.size(), strs[i].size()));
            }
            if( min(ans.size(), strs[i].size()) == 0 )  return "";
        }
        return ans;
    }
};
// @lc code=end

