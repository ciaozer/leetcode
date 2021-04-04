/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start

//Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };


class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* ans = root;
        while(1)
        {
            if( p->val < ans->val && q->val < ans->val )            ans = ans->left;
            else if( p->val > ans->val && q->val > ans->val )       ans = ans->right;
            else                                                    break;
        }
        return ans;
    }
};
// @lc code=end

