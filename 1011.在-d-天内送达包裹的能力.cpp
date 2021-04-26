/*
 * @lc app=leetcode.cn id=1011 lang=cpp
 *
 * [1011] 在 D 天内送达包裹的能力
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int maxweight=0, sum=0;
        for( int i=0; i<weights.size(); i++ )
        {
            maxweight = max(maxweight, weights[i]);
            sum += weights[i];
        }
        int l=maxweight, r=sum;
        while(l<=r)
        {
            int mid = l+((r-l)>>1);
            int days=1, tmp=0;
            for( int i=0; i<weights.size(); i++ )
            {
                if( tmp+weights[i]>mid )
                {
                    days++;
                    tmp=weights[i];
                    continue;
                }
                tmp += weights[i];
            }
            if(days<=D)     r=mid-1;
            else            l=mid+1;
        }
        return l;
    }
};
// @lc code=end

