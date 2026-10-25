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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {  
        TreeNode* temp = root;

        while(temp){
            int value = temp->val;

            if(max(p->val,q->val) < value){
                temp = temp->left;
            }else if(min(p->val,q->val) > value){
                temp = temp->right;
            }else{
                return temp;
            }
        }

        return NULL;
        
    }
};
