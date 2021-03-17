/*
 * @lc app=leetcode.cn id=144 lang=cpp
 *
 * [144] 二叉树的前序遍历
 */

// @lc code=start

//Definition for a binary tree node.
// #include<bits/stdc++.h>
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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        prefix(root, ans);
        return ans;
    }
    void prefix(TreeNode* root, vector<int>& ans)
    {
        if( !root )     return ;
        ans.push_back(root->val);
        prefix(root->left, ans);
        prefix(root->right, ans);
    }
};
// @lc code=end

