/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
 */

// @lc code=start

//Definition for a binary tree node.
// #include<vector>
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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if( !root )     return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> tmp;
            ans.push_back(tmp);
            int num = q.size();
            for( int i=0; i<num; i++ )
            {
                TreeNode* temp = q.front();
                q.pop();
                ans.back().push_back(temp->val);
                if(temp->left)      q.push(temp->left);
                if(temp->right)     q.push(temp->right);
            }
        }
        return ans;
    }
};
// @lc code=end

