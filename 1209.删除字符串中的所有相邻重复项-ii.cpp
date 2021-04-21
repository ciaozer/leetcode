/*
 * @lc app=leetcode.cn id=1209 lang=cpp
 *
 * [1209] 删除字符串中的所有相邻重复项 II
 */

// @lc code=start
#include<string>
#include<stack>
#include<utility>
#include<algorithm>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        int times = 1;
        st.push(make_pair(s[0], times));
        for( int i=1; i<s.size(); i++ )
        {
            if( s[i] == st.top().first )    //和栈顶元素相等
            {
                if( st.top().second == k-1 )
                {
                    int tmp = k-1;
                    while(tmp--)    st.pop();
                }
                else 
                    st.push(make_pair(s[i], st.top().second+1));
            }
            else 
            {
                st.push(make_pair(s[i], 1));
            }
        }
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top().first);
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

