/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */

class Solution {
public:
    bool res = false;
    void pathsum(TreeNode* root, int sum, int targetSum) {
        if (root == nullptr) {
            return;
        }
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == targetSum) {
                res = true;
                return;
            }
        }
        pathsum(root->left, sum, targetSum);
        pathsum(root->right, sum, targetSum);
        return;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        pathsum(root,0,targetSum);
        return res;
    }
};