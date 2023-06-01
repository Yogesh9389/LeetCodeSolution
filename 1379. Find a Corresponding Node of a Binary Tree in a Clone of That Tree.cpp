/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
   
    void preorder(TreeNode* root, TreeNode* &ans, TreeNode* target){
        if(root == NULL) return;
        if(root->val == target->val){
            ans = root;
        }
        preorder(root->left, ans, target);
        preorder(root->right, ans, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      TreeNode* ans = NULL;
      preorder(cloned, ans, target);
      return ans;

    }
};