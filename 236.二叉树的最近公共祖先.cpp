/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start

//Definition for a binary tree node.
#include<unordered_map>
#include<vector>
using namespace std;
// struct TreeNode {
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
// };

class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> father;
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        find_father(root);
        father[root] = nullptr;
        vector<TreeNode*> path1;
        vector<TreeNode*> path2;
        path1.push_back(p);
        path2.push_back(q);
        TreeNode* cur = p;
        while(father[cur])
        {
            path1.push_back(father[cur]);
            cur = father[cur];
        }
        cur = q;
        while(father[cur])
        {
            path2.push_back(father[cur]);
            cur = father[cur];
        }
        TreeNode* ans;
        unordered_map<TreeNode*, bool> vis;
        while(p)
        {
            vis[p] = true;
            p = father[p];
        }
        while(q)
        {
            if( vis[q] )    return q;
            q = father[q];
        }
        return nullptr;
    }
    void find_father(TreeNode* root)
    {
        if( root->left )
        {
            father[root->left] = root;
            find_father(root->left);
        }
        if( root->right )
        {
            father[root->right] = root;
            find_father(root->right);
        }
        return ;
    }
};
// @lc code=end

