/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
 */

// @lc code=start

//Definition for a binary tree node.
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if( !root )     return false;
        return dfs(root, targetSum);
    }
    bool dfs(TreeNode* root, int sum)
    {
        if( !root->left && !root->right )
        {
            if(sum == root->val)    return true;
            else                    return false;
        }
        if( !root->left )   return dfs(root->right, sum-root->val);
        if( !root->right )  return dfs(root->left, sum-root->val);
        return dfs(root->right, sum-root->val) || dfs(root->left, sum-root->val); 
    }
};
// @lc code=end

