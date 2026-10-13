class Solution {
public:
      void dfs(vector<vector<int>>&image,int i,int j,int color,int originalcolor)
      {
        int row=image.size();
        int col=image[0].size();
        if(i<0||j<0||j>=col||i>=row||image[i][j]!=originalcolor)
            return ;
         image[i][j]=color;  
        int dr[]={0,0,-1,1};
        int dc[]={1,-1,0,0};
        for(int k=0;k<4;k++)
        {
            int newrow=i+dr[k];
            int newcol=j+dc[k];
            dfs(image,newrow,newcol,color,originalcolor);     
        }
    
      }
        
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int row=image.size();
        int col=image[0].size();

       int originalcolor=image[sr][sc];
        if(originalcolor==color)
           return image;
         dfs(image,sr,sc,color,originalcolor);

         return image;
      
         
         
        
    }
};