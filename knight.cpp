class Solution {
public:
       bool isvalid(vector<vector<int>>& grid,int row,int col, int n,int value) 
       {
        if(row<0||col<0|| row>=n||col>=n|| grid[row][col]!=value )
          return false;
        if(value==n*n-1)  
         return true;
      bool ans1=  isvalid(grid,row-2,col+1,n,value+1);
      bool ans2=  isvalid(grid,row-1,col+2,n,value+1);
      bool ans3=  isvalid(grid,row+1,col+2,n,value+1);
      bool ans4=  isvalid(grid,row+2,col+1,n,value+1);
      bool ans5=  isvalid(grid,row+2,col-1,n,value+1);
      bool ans6=  isvalid(grid,row+1,col-2,n,value+1);
      bool ans7=  isvalid(grid,row-1,col-2,n,value+1);
      bool ans8=  isvalid(grid,row-2,col-1,n,value+1);
        return  ans1||ans2||ans3||ans4||ans5||ans6||ans7||ans8;
      
       }
    bool checkValidGrid(vector<vector<int>>& grid) {
        int n=grid.size();
         
         return isvalid(grid,0,0,n,0); ;
    }
};