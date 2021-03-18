/*
 * @lc app=leetcode.cn id=108 lang=cpp
 *
 * [108] 将有序数组转换为二叉搜索树
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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return create(nums, 0, nums.size()-1);
    }
    TreeNode* create(vector<int> nums, int l, int r)
    {
        if(l>r)     return nullptr;
        if(l==r)    
        {
            TreeNode* tmp = new TreeNode(nums[l]);
            return tmp;
        }
        int mid = (r+l)>>1;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = create(nums, l, mid-1);
        root->right = create(nums, mid+1, r);
        return root;
    }
};
// @lc code=end

