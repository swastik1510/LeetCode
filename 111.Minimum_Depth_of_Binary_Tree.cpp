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
    int minDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }

        int left = minDepth(root -> left);
        int right = minDepth(root -> right);

        // If either left or right child is null, we consider the non-null child.
        if (!root->left || !root->right) {
            return left + right + 1;
        }

        int output = min(left,right) +1;
        return output;
    }
};