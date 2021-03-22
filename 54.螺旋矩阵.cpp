/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        if( matrix.empty() )    return ans;
        int n=matrix.size(), m=matrix[0].size();
        int direction=0, x=0, y=0, up=0, down=matrix.size(), left=0, right=matrix[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        while(1)
        {
            switch (direction)
            {
            case 0:
                if(vis[x][y+1])     direction=1;
                else
                {
                    y++;
                }
                break;
            case 1:
                x++;
                if(x==down)
                {
                    direction=2;
                    down--;
                }
                break;
            case 2:
                y--;
                if(x==left)
                {
                    direction=3;
                    left++;
                }
                break;
            case 3:
                x--;
                if(x==up)
                {
                    direction=0;
                    up++;
                }
                break;
            default:
                break;
            }
            if( left==right && up==down )
                break;
        }
        return ans;
    }
};
// @lc code=end

