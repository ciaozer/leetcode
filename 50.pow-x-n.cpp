/*
 * @lc app=leetcode.cn id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        long m = abs(n);
        while(m)
        {
            if( m&1 )
                ans *= x;
            x = x*x;
            m = m>>1;
        }
        if(n>=0)        return ans;
        else            return 1/ans;
    }
};
// @lc code=end

