/*
 * @lc app=leetcode.cn id=938 lang=cpp
 *
 * [938] 二叉搜索树的范围和
 */

// @lc code=start

#include<vector>
using namespace std;
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
    vector<int> vec;
    int rangeSumBST(TreeNode* root, int low, int high) {
        infix(root);
        int pos=0, sum=0;
        while( vec[pos] < low && pos < vec.size() ) pos++;
        while( pos < vec.size() )
        {
            if( vec[pos] > high )   break;
            sum += vec[pos];
            pos++;
        }
        return sum;
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

