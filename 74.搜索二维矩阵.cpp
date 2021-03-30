/*
 * @lc app=leetcode.cn id=74 lang=cpp
 *
 * [74] 搜索二维矩阵
 */

// @lc code=start
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if( matrix.empty() )    return false;
        vector<int> row0;
        for( int i=0; i<matrix.size(); i++ )    row0.push_back(matrix[i][0]);
        int row = upper_bound(row0.begin(), row0.end(), target) - row0.begin();
        if( row==0 )            return false;
        row--;
        return binary_search(matrix[row].begin(), matrix[row].end(), target);
    }
};

// @lc code=end

