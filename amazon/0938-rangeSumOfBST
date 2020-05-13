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
    
    // O(n), backtracking
    int rangeSumBST(TreeNode* root, int L, int R) {
        
        // base case
        if (root == nullptr) return 0;
        
        // our sum
        int sum = 0;
        
        if (L <= root->val && root->val <= R) {
            
            int leftSum = rangeSumBST(root->left, L, R);
            int rightSum = rangeSumBST(root->right, L, R);
            
            sum += root->val + leftSum + rightSum;
        }
        else if (R < root->val) {
            
            sum += rangeSumBST(root->left, L, R);
        }
        else if (L > root->val) {
            
            sum += rangeSumBST(root->right, L, R);
        }
        
        return sum;
    }
};
