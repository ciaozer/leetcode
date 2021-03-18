/*
 * @lc app=leetcode.cn id=107 lang=cpp
 *
 * [107] 二叉树的层序遍历 II
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        if( !root )     return ans;
        queue<TreeNode*> q;
        q.push(root);
        while( !q.empty() )
        {
            ans.push_back(vector<int> ());
            int num = q.size();
            for( int i=0; i<num; i++ )
            {
                TreeNode* tmp = q.front();
                q.pop();
                ans.back().push_back(tmp->val);
                if( tmp->left )     q.push(tmp->left);
                if( tmp->right )    q.push(tmp->right);
            }
        }
       reverse(ans.begin(), ans.end());
        return ans;
    }
};
// @lc code=end

