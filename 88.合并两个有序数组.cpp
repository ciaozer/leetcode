/*
 * @lc app=leetcode.cn id=88 lang=cpp
 *
 * [88] 合并两个有序数组
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int pos1=0, pos2=0;
        for( int i=0; i<m+n; i++ )
        {
            if( pos1 == m )         ans.push_back(nums2[pos2++]);
            else if( pos2 == n )    ans.push_back(nums1[pos1++]);
            else if( nums1[pos1]<=nums2[pos2] )     ans.push_back(nums1[pos1++]);
            else                    ans.push_back(nums2[pos2++]);
        }
        for( int i=0; i<m+n; i++ )
            nums1[i] = ans[i];
        return ;
    }
};
// @lc code=end

