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
    int inidx = 0;
    int preidx = 0;
    TreeNode* buildT(vector<int>& preorder, vector<int>& inorder, int limit){       
        if(preidx >= preorder.size()) return NULL;

        if(inorder[inidx] == limit){
            inidx++;
            return NULL;
        }

        TreeNode* node = new TreeNode(preorder[preidx++]);

        node->left = buildT(preorder,inorder,node->val);
        node->right = buildT(preorder,inorder,limit);

        return node;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return buildT(preorder,inorder,INT_MAX);
    }
};
