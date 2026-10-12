class Solution {
public:
  
 int dfs(vector<vector<int>>&grid,int i,int j)
 {
    int row=grid.size();
    int col=grid[0].size();
    if(i<0 ||j<0 || j>=col ||i>=row||grid[i][j]==0)
       return 0;
    

     grid[i][j]=0;
     int dr[]={0,0,1,-1};
     int dc[]={1,-1,0,0};
          int area=1;
     for(int k=0;k<4;k++)
     {
        int newrow=i+dr[k];
        int newcol=j+dc[k];
   

       area+= dfs(grid,newrow,newcol);
     }  

     return area;
 }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row=grid.size();
        int col= grid[0].size();
        int maxarea=0;
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    int area=dfs(grid,i,j);
                    maxarea=max(area,maxarea);
                     


                }
            }
        }
        return maxarea;
    
    }
};