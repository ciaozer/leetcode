/*
 * @lc app=leetcode.cn id=42 lang=cpp
 *
 * [42] 接雨水
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        if(!n)  return 0;
        int l[n], r[n], ans=0;
        memset(l, 0, sizeof(l));
        memset(r, 0, sizeof(r));
        l[0] = height[0];   r[n-1] = height[n-1];
        for( int i=1; i<n; i++ )    l[i]=max(l[i-1], height[i]);
        for( int i=n-2; i>=0; i--)  r[i]=max(r[i+1], height[i]);
        for( int i=0; i<n; i++ )    ans += min(l[i], r[i])-height[i];
        return ans;    
    }
};
// @lc code=end

