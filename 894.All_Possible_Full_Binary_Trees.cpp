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
    vector<TreeNode*> allPossibleFBT(int n) {
        // Base case: if n is even or less than 1, return an empty vector
        if (n % 2 == 0 || n < 1)
            return {};
        
        // Base case: if n is 1, return a vector containing one tree node
        if (n == 1)
            return {new TreeNode(0)};
        
        vector<TreeNode*> result;
        
        // For each possible number of nodes on the left subtree,
        // recursively generate left and right subtrees
        for (int i = 1; i < n; i += 2) {
            vector<TreeNode*> leftSubtrees = allPossibleFBT(i);
            vector<TreeNode*> rightSubtrees = allPossibleFBT(n - 1 - i);
            
            // Combine left and right subtrees in all possible combinations
            for (TreeNode* left : leftSubtrees) {
                for (TreeNode* right : rightSubtrees) {
                    TreeNode* root = new TreeNode(0);
                    root->left = left;
                    root->right = right;
                    result.push_back(root);
                }
            }
        }
        
        return result;
    }
};