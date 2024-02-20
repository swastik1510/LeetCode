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
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }

private:
    int dfs(TreeNode* node, int currentSum) {
        if (node == nullptr)
            return 0;
        
        // Update the current binary number
        currentSum = (currentSum << 1) | node->val;
        
        // If it's a leaf node, return the binary number
        if (node->left == nullptr && node->right == nullptr)
            return currentSum;
        
        // Recursively calculate the sum for left and right subtrees
        return dfs(node->left, currentSum) + dfs(node->right, currentSum);
    }
};