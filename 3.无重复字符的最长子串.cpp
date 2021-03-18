/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
#include<string>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if( s.empty() )     return 0;
        unordered_map<char, int> pos;
        int maxlen=0, currentlen=0, startindex=0;
        for( int i=0; i<s.size(); i++ )
        {
            if( pos.find(s[i]) == pos.end() )
            {
                pos[s[i]] = i;
                currentlen++;
            }
            else
            {
                maxlen = max(maxlen, currentlen);
                startindex = max(startindex, pos[s[i]]);
                pos[s[i]] = i;
                currentlen = i-startindex;
            }
        }
        return max(maxlen, currentlen);
    }
};
// @lc code=end

