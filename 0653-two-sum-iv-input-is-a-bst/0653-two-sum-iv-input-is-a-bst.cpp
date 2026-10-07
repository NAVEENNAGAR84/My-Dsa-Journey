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
    TreeNode* getleft(stack<TreeNode*>&st)
    {
        TreeNode* node=st.top();
        st.pop();
        TreeNode* curr=node->right;
        while(curr)
        {
            st.push(curr);
            curr=curr->left;
        }
        if(st.empty())
         return nullptr;
       return st.top();  
    }
    TreeNode* getright(stack<TreeNode*>&st)
    {
    TreeNode* node=st.top();
    st.pop();
    TreeNode * curr= node->left;
    while(curr)
    {
        st.push(curr);
        curr=curr->right;
    }
    if(st.empty())
    {
        return nullptr;
    }
    return st.top();
    }
    bool findTarget(TreeNode* root, int k) {
        if(root==nullptr)
          return false;
        stack<TreeNode*>leftstack;
        stack<TreeNode*>rightstack;
        TreeNode *curr=root;
        while(curr)
        {
            rightstack.push(curr);
            curr=curr->right;
        }  
        curr=root;
        while(curr)
        {
            leftstack.push(curr);
            curr=curr->left;
        }
        TreeNode* left=leftstack.top();
        TreeNode* right=rightstack.top();
        while(left!=nullptr && right!=nullptr && left!=right)
        {
            int sum=left->val+right->val;
            if(sum==k)
             return true;
            if(sum<k)
            {
                left=getleft(leftstack);
            } 
            else
            {
                right=getright(rightstack);
            }
        }
        return false;
        
    }
};