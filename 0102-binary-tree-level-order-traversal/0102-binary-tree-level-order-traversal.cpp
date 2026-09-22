class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> ans;
        vector<int> row;

        if(root == NULL)
            return ans;

        queue<TreeNode*> q;

        q.push(root);
        q.push(NULL);

        while(!q.empty())
        {
            TreeNode* curr = q.front();
            q.pop();

            if(curr == NULL)
            {
                ans.push_back(row);
                row.clear();

                if(!q.empty())
                {
                    q.push(NULL);
                }

                continue;
            }

            row.push_back(curr->val);

            if(curr->left != NULL)
            {
                q.push(curr->left);
            }

            if(curr->right != NULL)
            {
                q.push(curr->right);
            }
        }

        return ans;
    }
};