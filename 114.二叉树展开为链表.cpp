/*
 * @lc app=leetcode.cn id=114 lang=cpp
 *
 * [114] 二叉树展开为链表
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
    vector<int> vec;
    void flatten(TreeNode* root) {
        if( !root )     return ;
        infix(root);
        TreeNode* tmp = root;
        for( int i=1; i<vec.size(); i++ )
        {
            tmp->right = new TreeNode(vec[i]);
            tmp->left = nullptr;
            tmp = tmp->right;
        }
    }
    void infix(TreeNode* root)
    {
        if( !root )     return ;
        vec.push_back(root->val);
        infix(root->left);
        infix(root->right);
        return ;
    }
};
// @lc code=end

