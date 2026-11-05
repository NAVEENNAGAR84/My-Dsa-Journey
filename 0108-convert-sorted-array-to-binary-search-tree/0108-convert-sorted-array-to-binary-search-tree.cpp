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
    TreeNode* SAT(vector<int>&nums,int s,int e) {
        if(s>e)
         {
            return nullptr;
         }
         int mid=s+(e-s)/2;
         TreeNode * root=new TreeNode(nums[mid]);
         root->left=SAT(nums,s,mid-1);
         root->right=SAT(nums,mid+1,e);
         
          return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      int n=nums.size();
      
        return  SAT(nums,0,n-1);

        
    }
};