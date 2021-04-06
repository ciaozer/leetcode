/*
 * @lc app=leetcode.cn id=32 lang=cpp
 *
 * [32] 最长有效括号
 */

// @lc code=start
#include<string>
#include<stack>
using namespace std;
class Solution {
public:
    int longestValidParentheses(string s) {
        int ans=0;
        stack<int> st;  //存储下标
        st.push(-1);    //栈底为最后右括号的下标
        for( int i=0; i<s.size(); i++ )
        {
            if( s[i] == '(' )
                st.push(i);
            else 
            {
                st.pop();
                if(st.empty())      st.push(i);     //存储未被匹配的右括号
                else                ans = max(ans, i-st.top());
            }
        }
        return ans;
    }
};
// @lc code=end

