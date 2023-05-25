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
    vector<int> inorderTraversal(TreeNode* root) {
        
        
        
        vector<int> ans;
        if(root == NULL) return ans;
        vector<int> left = inorderTraversal(root->left);
       ans.insert(ans.end(), left.begin(), left.end());
       ans.push_back(root->val);
        vector<int> right = inorderTraversal(root->right);
        ans.insert(ans.end(),right.begin(),right.end());
        return ans;

    }
};


//Using Stack

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        // Using Stack
        stack<TreeNode*> s;
        vector<int> ans;
        TreeNode* node = root;
        while(true){
            if(node != NULL){
                s.push(node);
                node = node->left;
            }
            else{
                if(s.empty() == true) break;
                node = s.top();
                s.pop();
                ans.push_back(node->val);
                node = node->right;
            }
            
        }
        return ans;
    }
};