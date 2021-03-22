/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
 */

// @lc code=start

//Definition for a binary tree node.
// #include<queue>
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
    int maxDepth(TreeNode* root) {
        int ans=0;
        queue<TreeNode*> q;
        if(!root)   return 0;
        q.push(root);
        while(!q.empty())
        {
            int num = q.size();
            ans++;
            for( int i=0; i<num; i++ )
            {
                TreeNode* tmp = q.front();
                q.pop();
                if(tmp->left)   q.push(tmp->left);
                if(tmp->right)  q.push(tmp->right);
            }
        }
        return ans;
    }
};
// @lc code=end

