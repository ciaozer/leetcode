/*
 * @lc app=leetcode.cn id=897 lang=cpp
 *
 * [897] 递增顺序搜索树
 */

// @lc code=start

//Definition for a binary tree node.
#include<vector>
using namespace std;
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
    vector<int> vec;
    TreeNode* increasingBST(TreeNode* root) {
        infix(root);
        TreeNode* ans = new TreeNode(0);
        TreeNode* cur = ans;
        for( int i=0; i<vec.size(); i++ )
        {
            cur->right = new TreeNode(vec[i]);
            cur = cur->right;
        }
        return ans->right;
    }

    void infix(TreeNode* root)
    {
        if(!root)   return ;
        infix(root->left);
        vec.push_back(root->val);
        infix(root->right);
        return ;
    }
};
// @lc code=end

