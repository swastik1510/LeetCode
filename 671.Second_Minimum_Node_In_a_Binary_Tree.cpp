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
    int findSecondMinimumValue(TreeNode* root) {
        if(root == nullptr || (root->left == nullptr && root->right == nullptr)){
            return -1;
        }

        int leftVal = root->left->val;
        int rightVal = root->right->val;

        if (root->left->val == root->val)
            leftVal = findSecondMinimumValue(root->left);
        if (root->right->val == root->val)
            rightVal = findSecondMinimumValue(root->right);

        // If both children have the same value as the root,
        // then the second minimum value can be found within them.
        if (leftVal != -1 && rightVal != -1)
            return min(leftVal, rightVal);
        else if (leftVal != -1)
            return leftVal;
        else
            return rightVal;
    }
};