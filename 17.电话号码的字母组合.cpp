/*
 * @lc app=leetcode.cn id=17 lang=cpp
 *
 * [17] 电话号码的字母组合
 */

// @lc code=start
#include<queue>
#include<string>
using namespace std;

class Solution {
public:
    vector<vector<char>> numtable = {{''},{''},{'a','b','c'}};
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        queue<string> q;
        for( int i=0; i<digits.size(); i++ )
        {
            if( digits[i] == )
        }
    }
};
// @lc code=end

