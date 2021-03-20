/*
 * @lc app=leetcode.cn id=343 lang=cpp
 *
 * [343] 整数拆分
 */

// @lc code=start
class Solution {
public:
    int integerBreak(int n) {
        // int ans = 1;
        // if( n==2 )      return ans; 
        // if( n==3 )      return 2;
        // while(n>0)
        // {
        //     if( n==4 || n==3 || n==2 )
        //     {
        //         ans *= n;
        //         return ans;
        //     }
        //     n -= 3;
        //     ans *= 3;
        // }
        // return ans;
        if( n==2 )      return 1;
        if( n==3 )      return 2;
        int ans = 1;
        int power = n / 3;
        int left = n % 3;
        if( left == 0 )         ans = quickpow(3, power);
        else if( left == 1 )    ans = quickpow(3, power-1)*4;
        else if( left == 2 )    ans = quickpow(3, power)*2;
        return ans;
    }
    int quickpow(int base, int power)
    {
        int ans = 1;
        while(power)
        {
            if( power == 1 )    return ans*base;
            if( power&1 )
                ans = ans * base;
            base = base*base;
            power = power>>1;
        }
        return ans;
    }
};

// @lc code=end

