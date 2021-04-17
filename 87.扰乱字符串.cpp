/*
 * @lc app=leetcode.cn id=87 lang=cpp
 *
 * [87] 扰乱字符串
 */

// @lc code=start
#include<string>
#include<string.h>
using namespace std;
class Solution {
public:
    bool isScramble(string s1, string s2) {
        if( s1 == s2 )          return true;
        if( !check(s1,s2) )     return false;
        int n = s1.size();
        for( int i=1; i<=n-1; i++ )
        {
            string s1a = s1.substr(0, i);
            string s1b = s1.substr(i);
            string s2a = s2.substr(0, i);
            string s2b = s2.substr(i);
            string s2c = s2.substr(0, n-i);
            string s2d = s2.substr(n-i);
            return (isScramble(s1a, s2a) && isScramble(s1b, s2b)) || (isScramble(s1a, s2d) && isScramble(s1b, s2c));
        }  
        return false;
    }

    bool check(string s1, string s2)        //看每个字符的个数是否相等
    {
        int n = s1.size();
        int zimu1[26], zimu2[26];
        memset(zimu1, 0, sizeof(zimu1));
        memset(zimu2, 0, sizeof(zimu2));
        for( int i=0; i<n; i++ )
        {
            zimu1[s1[i]-'a']++;
            zimu2[s2[i]-'a']++;
        }
        for( int i=0; i<26; i++ )
            if( zimu1[i] != zimu2[i] )
                return false;
        return true;
    }
};
// @lc code=end

