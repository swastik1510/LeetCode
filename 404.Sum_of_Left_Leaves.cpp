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
    int sumOfLeftLeaves(TreeNode* root) {
        if (root == nullptr)
            return 0;
        
        int sum = 0;
        // Checking if the left child is a leaf node
        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val; // If left child is a leaf node, adding its value to the sum
        }
        
        // Recursively traverse both left and right subtrees
        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);
        
        return sum;
    }
};