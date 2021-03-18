/*
 * @lc app=leetcode.cn id=103 lang=cpp
 *
 * [103] 二叉树的锯齿形层序遍历
 */

// @lc code=start

//Definition for a binary tree node.
// #include<vector>
// #include<algorithm>
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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if( !root )     return ans;
        queue<TreeNode*> q;
        q.push(root);
        while( !q.empty() )
        {
            int num = q.size();
            ans.push_back(vector<int> ());
            for( int i=0; i<num; i++ )
            {
                TreeNode* tmp = q.front();
                q.pop();
                ans.back().push_back(tmp->val);
                if(tmp->left)      q.push(tmp->left);
                if(tmp->right)     q.push(tmp->right);
            }
        }
        for( int i=1; i<ans.size(); i=i+2 )
            reverse(ans[i].begin(), ans[i].end());
        return ans;
    }
};
// @lc code=end

