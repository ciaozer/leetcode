/*
 * @lc app=leetcode.cn id=400 lang=cpp
 *
 * [400] 第 N 位数字
 */

// @lc code=start
class Solution {
public:
    int findNthDigit(int n) {
        int ni[9];
        ni[0] = 0;
        for( int i=1; i<9; i++ )
            ni[i] = ni[i-1] + i*9*pow(10, i-1);
        for( int i=8; i>=1; i-- )
        {
            if( n <= ni[i] )    continue;
            n -= ni[i];
            int a = n / (i+1);
            int b = n % (i+1);
            int num = pow(10, i) + a;
            if( b == 0 )
                return (num-1)%10;
            else 
            {
                int cnt = i+1-b;
                while(cnt--)    num /= 10;
                return num%10;
            }
        }
        return n;
    }
};
// @lc code=end

