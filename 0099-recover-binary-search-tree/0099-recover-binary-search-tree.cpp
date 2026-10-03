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
    TreeNode* prev = nullptr;
    int error = 0;
    TreeNode* f1 = nullptr;
    TreeNode* s1 = nullptr;
    TreeNode* f2 = nullptr;
    TreeNode* s2 = nullptr;
    void bst(TreeNode* root) {
        if (root == nullptr)
            return;
        bst(root->left);
        if (prev == nullptr)
            prev = root;
        else

        {
            if (root->val < prev->val) {
                if (error == 0) {
                    f1 = prev;
                    s1 = root;
                    
                    error++;
                } else {
                    f2 = prev;
                    s2 = root;
                    error++;
                }
            }
        }
        prev = root;
        bst(root->right);
        
    }
    void recoverTree(TreeNode* root) {
        bst(root);
        if (error == 1) {
            swap(f1->val, s1->val);

        } else {
            swap(f1->val, s2->val);
        }
    }
};