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
      TreeNode*prev=nullptr;
      vector<int>ans;
      int count=0;
      int maxcount=0;
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr)
            return ans;

        findMode(root->left);
        if(prev==nullptr)
         count=1;
        else if(root->val==prev->val)
          count++;
        else 
           count=1; 
        
        if(count>maxcount)
        {
            maxcount=count;
            ans.clear();
            ans.push_back(root->val);
        }
        else if(count==maxcount)
        {
            ans.push_back(root->val);
        }
        

        prev=root;
        findMode(root->right);    

        return ans;
        
    }
};