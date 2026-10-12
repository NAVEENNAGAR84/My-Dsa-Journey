class Solution {
public:
    void dfs(vector<vector<char>>&grid,int i,int j)
    {
        int row=grid.size();
        int col=grid[0].size();
        if(i<0 || i>=row || j<0 ||j>=col || grid[i][j]=='0')
            return ;

        grid[i][j] ='0';
        int dr[]={-1,1,0,0};
        int dc[]={ 0,0,1,-1}; 
        for(int k=0;k<4;k++)
        {
            int newrow=i+dr[k];
            int newcol= j+dc[k];

            dfs(grid,newrow,newcol);
        }
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int islands=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                    islands++;
                    dfs(grid,i,j);
                }
            }
        }
        return islands;
        
    }
};