/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public: 
    int solve(TreeNode* root, int& res){
        if(!root) return 0;

        int left = max(solve(root->left,res),0);
        int right = max(solve(root->right,res),0);

        res = max(res,left+right+root->val);

        return root->val + max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        int res = root->val;
        solve(root,res);
        return res;
    }
};
