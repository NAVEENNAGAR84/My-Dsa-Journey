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
      int indx=0;
    TreeNode* bt(vector<int>pre,int low,int high)
    {
        if(low>high)
          return nullptr;
        TreeNode * node= new TreeNode(pre[indx]);
        indx++;
        int index=inorder[node->val];
        node->left=bt(pre,low,index-1);
        node->right=bt(pre,index+1,high);
          return node;

    }

    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        int n=in.size();
        for(int i=0;i<n;i++)
        {
            inorder[in[i]]=i;
        }
        return bt(pre,0,n-1);
        
    }
};