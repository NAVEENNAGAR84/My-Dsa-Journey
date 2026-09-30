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
    
    void pathsum(TreeNode* root, long long sum, int& count, int targetSum) {
        if (root == nullptr) {
            return;
        }
        sum += root->val;
       

        if (sum == targetSum)
            count++;

        pathsum(root->left, sum, count, targetSum);
        pathsum(root->right, sum, count, targetSum);
        return;
    }


    int pathSum(TreeNode* root, int targetSum) {
        if(root==nullptr)
        {
            return 0;
        }
        int count=0;
        pathsum(root, 0, count, targetSum);
        count+=pathSum(root->left,targetSum);
        count+=pathSum(root->right,targetSum);

        return count;
    }
};