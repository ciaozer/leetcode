/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
#include<stack>
using namespace std;
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st1;
    stack<int> st2;
    MinStack() {
        while(!st1.empty())     st1.pop();
        while(!st2.empty())     st2.pop();
    }
    
    void push(int val) {
        if( st2.empty() || val <= st2.top() )
            st2.push(val);
        st1.push(val);
    }
    
    void pop() {
        if( st1.top() == st2.top() )
            st2.pop();
        st1.pop();
    }
    
    int top() {
        return st1.top();
    }
    
    int getMin() {
        return st2.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end

