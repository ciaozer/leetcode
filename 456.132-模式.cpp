/*
 * @lc app=leetcode.cn id=456 lang=cpp
 *
 * [456] 132模式
 */

// @lc code=start
#include<vector>
#include<stack>
using namespace std;
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if( nums.size() < 3 )       return false; 
        stack<int> st;
        int flag = 1;
        st.push(nums[0]);
        for( int i=1; i<nums.size(); i++ )
        {
            if( flag == 1 ) //等待一个比它大的数
            {
                if( nums[i] > st.top() )    flag = 2;
                st.push(nums[i]);
            }
            else if( flag == 2 )    //等待一个比它小的数
            {
                if( nums[i] < st.top() )
                {
                    int temp = st.top();
                    st.pop();
                    if( nums[i] > st.top() )    return true;
                    st.push(temp); 
                }
                else
                {
                    st.pop();
                    st.push(nums[i]);
                }
            }
        }
        return false;
    }
};
// @lc code=end

