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
private:
    bool inorder(TreeNode* root, int val){
        if (root == nullptr){
            return true;
        }

        if (root->val != val){
            return false;
        }
        
        return inorder(root->left, val) && inorder(root->right, val);
    }
public:
    bool isUnivalTree(TreeNode* root) {
        if (root == nullptr)
            return true;
        
        return inorder(root, root->val);
    }
};
