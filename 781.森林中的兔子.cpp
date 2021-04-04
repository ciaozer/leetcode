/*
 * @lc app=leetcode.cn id=781 lang=cpp
 *
 * [781] 森林中的兔子
 */

// @lc code=start
#include<vector>
#include<cmath>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int, int> mp;
        for( int x : answers )
            mp[x+1]++;
        int ans=0;
        unordered_map<int, int>::iterator it;
        for( it=mp.begin(); it!=mp.end(); it++ )
        {
            int num = it->first;
            int cnt = it->second;
            ans += ceil(((double)cnt)/(double)num)*num;
        }
        return ans;
    }
};
// @lc code=end


