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
    
    void huffman (TreeNode* root, vector<int> code, int& sum) {
        
        code.push_back(root->val);
        
        if (root->left) {
            
            huffman(root->left, code, sum);
        }
        if (root->right) {
            
            huffman(root->right, code, sum);
        }
        
        if (!root->left && !root->right) {
            
            int b = 1;
            int dec = 0;
            
            while (code.size()) {
                
                dec += code.back() * b;
                b *= 2;
                code.pop_back();
            }
            
            sum += dec;
        }
    }
    
    int sumRootToLeaf(TreeNode* root) {
        
        int sum = 0;
        vector<int> code;
        
        huffman(root, code, sum);
        
        return sum;
    }
};
