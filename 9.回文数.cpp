/*
 * @lc app=leetcode.cn id=9 lang=cpp
 *
 * [9] 回文数
 */

// @lc code=start
#include<queue>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)     return false;
        queue<int> num;
        long y = (long)x;
        while(y)
        {
            num.push(y%10);
            y/=10;
        }
        long reversenum=0;
        while( !num.empty() )
        {
            reversenum = reversenum * 10 + num.front();
            num.pop();
        }
        return reversenum == (long)x;
    }
};
// @lc code=end

