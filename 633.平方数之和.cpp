/*
 * @lc app=leetcode.cn id=633 lang=cpp
 *
 * [633] 平方数之和
 */

// @lc code=start
#include<cmath>
class Solution {
public:
    bool judgeSquareSum(int c) {
        long l = 0;
        long r = (long) pow(c, 0.5);
        while( l != r )
        {
            if( l*l+r*r==c )        return true;
            if( l*l+r*r<c )         l++;
            else if( l*l+r*r>c )    r--;
        }
        if( l*l+r*r == c )          return true;
        return false;
    }
};
// @lc code=end

