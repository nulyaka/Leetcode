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
    
    TreeNode* x_parent = nullptr;
    TreeNode* y_parent = nullptr;
    
    int x_height = -1;
    int y_height = -2;
    
    void dfs(TreeNode* root, TreeNode* parent, int height, int x, int y) {
        
        if (root == nullptr) return;
        
        if (x == root->val) {
            x_parent = parent;
            x_height = height;
        }
        else if (y == root->val) {
            y_parent = parent;
            y_height = height;
        }
        else {
            dfs(root->left, root, height + 1, x, y);
            dfs(root->right, root, height + 1, x, y);
        }
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        dfs(root, nullptr, 0, x, y);
        
        return (x_height == y_height) && (x_parent != y_parent);
    }
};
