class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int row=mat.size();
        int col= mat[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=i+1;j<col;j++)

            {
                swap(mat[i][j],mat[j][i]);

            }
        }
        for(int i=0;i<row;i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }


        
    }
};