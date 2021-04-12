/*
 * @lc app=leetcode.cn id=783 lang=cpp
 *
 * [783] 二叉搜索树节点最小距离
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
#include<vector>
using namespace std;

class Solution {
public:
    int ans = INT_MAX;
    vector<int> vec;

    int minDiffInBST(TreeNode* root) {
        infix(root);
        for( int i=0; i<vec.size()-1; i++ )
            ans = min(ans, vec[i+1]-vec[i]);
        return ans;
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

