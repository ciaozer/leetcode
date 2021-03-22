/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int ans  = BinarySearch(0, nums.size()-1, target, nums);
        vector<int> result;
        if( ans == -1 )
        {
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int flag = 0;
        for( int i=ans; i>=0 ; i-- )
            if(nums[i] != target)
            {
                flag = 1;
                result.push_back(i+1);
                break;
            }
        if(!flag)       result.push_back(0);
        flag = 0;
        for( int i=ans; i<nums.size(); i++ )
            if(nums[i] != target)
            {
                flag = 1;
                result.push_back(i-1);
                break;
            }
        if(!flag)       result.push_back(nums.size()-1);
        return result;
    }

    int BinarySearch(int l, int r, int target, vector<int> a)
    {
        if( l>r )       return -1;
        int mid = (l+r)>>1;
        if(a[mid] == target)    return mid;
        if(a[mid] > target)     return BinarySearch(l, mid-1, target, a);
        else                    return BinarySearch(mid+1, r, target, a);
    }
};
// @lc code=end

