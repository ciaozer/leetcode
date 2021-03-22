/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
#include<utility>
#include<vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> pos;
        if( matrix.empty() )    return ;
        for( int i=0; i<matrix.size(); i++ )
            for( int j=0; j<matrix[0].size(); j++ )
                if( matrix[i][j] == 0 )
                    pos.push_back(make_pair(i, j));
        for( int i=0; i<pos.size(); i++ )
        {
            for( int j=0; j<matrix[0].size(); j++ )
                matrix[pos[i].first][j] = 0;
            for( int j=0; j<matrix.size(); j++ )
                matrix[j][pos[i].second] = 0;
        }
        return ;
    }
};
// @lc code=end

