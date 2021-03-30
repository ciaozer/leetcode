/*
 * @lc app=leetcode.cn id=151 lang=cpp
 *
 * [151] 翻转字符串里的单词
 */

// @lc code=start
#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    string reverseWords(string s) {
        if(s.empty())   return s;
        trim(s);
        int i=s.size()-1, j=s.size()-1;
        string ans;
        while( i>=0 )
        {
            while( i>=0 && s[i] == ' ' )
            {
                i--;
                j--;
            }
            while( i>=0 && s[i] != ' ' )
            {
                i--;
            }
            ans = ans + s.substr(i+1, j-i) + " ";
            j = i;
        }
        return ans.substr(0, ans.length()-1);
    }

    void trim(string& s)
    {
        s.erase(0, s.find_first_not_of(" "));
        s.erase(s.find_last_not_of(" ")+1);
    }
};
// @lc code=end

