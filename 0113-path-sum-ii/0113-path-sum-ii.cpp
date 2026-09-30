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
   vector<vector<int>>ans;
   void pathsum(TreeNode* root,vector<int>temp,int sum,int targetSum)
   {
    if(root==nullptr)
    {
        return;
    }
    sum += root->val;
    temp.push_back(root->val);
    if(root->left==nullptr && root->right==nullptr)
    {
        if(sum==targetSum)
        {
        ans.push_back(temp);
       
        }
         return;
    }
    pathsum(root->left,temp,sum,targetSum);
    pathsum(root->right,temp,sum,targetSum);
    return ;

   }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        pathsum(root,{},0,targetSum);
        return ans;
        
    }
};