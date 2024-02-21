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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if (nums.empty()) return nullptr;
        
        // Find the maximum element and its index
        int maxIndex = 0;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[maxIndex]) {
                maxIndex = i;
            }
        }
        
        // Create the root node with the maximum element
        TreeNode* root = new TreeNode(nums[maxIndex]);
        
        // Construct left subtree recursively
        vector<int> leftSubArray(nums.begin(), nums.begin() + maxIndex);
        root->left = constructMaximumBinaryTree(leftSubArray);
        
        // Construct right subtree recursively
        vector<int> rightSubArray(nums.begin() + maxIndex + 1, nums.end());
        root->right = constructMaximumBinaryTree(rightSubArray);
        
        return root;
    }
};