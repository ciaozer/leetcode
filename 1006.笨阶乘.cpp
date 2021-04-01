/*
 * @lc app=leetcode.cn id=1006 lang=cpp
 *
 * [1006] 笨阶乘
 */

// @lc code=start
#include<stack>
using namespace std;
class Solution {
public:
    int clumsy(int N) {
        stack<int> num;
        stack<int> ops;
        int op=0, n=N;
        num.push(n);
        n--;
        while(n>=1)
        {
            ops.push(op);
            if( ops.top() == 0 )
            {
                int tmp = num.top();
                num.pop();
                num.push(tmp*n);
                ops.pop();
            }   
            else if( ops.top() == 1 )
            {
                int tmp = num.top();
                num.pop();
                num.push(tmp/n);
                ops.pop();
            }
            else if( ops.top() == 3 )
            {
                num.push(-1*n);
                ops.pop();
                ops.push(2);
            }
            else
                num.push(n);
            op = (op+1)%4;
            n--;
        }
        while(!ops.empty())
        {
            int num1 = num.top(); num.pop();
            int num2 = num.top(); num.pop();
            if( ops.top() == 2 )
                num.push(num2+num1);
            else
                num.push(num2-num1);
            ops.pop();
        }
        return num.top();
    }
};
// @lc code=end

