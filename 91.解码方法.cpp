/*
 * @lc app=leetcode.cn id=91 lang=cpp
 *
 * [91] 解码方法
 */

// @lc code=start
#include<string>
using namespace std;
class Solution {
public:
    int numDecodings(string s) {
        if( s[0] == '0' )   return 0;
        int prepre=1, pre=1, prenum=s[0]-'0';
        for( int i=1; i<s.size(); i++ )
        {
            int cur = pre;
            if( s[i] == '0' )
            {
                if( prenum != 1 && prenum != 2 )
                    return 0;
                else 
                {
                    pre = prepre;
                    prenum = s[i]-'0';
                    continue;
                }
            }
            if( prenum == 1 )   cur += prepre;
            else if( prenum == 2 )
            {
                int num = s[i]-'0';
                if( num>=0 && num<=6 )
                    cur += prepre;
            }
            prepre = pre;
            pre = cur;
            prenum = s[i]-'0';
        }
        return pre;
    }
};
// @lc code=end

