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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == NULL){
          return false; // Base case: empty tree
        }    
        
        // Subtract the current node's value from the target sum
        targetSum -= root->val;
        
        if (root->left == NULL && root->right == NULL) { // Check if leaf node
            return targetSum == 0; // Return true if target sum equals 0
        }
        
        // Recursively check left and right subtrees
        return hasPathSum(root->left, targetSum) || hasPathSum(root->right, targetSum);
    }
};