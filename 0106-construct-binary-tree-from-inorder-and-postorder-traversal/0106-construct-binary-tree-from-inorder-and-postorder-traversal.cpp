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
     unordered_map<int,int>inorder;
     int indx;
      TreeNode * bt(vector<int>&post,int low,int high)
      {
        if(low>high)
         return nullptr;
        TreeNode* node =new TreeNode(post[indx]);
         indx--;
        int idx= inorder[node->val];
        node->right=bt(post,idx+1,high);
        node->left=bt(post,low,idx-1);
        return node;
      }
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        int n=in.size();
        indx=n-1;
        for(int i=0;i<n;i++)
        {
            inorder[in[i]]=i;

        }
        return bt(post,0,n-1);
        

        
    }
};