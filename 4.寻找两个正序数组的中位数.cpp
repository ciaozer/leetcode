/*
 * @lc app=leetcode.cn id=4 lang=cpp
 *
 * [4] 寻找两个正序数组的中位数
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int pos1=0, pos2=0;
        vector<int> vec;
        if( (n1+n2)&1 )
        {
            for( int i=0; i<=((n1+n2)>>1); i++ )
            {
                if(pos1==n1)
                {
                    vec.push_back(nums2[pos2]);
                    pos2++;
                }
                else if(pos2==n2)
                {
                    vec.push_back(nums1[pos1]);
                    pos1++;
                }
                else if(nums1[pos1] <= nums2[pos2])
                {
                    vec.push_back(nums1[pos1]);
                    pos1++;
                }
                else 
                {
                    vec.push_back(nums2[pos2]);
                    pos2++;
                }
            }
            return (double)vec.back();
        }
        else
        {
            for( int i=0; i<=((n1+n2)>>1); i++ )
            {
                if(pos1==n1)
                {
                    vec.push_back(nums2[pos2]);
                    pos2++;
                }
                else if(pos2==n2)
                {
                    vec.push_back(nums1[pos1]);
                    pos1++;
                }
                else if(nums1[pos1] <= nums2[pos2])
                {
                    vec.push_back(nums1[pos1]);
                    pos1++;
                }
                else 
                {
                    vec.push_back(nums2[pos2]);
                    pos2++;
                }
            }
            return ((double)vec.back()+(double)vec[vec.size()-2])/2.0;
        }
    }
};
// @lc code=end

