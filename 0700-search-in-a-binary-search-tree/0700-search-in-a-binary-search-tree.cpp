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
    TreeNode* ans=nullptr;
         void bst(TreeNode* root,int val)
         {
            if(root==nullptr)
            {
                return ;
            }
            if(root->val==val)
            {
                ans=root;
                return ;
            }
            if(root->val >val)
            {
                bst(root->left,val);
                
            }
            else
            {
                bst(root->right,val);
            }
         }
    TreeNode* searchBST(TreeNode* root, int val) {
        bst(root,val);
        return ans;

        
    }
};