class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int top=0,front=0,side=0;
        for(int i=0;i<n;i++)
        {
            int maxrow=0;
            for(int j=0;j<m;j++)

            {
                maxrow=max(maxrow,grid[i][j]);
                 if(grid[i][j]>0)
                   top++;

            }
            front+=maxrow;

        }
        for(int i=0;i<m;i++)
        {
            int maxcol=0;
            for(int j=0;j<n;j++)
            {
                maxcol=max(maxcol,grid[j][i]);
            }
            side+=maxcol;
        }
        return top+front+side;
    }
    
};