/*
 * @lc app=leetcode.cn id=946 lang=cpp
 *
 * [946] 验证栈序列
 */

// @lc code=start
// #include<vector>
// #include<stack>
using namespace std;
class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> assist;
        int pos = 0;
        for( int i=0; i<pushed.size(); i++ )
        {
            assist.push(pushed[i]);            
            while(assist.top() == popped[pos] )
            {
                assist.pop();
                pos++;
                if(assist.empty())          break;
            }
        }
        while(pos<popped.size())
        {
            if(assist.top() != popped[pos])     return false;
            pos++;
            assist.pop();
        }
        return true;
    }
};
// @lc code=end

