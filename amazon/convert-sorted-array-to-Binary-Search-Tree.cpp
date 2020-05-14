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
    TreeNode* inputData(vector<int>& nums, int low, int high) {
        
        if (low > high) return nullptr;
        
        int mid = (low + high) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        
        root->left = inputData(nums, low, mid - 1);
        root->right = inputData(nums, mid + 1, high);
        
        return root;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        
        return nums.empty() ? nullptr : inputData(nums, 0, (int)nums.size() - 1);
    }
};
