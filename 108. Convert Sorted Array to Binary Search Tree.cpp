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
    TreeNode* createBST(vector<int>& nums, int left, int right){
        if(left > right)  return NULL;
        int mid = left + (right - left)/2;
        TreeNode* temp = new TreeNode(nums[mid]);
        temp->left = createBST(nums, left, mid-1);
        temp->right = createBST(nums, mid+1, right);
        return temp;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode* root =  createBST(nums,0,nums.size()-1);
        return root;
    }
};