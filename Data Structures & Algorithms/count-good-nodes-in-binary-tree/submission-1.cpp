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
    void solve(TreeNode* node, int& cnt,int value){
        if(!node) return;

        if(node->val >= value){
            cnt++;
        }

        value = max(value,node->val);
        
        solve(node->left,cnt,value);
        solve(node->right,cnt,value);
    }
    int goodNodes(TreeNode* root) {
        int cnt=0;
        if(!root) return cnt;
        int value = root->val;
        solve(root,cnt,value);
        return cnt;
    }
};
