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
    int deepestLevel;
    int sum;

    void dfs(TreeNode* node, int level) {
        if (!node) return;

        if (level > deepestLevel) {
            deepestLevel = level;
            sum = node->val;
        } else if (level == deepestLevel) {
            sum += node->val;
        }

        dfs(node->left, level + 1);
        dfs(node->right, level + 1);
    }

public:
    int deepestLeavesSum(TreeNode* root) {
        deepestLevel = 0;
        sum = 0;
        dfs(root, 0);
        return sum;
    }
};