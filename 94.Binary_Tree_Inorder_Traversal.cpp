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
    void inorder(TreeNode* root, vector<int> &result){
        if(root == NULL){
            return;
        }
        
        // Traverse the left subtree
        inorder(root -> left, result);

        // Process the current node
        result.push_back(root->val);
        
        // Traverse the left subtree
        inorder(root -> right, result);
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int> result;
       inorder(root, result);
       return result;
    }
};