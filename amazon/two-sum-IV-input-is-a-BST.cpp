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
    bool found(TreeNode* root, int k, unordered_set<int>& mySet) {
        
        if (root == nullptr) return false;
        
        if (mySet.count(k - root->val)) return true;
        mySet.insert(root->val);
        
        return found(root->left, k, mySet) || found(root->right, k, mySet);
    }
    
    bool findTarget(TreeNode* root, int k) {
        
        unordered_set<int> mySet;
        return found(root, k, mySet);
    }
};
