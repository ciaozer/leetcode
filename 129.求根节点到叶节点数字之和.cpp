/*
 * @lc app=leetcode.cn id=129 lang=cpp
 *
 * [129] 求根节点到叶节点数字之和
 */

// @lc code=start

//Definition for a binary tree node.
// #include<vector>
// using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    vector<vector<int>> paths;
    vector<int> path;
    int sumNumbers(TreeNode* root) {
        dfs(root);
        int ans = 0;
        for( int i=0; i<paths.size(); i++ )
        {
            int num = 0;
            for( int j=0; j<paths[i].size(); j++ )
                num = num*10 + paths[i][j];
            ans += num;
        }
        return ans;
    }
    void dfs(TreeNode* root)
    {
        if( !root )     return ;
        path.push_back(root->val);
        if( !root->left && !root->right )
            paths.push_back(path);
        dfs(root->left);
        dfs(root->right);
        path.pop_back();
        return ;
    }
};
// @lc code=end

