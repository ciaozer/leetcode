/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        dfs(root, targetSum);
        return ans;
    }
    void dfs(TreeNode* root, int sum)
    {
        if( !root )         return ;
        path.push_back(root->val);
        sum -= root->val;
        if( !root->left && !root->right && !sum )
            ans.push_back(path);
        dfs(root->left, sum);
        dfs(root->right, sum);
        path.pop_back();
    }
};
// @lc code=end

