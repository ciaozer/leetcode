/*
 * @lc app=leetcode.cn id=220 lang=cpp
 *
 * [220] 存在重复元素 III
 */

// @lc code=start
#include<vector>
#include<cmath>
#include<set>
#include<unordered_map>
using namespace std;
/* 暴力超时
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        int n = nums.size();
        for( int i=0; i<n-k; i++ )
        {
            for( int j=1; j<=k; j++ )
            {
                if( (long)abs(nums[i]-nums[i+j]) <= (long)t )
                    return true;
            }
        }
        return false;
    }
};*/

/* 滑动窗口 nlogn
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long> s;
        for( int i=0; i<nums.size(); i++ )
        {
            set<long>::iterator it = s.lower_bound((long)nums[i]-t);  //找到大于等于nums[i]-t的最小值的下标
            if( it != s.end() && *it <= (long)nums[i]+t )
                return true;
            s.insert(nums[i]);
            if(i>=k)
                s.erase(nums[i-k]); //滑动窗口
        }
        return false;
    }
};*/

//桶
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        unordered_map<long, long> mp;
        for( int i=0; i<nums.size(); i++ )
        {
            long tmp = (long) nums[i];
            int id = get_id(tmp, (long)t);
            if( i-k-1>=0 )
                mp.erase(get_id((long)nums[i-k-1], (long)t));
            if( mp.find(id) != mp.end() )
                return true;
            if( mp.find(id-1) != mp.end() && tmp-mp[id-1] <= (long)t )
                return true;
            if( mp.find(id+1) != mp.end() && mp[id+1]-tmp <= (long)t )
                return true;
            mp[id] = tmp;
        }
        return false;
    }

    long get_id(long n, long t)
    {
        if( n>=0 )      return n/(t+1);         //正数直接分桶
        else            return (n+1)/(t+1)-1;   //负数处理
    }
};
// @lc code=end