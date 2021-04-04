/*
 * @lc app=leetcode.cn id=7 lang=cpp
 *
 * [7] 整数反转
 */

// @lc code=start
#include<stack>
#include<queue>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        long ans=0;
        int sign=1;
        long y = (long)x;
        if(y<0)     sign = -1, y*=-1;
        queue<int> num;
        while(y)
        {
            if( !num.empty() || (y%10) != 0 )
                num.push(y%10);
            y/=10;
        }
        while( !num.empty() )
        {
            ans = ans*10+num.front();
            num.pop();
        }
        ans *= sign;
        if( ans > INT_MAX || ans < INT_MIN )
            return 0;
        return (int)ans;
    }
};
// @lc code=end

