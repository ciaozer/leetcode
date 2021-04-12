/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
 */

// @lc code=start

//Definition for a binary tree node.
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };

class Solution {
public:
    int ans = INT_MAX;
    int getMinimumDifference(TreeNode* root) {
        int pre = -1;       //找到开始的位置，设置一个取不到的值再判断
        infix(root, pre);
        return ans;
    }

    void infix(TreeNode* root, int &pre)    //pre必须要用引用，否则前面的值都是-1，改了一个之后就都要改
    {
        if(!root)   return ;
        if(root->left)      infix(root->left, pre);
        if( pre != -1 )     ans = min(ans, root->val - pre);
        pre = root->val;
        if(root->right)     infix(root->right, pre);
        return ;
    }
};
// @lc code=end

